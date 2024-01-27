// Copyright Vinipi Studios 2024. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Utils/VitalityTypes.h"
#include "VitalityComponent.generated.h"

class UStaminaAction;
class ULandingAction;
class UCurveFloat;
enum class EShieldRegenType : uint8;
enum class EDamageType : uint8;
struct FVitalInfo;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDeathStateUpdated, bool, OldDeathState, UVitalityComponent*, VitalityComponent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthUpdated, float, OldHealth, UVitalityComponent*, VitalityComponent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnShieldUpdated, float, OldShield, UVitalityComponent*, VitalityComponent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStaminaUpdated, float, OldStamina, UVitalityComponent*, VitalityComponent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnReceiveDamage, EDamageType, DamageType, float, Amount, UVitalityComponent*, VitalityComponent);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRunOutOfStamina, UVitalityComponent*, VitalityComponent);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), DisplayName = "Vitality Component")
class REPLICATEDVITALITYPLUGIN_API UVitalityComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UVitalityComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	virtual void BeginPlay() override;

	///////////////////////// Member Variables ///////////////////////////////

/*
 * General
*/
	
protected:
	UPROPERTY(ReplicatedUsing = OnRep_DeathState)
	bool DeathState = false;

	UPROPERTY(BlueprintAssignable, Category = "Stats|General")
	FOnDeathStateUpdated OnDeathStateUpdated;

	UPROPERTY(BlueprintAssignable, Category = "Stats|General")
	FOnReceiveDamage OnReceiveDamage;
	
/*
 * Health
*/
	
private:
	UPROPERTY(EditAnywhere, Category = "Stats|Health", ReplicatedUsing = OnRep_CurrentHealth)
	float CurrentHealth = 100;
	UPROPERTY(EditAnywhere, Category = "Stats|Health", ReplicatedUsing = OnRep_MaxHealth)
	float MaxHealth = 100;

	UPROPERTY(EditAnywhere, Category = "Stats|Health")
	bool bShouldRegenerateHealth = true;
	UPROPERTY(EditAnywhere, Category = "Stats|Health")
	float HealthRegenAmount = 0.5f;
	UPROPERTY(EditAnywhere, Category = "Stats|Health")
	float HealthRegenFrequency = 0.1f;
	UPROPERTY(EditAnywhere, Category = "Stats|Health")
	float HealthRegenDelayAfterDamage = 2.f;
	
	float HealthRegenTimeSinceLastUpdate = 0.f;
	float CurrentHealthRegenDelay = HealthRegenDelayAfterDamage;

public:
	UPROPERTY(BlueprintAssignable, Category = "Stats|Health")
	FOnHealthUpdated OnHealthUpdated;

/*
 * Landing
*/
	
private:
	UPROPERTY(EditAnywhere, Category = "Stats|Land")
	bool bShouldTakeFallDamage = true;

	UPROPERTY(EditAnywhere, Category = "Stats|Land")
	UCurveFloat* FallDamageCurve = nullptr;

	UPROPERTY()
	TArray<TObjectPtr<ULandingAction>> GeneratedLandingActions;

public:
	UPROPERTY(EditAnywhere, Category = "Stats|Land")
	EDamageType FallDamageType = EDamageType::EDT_HealthOnly;

	UPROPERTY(EditAnywhere, Category = "Stats|Land")
	TArray<TSubclassOf<ULandingAction>> LandingActions;
	
/*
 * Shield
*/
	
private:
	UPROPERTY(EditAnywhere, Category = "Stats|Shield", ReplicatedUsing = OnRep_CurrentShield)
	float CurrentShield = 100;
	UPROPERTY(EditAnywhere, Category = "Stats|Shield", ReplicatedUsing = OnRep_MaxShield)
	float MaxShield = 100;

	UPROPERTY(EditAnywhere, Category = "Stats|Shield")
	bool bShouldRegenerateShield = true;
	UPROPERTY(EditAnywhere, Category = "Stats|Shield")
	EShieldRegenType ShieldRegenType = EShieldRegenType::ESRT_OnHealthCompleted;
	UPROPERTY(EditAnywhere, Category = "Stats|Shield")
	float ShieldRegenAmount = 0.5f;
	UPROPERTY(EditAnywhere, Category = "Stats|Shield")
	float ShieldRegenFrequency = 0.1f;
	UPROPERTY(EditAnywhere, Category = "Stats|Shield")
	float ShieldRegenDelayAfterDamage = 2.f;

	float ShieldRegenTimeSinceLastUpdate = 0.f;
	float CurrentShieldRegenDelay = ShieldRegenDelayAfterDamage;
	
	UPROPERTY(BlueprintAssignable, Category = "Stats|Shield")
	FOnShieldUpdated OnShieldUpdated;

