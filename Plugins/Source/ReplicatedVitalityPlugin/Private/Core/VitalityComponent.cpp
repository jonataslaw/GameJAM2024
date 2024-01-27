// Copyright Vinipi Studios 2024. All rights reserved.


#include "Core/VitalityComponent.h"

#include "Core/LandingAction.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Utils/VitalInterface.h"
#include "Utils/VitalityTypes.h"
#include "Core/LandingAction.h"
#include "Core/StaminaAction.h"
#include "Utils/VitalFunctionLib.h"
#include "GameFramework/Actor.h"
#include "Curves/CurveFloat.h"

UVitalityComponent::UVitalityComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UVitalityComponent::BeginPlay()
{
	Super::BeginPlay();

	if (!GetOwner()->HasAuthority())
		return;

	GenerateLandingActions();
}

void UVitalityComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (!GetOwner()->HasAuthority())
		return;

	RefreshHealth(DeltaTime);

	RefreshShield(DeltaTime);

	RefreshStamina(DeltaTime);
}

void UVitalityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, DeathState);
	
	DOREPLIFETIME(ThisClass, CurrentHealth);
	DOREPLIFETIME(ThisClass, MaxHealth);

	DOREPLIFETIME(ThisClass, CurrentShield);
	DOREPLIFETIME(ThisClass, MaxShield);

	DOREPLIFETIME(ThisClass, CurrentStamina);
	DOREPLIFETIME(ThisClass, MaxStamina);
}

/*
 * General
*/

void UVitalityComponent::ReceiveDamage(float Amount, EDamageType DamageType)
{
	if (!GetOwner()->HasAuthority())
		return;

	if (Amount < 1.f)
		return;
	
	switch (DamageType)
	{
	case EDamageType::EDT_Standard:
		{
			if (IVitalInterface::Execute_IsAbleToReceiveShieldDamage(GetOwner(), this))
			{
				const float Remaining = Amount - CurrentShield;
				
				SetShield(CurrentShield - Amount);
				
				if (Remaining > 0.f && IVitalInterface::Execute_IsAbleToReceiveHealthDamage(GetOwner(), this))
					SetHealth(CurrentHealth - Remaining);

				OnReceiveDamage.Broadcast(DamageType, Amount, this);
				
				break;	
			}
		}
	case EDamageType::EDT_HealthOnly:
		{
			if (IVitalInterface::Execute_IsAbleToReceiveHealthDamage(GetOwner(), this))
			{
				SetHealth(CurrentHealth - Amount);
				OnReceiveDamage.Broadcast(DamageType, Amount, this);
				break;
			}
		}
	case EDamageType::EDT_ShieldOnly:
		{
			if (IVitalInterface::Execute_IsAbleToReceiveShieldDamage(GetOwner(), this))
			{
				SetShield(CurrentShield - Amount);
				OnReceiveDamage.Broadcast(DamageType, Amount, this);
				break;	
			}
		}
	}
}

// Death Replication

void UVitalityComponent::OnRep_DeathState(bool OldDeathState)
{
	OnDeathStateUpdated.Broadcast(OldDeathState, this);
}

/*
 * Health
*/

void UVitalityComponent::SetHealth(float NewHealth)
{
	if (!GetOwner()->HasAuthority())
		return;

	const float OldHealth = CurrentHealth;
	const bool OldDeathState = DeathState;
	
	CurrentHealth = FMath::Clamp(NewHealth, 0.f, MaxHealth);
	
	const bool TempDeathState = CurrentHealth <= 0.f;

	// Was Damage?
	if (CurrentHealth < OldHealth)
		CurrentHealthRegenDelay = HealthRegenDelayAfterDamage;

	// Reset Shield Regeneration
	if (CurrentHealth >= MaxHealth && ShieldRegenType == EShieldRegenType::ESRT_OnHealthCompleted)
		CurrentShieldRegenDelay = ShieldRegenDelayAfterDamage;
	
	OnHealthUpdated.Broadcast(OldHealth, this);
	
	if (OldDeathState != TempDeathState)
	{
		DeathState = TempDeathState;
		OnDeathStateUpdated.Broadcast(OldDeathState, this);
	}
}

// Health Regeneration

void UVitalityComponent::RefreshHealth(const float DeltaTime)
{
	if (!bShouldRegenerateHealth || CurrentHealth >= MaxHealth)
		return;
	
	if (CurrentHealthRegenDelay > 0.f)
	{
		CurrentHealthRegenDelay -= DeltaTime;
		HealthRegenTimeSinceLastUpdate = 0.f;
		return;
	}

	if (HealthRegenFrequency > HealthRegenTimeSinceLastUpdate)
	{
		HealthRegenTimeSinceLastUpdate += DeltaTime;
		return;
	}
	
	HealthRegenTimeSinceLastUpdate = 0.f;

	if (!IVitalInterface::Execute_IsAbleToRegenerateHealth(GetOwner(), this) || CurrentHealth >= MaxHealth)
		return;
	
	SetHealth(CurrentHealth + HealthRegenAmount);
}

