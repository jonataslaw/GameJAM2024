// Copyright Vinipi Studios 2024. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "VitalityTypes.generated.h"

class UStaminaAction;

UENUM(BlueprintType, meta = (ScriptName="Damage_Type"))
enum class EDamageType : uint8
{
	EDT_Standard UMETA(DisplayName="Standard"),
	EDT_HealthOnly UMETA(DisplayName="Health Only"),
	EDT_ShieldOnly UMETA(DisplayName="Shield Only")
};

UENUM(BlueprintType, meta = (ScriptName="Shield_Regeneration_Type"))
enum class EShieldRegenType : uint8
{
	ESRT_OnHealthCompleted UMETA(DisplayName="Wait For Health To Complete"),
	ESRT_OnReciveDamage UMETA(DisplayName="When Receive Damage"),
};

UENUM(BlueprintType)
enum class EStaminaActionType : uint8
{
	ESAT_Continuously UMETA(DisplayName="Consume Continuously"),
	ESAT_Once UMETA(DisplayName="Consume Once")
};

USTRUCT(BlueprintType)
struct FHealthInfo
{
	
	GENERATED_USTRUCT_BODY()

	FHealthInfo() = default;
	
	FHealthInfo(bool InDeathState, float InCurrentHealth, float InMaxHealth);

	// General
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	bool DeathState;
	
	// Health
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	float CurrentHealth;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	float MaxHealth;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	float NormalizedHealth;
};

USTRUCT(BlueprintType)
struct FShieldInfo
{
	
	GENERATED_USTRUCT_BODY()

	FShieldInfo() = default;
	
	FShieldInfo(float InCurrentShield, float InMaxShield);
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shield")
	float CurrentShield;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shield")
	float MaxShield;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shield")
	float NormalizedShield;
};

USTRUCT(BlueprintType)
struct FStaminaInfo
{
	
	GENERATED_USTRUCT_BODY()

	FStaminaInfo() = default;
	
	FStaminaInfo(float InCurrentStamina, float InMaxStamina, TArray<UStaminaAction*> InActiveStaminaActions);
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stamina")
	float CurrentStamina;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stamina")
	float MaxStamina;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stamina")
	float NormalizedStamina;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stamina")
	TArray<UStaminaAction*> ActiveStaminaActions;
};