/*
 * Stamina
*/
	
private:
	UPROPERTY(EditAnywhere, Category = "Stats|Stamina", ReplicatedUsing = OnRep_CurrentStamina)
	float CurrentStamina = 100;
	UPROPERTY(EditAnywhere, Category = "Stats|Stamina", ReplicatedUsing = OnRep_MaxStamina)
	float MaxStamina = 100;

	// Regeneration
	UPROPERTY(EditAnywhere, Category = "Stats|Stamina")
	bool bShouldRegenerateStamina = true;
	UPROPERTY(EditAnywhere, Category = "Stats|Stamina")
	float StaminaRegenAmount = 1.f; 
	UPROPERTY(EditAnywhere, Category = "Stats|Stamina")
	float StaminaRegenFrequency = 0.1f;
	UPROPERTY(EditAnywhere, Category = "Stats|Stamina")
	float StaminaRegenerationDelay = 2.f;

	float StaminaRegenTimeSinceLastUpdate = 0.f;
	float CurrentStaminaRegenDelay = StaminaRegenerationDelay;

private:
	UPROPERTY()
	TArray<TObjectPtr<UStaminaAction>> GeneratedStaminaActions;
	UPROPERTY()
	TArray<TObjectPtr<UStaminaAction>> ActiveStaminaActions;
	
	// Stamina Replication
	UPROPERTY(BlueprintAssignable, Category = "Stats|Stamina")
	FOnStaminaUpdated OnStaminaUpdated;
	UPROPERTY(BlueprintAssignable, Category = "Stats|Stamina")
	FOnRunOutOfStamina OnRunOutOfStamina;

/*
 * Debug
*/
	UPROPERTY(EditDefaultsOnly, Category = "Stats|Debug")
	bool bPrintLandingValues = false;
	
////////////////////////// Member Functions ///////////////////////////////

/*
 * General
*/
public:
	UFUNCTION(BlueprintCallable, Category = "Stats|General")
	void ReceiveDamage(float Amount, EDamageType DamageType);

	UFUNCTION()
	void OnRep_DeathState(bool OldDeathState);
	
/*
 * Health
*/
public:
	UFUNCTION(BlueprintCallable, Category = "Stats|Health")
	void SetHealth(float NewHealth);

private:
	UFUNCTION()
	void RefreshHealth(const float DeltaTime);
	
	UFUNCTION()
	void OnRep_CurrentHealth(float OldHealth);
	UFUNCTION()
	void OnRep_MaxHealth(float OldMaxHealth);

/*
 * Landing
*/
public:
	UFUNCTION(BlueprintCallable, Category = "Stats|Landing")
	void OnLanded( const FHitResult& Hit);

private:
	void GenerateLandingActions();
	
	void ApplyFallDamage(const float HorizontalSpeed);

	void CheckLandingActions(const float HorizontalSpeed);
	
/*
 * Shield
*/
	
public:
	UFUNCTION(BlueprintCallable, Category = "Stats|Shield")
	void SetShield(float NewShield);

private:
	UFUNCTION()
	void RefreshShield(const float DeltaTime);
	
	UFUNCTION()
	void OnRep_CurrentShield(float OldShield);
	UFUNCTION()
	void OnRep_MaxShield(float OldShield);

/*
 * Stamina
*/
public:
	UFUNCTION(BlueprintCallable, Category = "Stats|Stamina")
	void SetStamina(float NewStamina);

	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Stats|Stamina")
	void TryStartStaminaAction(TSubclassOf<UStaminaAction> ActionClass);
	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Stats|Stamina")
	void StopStaminaAction(TSubclassOf<UStaminaAction> ActionClass);

private:
	UStaminaAction* CheckStaminaAction(TSubclassOf<UStaminaAction> ActionClass);
	
	void RefreshStamina(const float DeltaTime);

	UFUNCTION()
	void OnRep_CurrentStamina(float OldStamina);
	UFUNCTION()
	void OnRep_MaxStamina(float OldMaxStamina);
	
/*
 * Geters
*/
	
public:
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Stats|Getters")
	FHealthInfo GetHealthInfo() const;
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Stats|Getters")
	FShieldInfo GetShieldInfo() const;
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Stats|Getters")
	FStaminaInfo GetStaminaInfo() const;
};