// Health Replication

void UVitalityComponent::OnRep_CurrentHealth(float OldHealth)
{
	OnHealthUpdated.Broadcast(OldHealth, this);
}

void UVitalityComponent::OnRep_MaxHealth(float OldMaxHealth)
{
	OnHealthUpdated.Broadcast(OldMaxHealth, this);
}

/*
 * Landing
*/

void UVitalityComponent::GenerateLandingActions()
{
	for (auto Action : LandingActions)
	{
		if (IsValid(Action))
			GeneratedLandingActions.AddUnique(NewObject<ULandingAction>(this, Action));
	}
}

void UVitalityComponent::OnLanded(const FHitResult& Hit)
{
	if (!GetOwner()->HasAuthority())
		return;
	
	const float HorizontalSpeed = FMath::Abs(GetOwner()->GetVelocity().Z);

	ApplyFallDamage(HorizontalSpeed);

	CheckLandingActions(HorizontalSpeed);

#if WITH_EDITORONLY_DATA && ENABLE_DRAW_DEBUG
	if (bPrintLandingValues)
	{
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Landing Horizontal Speed: %d"), FMath::RoundToInt32(HorizontalSpeed)));
	}
#endif
}

void UVitalityComponent::ApplyFallDamage(const float HorizontalSpeed)
{
	if (!IsValid(FallDamageCurve))
		return;

	if (bShouldTakeFallDamage && IVitalInterface::Execute_IsAbleToReceiveFallDamage(GetOwner(), this))
	{
		const float Damage = FallDamageCurve->GetFloatValue(HorizontalSpeed);
		
		if (Damage<1.f)
			return;
		
		ReceiveDamage(Damage, FallDamageType);

#if WITH_EDITORONLY_DATA && ENABLE_DRAW_DEBUG
		if (bPrintLandingValues)
		{
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Fall Damage: %d"), FMath::RoundToInt32(Damage)));
		}
#endif
	}
}

void UVitalityComponent::CheckLandingActions(const float HorizontalSpeed)
{
	for (const auto Action : GeneratedLandingActions)
	{
		const FVector2D ActuationThreshold = Action->GetActuationThreshold();
		
		if (HorizontalSpeed >= ActuationThreshold.X && HorizontalSpeed < ActuationThreshold.Y)
		{
			Action->OnActionActivated(GetOwner(), HorizontalSpeed);

#if WITH_EDITORONLY_DATA && ENABLE_DRAW_DEBUG
			if (bPrintLandingValues)
			{
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Landing Action: %s"), *Action->GetActionName()));
			}
#endif
			
			break;
		}
	}
}

/*
 * Shield
*/

void UVitalityComponent::SetShield(float NewShield)
{
	if (!GetOwner()->HasAuthority())
		return;

	const float OldShield = CurrentShield;
	
	CurrentShield = FMath::Clamp(NewShield, 0.f, MaxShield);

	if (CurrentShield < OldShield)
		CurrentShieldRegenDelay = ShieldRegenDelayAfterDamage;
	
	OnShieldUpdated.Broadcast(OldShield, this);
}

// Shield Regeneration

void UVitalityComponent::RefreshShield(const float DeltaTime)
{
	if (!bShouldRegenerateShield || CurrentShield >= MaxShield)
		return;
	
	if (CurrentShieldRegenDelay > 0.f)
	{
		CurrentShieldRegenDelay -= DeltaTime;
		return;
	}

	if (ShieldRegenFrequency > ShieldRegenTimeSinceLastUpdate)
	{
		ShieldRegenTimeSinceLastUpdate += DeltaTime;
		return;
	}

	ShieldRegenTimeSinceLastUpdate = 0.f;

	if (CurrentHealth < MaxHealth && ShieldRegenType == EShieldRegenType::ESRT_OnHealthCompleted)
		return;
	
	if (!IVitalInterface::Execute_IsAbleToRegenerateShield(GetOwner(), this))
		return;
	
	SetShield(CurrentShield + ShieldRegenAmount);
}

// Shield Replication

void UVitalityComponent::OnRep_CurrentShield(float OldShield)
{
	OnShieldUpdated.Broadcast(OldShield, this);
}

void UVitalityComponent::OnRep_MaxShield(float OldMaxShield)
{
	OnShieldUpdated.Broadcast(OldMaxShield, this);
}

/*
 * Stamina
*/

