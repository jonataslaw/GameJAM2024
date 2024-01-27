// Copyright Vinipi Studios 2024. All rights reserved.


#include "Utils/VitalityTypes.h"

FHealthInfo::FHealthInfo(bool InDeathState, float InCurrentHealth, float InMaxHealth)
	:DeathState(InDeathState), CurrentHealth(InCurrentHealth), MaxHealth(InMaxHealth)
{
	NormalizedHealth = CurrentHealth/MaxHealth;
}

FShieldInfo::FShieldInfo(float InCurrentShield, float InMaxShield)
	:CurrentShield(InCurrentShield), MaxShield(InMaxShield)
{
	NormalizedShield = CurrentShield/MaxShield;
}

FStaminaInfo::FStaminaInfo(float InCurrentStamina, float InMaxStamina, TArray<UStaminaAction*> InActiveStaminaActions)
	:CurrentStamina(InCurrentStamina), MaxStamina(InMaxStamina), ActiveStaminaActions(InActiveStaminaActions)
{
	NormalizedStamina = CurrentStamina/MaxStamina;
}
