// Copyright Vinipi Studios 2024. All rights reserved.

#include "Utils/VitalInterface.h"

#include "Core/VitalityComponent.h"

bool IVitalInterface::IsAbleToReceiveHealthDamage_Implementation(UVitalityComponent* Component) const
{
	return !Component->GetHealthInfo().DeathState;
}

bool IVitalInterface::IsAbleToReceiveFallDamage_Implementation(UVitalityComponent* Component) const
{
	return !Component->GetHealthInfo().DeathState;
}

bool IVitalInterface::IsAbleToRegenerateHealth_Implementation(UVitalityComponent* Component) const
{
	return !Component->GetHealthInfo().DeathState;
}

bool IVitalInterface::IsAbleToReceiveShieldDamage_Implementation(UVitalityComponent* Component) const
{
	return !Component->GetHealthInfo().DeathState;
}

bool IVitalInterface::IsAbleToRegenerateShield_Implementation(UVitalityComponent* Component) const
{
	return !Component->GetHealthInfo().DeathState;
}

bool IVitalInterface::IsAbleToRegenerateStamina_Implementation(UVitalityComponent* Component) const
{
	return !Component->GetHealthInfo().DeathState;
}