void UVitalityComponent::SetStamina(float NewStamina)
{
	if (!GetOwner()->HasAuthority())
		return;

	const float OldStamina = CurrentStamina;
	
	CurrentStamina = FMath::Clamp(NewStamina, 0.f, MaxStamina);

	if (CurrentStamina < OldStamina)
		CurrentStaminaRegenDelay = StaminaRegenerationDelay;
	
	OnStaminaUpdated.Broadcast(OldStamina, this);

	if (CurrentStamina <= 0.f) OnRunOutOfStamina.Broadcast(this);
}

UStaminaAction* UVitalityComponent::CheckStaminaAction(TSubclassOf<UStaminaAction> ActionClass)
{
	UStaminaAction* TempAction = UVitalFunctionLib::FindStaminaActionByClass(ActionClass, GeneratedStaminaActions);

	if (IsValid(TempAction))
		return TempAction;

	TempAction = NewObject<UStaminaAction>(this, ActionClass);
	GeneratedStaminaActions.AddUnique(TempAction);
	
	return TempAction;
}

void UVitalityComponent::RefreshStamina(const float DeltaTime)
{
	if (ActiveStaminaActions.IsEmpty())
	{
		if (!bShouldRegenerateStamina || CurrentStamina >= MaxStamina)
			return;

		if (CurrentStaminaRegenDelay > 0.f)
		{
			CurrentStaminaRegenDelay -= DeltaTime;
			return;
		}

		if (StaminaRegenFrequency > StaminaRegenTimeSinceLastUpdate)
		{
			StaminaRegenTimeSinceLastUpdate += DeltaTime;
			return;
		}
		StaminaRegenTimeSinceLastUpdate = 0.f;

		SetStamina(CurrentStamina + StaminaRegenAmount);

		return;
	}

	TArray<UStaminaAction*> ActionsToStop;
	for (UStaminaAction* TempAction : ActiveStaminaActions)
	{
		if (!IsValid(TempAction))
			continue;
		
		if (!TempAction->CheckShouldUpdateThisFrame(GetOwner(), DeltaTime))
			continue;
		
		if (CurrentStamina < TempAction->GetCost() || TempAction->ShouldInteruptAction(GetOwner()))
		{
			ActionsToStop.AddUnique(TempAction);
			continue;
		}

		if (TempAction->ShouldConsumeStaminaThisFrame(GetOwner()))
			SetStamina(CurrentStamina - TempAction->GetCost());
		
		TempAction->ActionUpdate(GetOwner());
	}

	for (auto TempAction : ActionsToStop)
	{
		ActiveStaminaActions.Remove(TempAction);
		TempAction->OnStopAction(GetOwner(), true);
	}
}

void UVitalityComponent::TryStartStaminaAction_Implementation(TSubclassOf<UStaminaAction> ActionClass)
{
	UStaminaAction* TempAction = CheckStaminaAction(ActionClass);
	if (!IsValid(TempAction))
		return;
	
	if (CurrentStamina < TempAction->GetCost() || !TempAction->IsAllowedToStartAction(GetOwner()))
	{
		TempAction->OnTryStartAction(GetOwner(), false);
		return;
	}

	TempAction->OnTryStartAction(GetOwner(), true);
	
	if (TempAction->GetActionType() == EStaminaActionType::ESAT_Continuously)
		ActiveStaminaActions.AddUnique(TempAction);
	else
		SetStamina(CurrentStamina-TempAction->GetCost());
}

void UVitalityComponent::StopStaminaAction_Implementation(TSubclassOf<UStaminaAction> ActionClass)
{
	UStaminaAction* TempAction = UVitalFunctionLib::FindStaminaActionByClass(ActionClass, ActiveStaminaActions);
	if (!IsValid(TempAction))
		return;

	ActiveStaminaActions.Remove(TempAction);
	TempAction->OnStopAction(GetOwner(), false);
}

// Stamina Replication

void UVitalityComponent::OnRep_CurrentStamina(float OldStamina)
{
	OnStaminaUpdated.Broadcast(OldStamina, this);
}

void UVitalityComponent::OnRep_MaxStamina(float OldMaxStamina)
{
	OnStaminaUpdated.Broadcast(OldMaxStamina, this);
}

/*
 * Getter's
*/

FHealthInfo UVitalityComponent::GetHealthInfo() const
{
	return FHealthInfo(DeathState, CurrentHealth, MaxHealth);
}

FShieldInfo UVitalityComponent::GetShieldInfo() const
{
	return FShieldInfo(CurrentShield, MaxShield);
}

FStaminaInfo UVitalityComponent::GetStaminaInfo() const
{
	return FStaminaInfo(CurrentStamina, MaxStamina, ActiveStaminaActions);
}

