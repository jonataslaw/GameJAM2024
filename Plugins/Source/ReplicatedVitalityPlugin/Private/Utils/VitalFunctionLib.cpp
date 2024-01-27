// Copyright Vinipi Studios 2024. All rights reserved.

#include "Utils/VitalFunctionLib.h"

#include "Core/VitalityComponent.h"
#include "Core/StaminaAction.h"

UVitalityComponent* UVitalFunctionLib::GetVitalityComponent(AActor* Actor)
{
	if (!IsValid(Actor)) return nullptr;

	return Cast<UVitalityComponent>(Actor->GetComponentByClass(UVitalityComponent::StaticClass()));
}

UStaminaAction* UVitalFunctionLib::FindStaminaActionByClass(UClass* ActionClass, TArray<UStaminaAction*> Actions)
{
	for (auto Action : Actions)
	{
		if (Action->IsA(ActionClass))
		{
			return Action;
		}
	}
	return nullptr;
}


