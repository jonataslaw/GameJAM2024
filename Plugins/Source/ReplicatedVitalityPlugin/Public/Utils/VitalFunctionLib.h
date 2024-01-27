// Copyright Vinipi Studios 2024. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VitalFunctionLib.generated.h"

class UVitalityComponent;
class UStaminaAction;

UCLASS()
class REPLICATEDVITALITYPLUGIN_API UVitalFunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	static UVitalityComponent* GetVitalityComponent(AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "Iterations")
	static UStaminaAction* FindStaminaActionByClass(UClass* ActionClass, TArray<UStaminaAction*> Actions);
};
