// Copyright Vinipi Studios 2024. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LandingAction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionActivated, float, HorizontalSpeed);

UCLASS(Blueprintable)
class REPLICATEDVITALITYPLUGIN_API ULandingAction : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Settings")
	FString ActionName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Settings")
	FVector2D ActuationThreshold;

public:
	UFUNCTION(BlueprintNativeEvent)
	void OnActionActivated(AActor* Owner, const float HorizontalSpeed);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getter")
	FString GetActionName() const { return ActionName; }
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getter")
	FVector2D GetActuationThreshold() const { return ActuationThreshold; }
};
