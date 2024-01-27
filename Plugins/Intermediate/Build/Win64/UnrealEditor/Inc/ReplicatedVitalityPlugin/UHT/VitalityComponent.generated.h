// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/VitalityComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaminaAction;
class UVitalityComponent;
enum class EDamageType : uint8;
struct FHealthInfo;
struct FHitResult;
struct FShieldInfo;
struct FStaminaInfo;
#ifdef REPLICATEDVITALITYPLUGIN_VitalityComponent_generated_h
#error "VitalityComponent.generated.h already included, missing '#pragma once' in VitalityComponent.h"
#endif
#define REPLICATEDVITALITYPLUGIN_VitalityComponent_generated_h

#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_17_DELEGATE \
REPLICATEDVITALITYPLUGIN_API void FOnDeathStateUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnDeathStateUpdated, bool OldDeathState, UVitalityComponent* VitalityComponent);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_18_DELEGATE \
REPLICATEDVITALITYPLUGIN_API void FOnHealthUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnHealthUpdated, float OldHealth, UVitalityComponent* VitalityComponent);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_19_DELEGATE \
REPLICATEDVITALITYPLUGIN_API void FOnShieldUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnShieldUpdated, float OldShield, UVitalityComponent* VitalityComponent);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_20_DELEGATE \
REPLICATEDVITALITYPLUGIN_API void FOnStaminaUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaUpdated, float OldStamina, UVitalityComponent* VitalityComponent);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_21_DELEGATE \
REPLICATEDVITALITYPLUGIN_API void FOnReceiveDamage_DelegateWrapper(const FMulticastScriptDelegate& OnReceiveDamage, EDamageType DamageType, float Amount, UVitalityComponent* VitalityComponent);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_23_DELEGATE \
REPLICATEDVITALITYPLUGIN_API void FOnRunOutOfStamina_DelegateWrapper(const FMulticastScriptDelegate& OnRunOutOfStamina, UVitalityComponent* VitalityComponent);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_SPARSE_DATA
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopStaminaAction_Implementation(TSubclassOf<UStaminaAction>  ActionClass); \
	virtual void TryStartStaminaAction_Implementation(TSubclassOf<UStaminaAction>  ActionClass); \
 \
	DECLARE_FUNCTION(execGetStaminaInfo); \
	DECLARE_FUNCTION(execGetShieldInfo); \
	DECLARE_FUNCTION(execGetHealthInfo); \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_CurrentStamina); \
	DECLARE_FUNCTION(execStopStaminaAction); \
	DECLARE_FUNCTION(execTryStartStaminaAction); \
	DECLARE_FUNCTION(execSetStamina); \
	DECLARE_FUNCTION(execOnRep_MaxShield); \
	DECLARE_FUNCTION(execOnRep_CurrentShield); \
	DECLARE_FUNCTION(execRefreshShield); \
	DECLARE_FUNCTION(execSetShield); \
	DECLARE_FUNCTION(execOnLanded); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execRefreshHealth); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execOnRep_DeathState); \
	DECLARE_FUNCTION(execReceiveDamage);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVitalityComponent(); \
	friend struct Z_Construct_UClass_UVitalityComponent_Statics; \
public: \
	DECLARE_CLASS(UVitalityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReplicatedVitalityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVitalityComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DeathState=NETFIELD_REP_START, \
		CurrentHealth, \
		MaxHealth, \
		CurrentShield, \
		MaxShield, \
		CurrentStamina, \
		MaxStamina, \
		NETFIELD_REP_END=MaxStamina	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVitalityComponent(UVitalityComponent&&); \
	NO_API UVitalityComponent(const UVitalityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVitalityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVitalityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVitalityComponent) \
	NO_API virtual ~UVitalityComponent();


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_25_PROLOG
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_SPARSE_DATA \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REPLICATEDVITALITYPLUGIN_API UClass* StaticClass<class UVitalityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
