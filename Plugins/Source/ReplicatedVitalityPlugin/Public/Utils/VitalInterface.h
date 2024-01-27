// Copyright Vinipi Studios 2024. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VitalInterface.generated.h"

class UVitalityComponent;

UINTERFACE(MinimalAPI, Blueprintable)
class UVitalInterface : public UInterface
{
	GENERATED_BODY()
};


class REPLICATEDVITALITYPLUGIN_API IVitalInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Vitality|Health")
	bool IsAbleToReceiveHealthDamage(UVitalityComponent* Component) const;
	virtual bool IsAbleToReceiveHealthDamage_Implementation(UVitalityComponent* Component) const;
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Vitality|Health")
	bool IsAbleToReceiveFallDamage(UVitalityComponent* Component) const;
	virtual bool IsAbleToReceiveFallDamage_Implementation(UVitalityComponent* Component) const;
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Vitality|Health")
	bool IsAbleToRegenerateHealth(UVitalityComponent* Component) const;
	virtual bool IsAbleToRegenerateHealth_Implementation(UVitalityComponent* Component) const;
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Vitality|Shield")
	bool IsAbleToReceiveShieldDamage(UVitalityComponent* Component) const;
	virtual bool IsAbleToReceiveShieldDamage_Implementation(UVitalityComponent* Component) const;
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Vitality|Shield")
	bool IsAbleToRegenerateShield(UVitalityComponent* Component) const;
	virtual bool IsAbleToRegenerateShield_Implementation(UVitalityComponent* Component) const;
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Vitality|Stamina")
	bool IsAbleToRegenerateStamina(UVitalityComponent* Component) const;
	virtual bool IsAbleToRegenerateStamina_Implementation(UVitalityComponent* Component) const;
	
};
