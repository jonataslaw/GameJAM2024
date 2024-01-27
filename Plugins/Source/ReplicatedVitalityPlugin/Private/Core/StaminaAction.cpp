//   Copyright Vinipi Studios 2024. All rights reserved.

#include "Core/StaminaAction.h"

#include "GameFramework/Actor.h"

void UStaminaAction::OnStopAction_Implementation(AActor* Owner, bool bForced)
{
}

void UStaminaAction::ActionUpdate_Implementation(AActor* Owner)
{
}

void UStaminaAction::OnTryStartAction_Implementation(AActor* Owner, bool bSuccessful)
{
}

// Setters
void UStaminaAction::SetCost(const AActor* Owner, const float NewCost)
{
	if (!Owner->HasAuthority())
		return;

	Cost = NewCost;
}

void UStaminaAction::SetConsumptionFrequency(const AActor* Owner, const float NewFrequency)
{
	if (!Owner->HasAuthority())
		return;

	ConsumptionFrequency = NewFrequency;
}

// Checks
bool UStaminaAction::CheckShouldUpdateThisFrame(const AActor* Owner, const float DeltaTime)
{
	if (!Owner->HasAuthority())
		return false;
	
	if (ConsumptionFrequency > TimeSinceLastUpdate)
	{
		TimeSinceLastUpdate += DeltaTime;
		return false;
	}
	
	TimeSinceLastUpdate = 0.f;
	
	return true;
}

bool UStaminaAction::IsAllowedToStartAction_Implementation(AActor* Owner)
{
	return true;
}

bool UStaminaAction::ShouldConsumeStaminaThisFrame_Implementation(AActor* Owner)
{
	return true;
}

bool UStaminaAction::ShouldInteruptAction_Implementation(AActor* Owner)
{
	return false;
}
