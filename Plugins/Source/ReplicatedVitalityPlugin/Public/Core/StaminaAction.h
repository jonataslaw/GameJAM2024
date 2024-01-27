//   Copyright Vinipi Studios 2024. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Utils/VitalityTypes.h"
#include "StaminaAction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTryStartAction, AActor*, Causer, bool, Successful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActionUpdate, AActor*, Causer);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEndAction, AActor*, Causer, bool, Forced); 

enum class EStaminaActionType : uint8;

UCLASS(Blueprintable)
class REPLICATEDVITALITYPLUGIN_API UStaminaAction : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Settings")
	EStaminaActionType ActionType = EStaminaActionType::ESAT_Continuously;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	float Cost = 1.f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Settings")
	float ConsumptionFrequency = 0.1f;

	float TimeSinceLastUpdate = 0.f;

public:
	UFUNCTION(BlueprintNativeEvent)
	void OnTryStartAction(AActor* Owner, bool bSuccessful);
	UFUNCTION(BlueprintNativeEvent)
	void ActionUpdate(AActor* Owner);
	UFUNCTION(BlueprintNativeEvent)
	void OnStopAction(AActor* Owner, bool bForced);

	UFUNCTION(BlueprintNativeEvent)
	bool IsAllowedToStartAction(AActor* Owner);
	UFUNCTION(BlueprintNativeEvent)
	bool ShouldConsumeStaminaThisFrame(AActor* Owner);
	UFUNCTION(BlueprintNativeEvent)
	bool ShouldInteruptAction(AActor* Owner);

	UFUNCTION(BlueprintCallable, Category = "Settings")
	void SetCost(const AActor* Owner, const float NewCost);
	FORCEINLINE float GetCost() const { return Cost; }

	UFUNCTION(BlueprintCallable, Category = "Settings")
	void SetConsumptionFrequency(const AActor* Owner, const float NewFrequency);
	FORCEINLINE float GetConsumptionFrequency() const { return ConsumptionFrequency; }

	bool CheckShouldUpdateThisFrame(const AActor* Owner, const float DeltaTime);
	
	FORCEINLINE EStaminaActionType GetActionType() const { return ActionType; }
};
