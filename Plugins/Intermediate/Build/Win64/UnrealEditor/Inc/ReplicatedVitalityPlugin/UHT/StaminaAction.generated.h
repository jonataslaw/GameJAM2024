// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/StaminaAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef REPLICATEDVITALITYPLUGIN_StaminaAction_generated_h
#error "StaminaAction.generated.h already included, missing '#pragma once' in StaminaAction.h"
#endif
#define REPLICATEDVITALITYPLUGIN_StaminaAction_generated_h

#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_10_DELEGATE \
REPLICATEDVITALITYPLUGIN_API void FOnTryStartAction_DelegateWrapper(const FMulticastScriptDelegate& OnTryStartAction, AActor* Causer, bool Successful);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_11_DELEGATE \
REPLICATEDVITALITYPLUGIN_API void FActionUpdate_DelegateWrapper(const FMulticastScriptDelegate& ActionUpdate, AActor* Causer);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_12_DELEGATE \
REPLICATEDVITALITYPLUGIN_API void FOnEndAction_DelegateWrapper(const FMulticastScriptDelegate& OnEndAction, AActor* Causer, bool Forced);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ShouldInteruptAction_Implementation(AActor* Owner); \
	virtual bool ShouldConsumeStaminaThisFrame_Implementation(AActor* Owner); \
	virtual bool IsAllowedToStartAction_Implementation(AActor* Owner); \
	virtual void OnStopAction_Implementation(AActor* Owner, bool bForced); \
	virtual void ActionUpdate_Implementation(AActor* Owner); \
	virtual void OnTryStartAction_Implementation(AActor* Owner, bool bSuccessful); \
 \
	DECLARE_FUNCTION(execSetConsumptionFrequency); \
	DECLARE_FUNCTION(execSetCost); \
	DECLARE_FUNCTION(execShouldInteruptAction); \
	DECLARE_FUNCTION(execShouldConsumeStaminaThisFrame); \
	DECLARE_FUNCTION(execIsAllowedToStartAction); \
	DECLARE_FUNCTION(execOnStopAction); \
	DECLARE_FUNCTION(execActionUpdate); \
	DECLARE_FUNCTION(execOnTryStartAction);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaminaAction(); \
	friend struct Z_Construct_UClass_UStaminaAction_Statics; \
public: \
	DECLARE_CLASS(UStaminaAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplicatedVitalityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStaminaAction)


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaminaAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaminaAction(UStaminaAction&&); \
	NO_API UStaminaAction(const UStaminaAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaminaAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaminaAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaminaAction) \
	NO_API virtual ~UStaminaAction();


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_16_PROLOG
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REPLICATEDVITALITYPLUGIN_API UClass* StaticClass<class UStaminaAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
