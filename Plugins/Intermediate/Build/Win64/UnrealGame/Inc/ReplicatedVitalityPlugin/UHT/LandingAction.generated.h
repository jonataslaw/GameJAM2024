// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/LandingAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef REPLICATEDVITALITYPLUGIN_LandingAction_generated_h
#error "LandingAction.generated.h already included, missing '#pragma once' in LandingAction.h"
#endif
#define REPLICATEDVITALITYPLUGIN_LandingAction_generated_h

#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_9_DELEGATE \
REPLICATEDVITALITYPLUGIN_API void FOnActionActivated_DelegateWrapper(const FMulticastScriptDelegate& OnActionActivated, float HorizontalSpeed);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnActionActivated_Implementation(AActor* Owner, const float HorizontalSpeed); \
 \
	DECLARE_FUNCTION(execGetActuationThreshold); \
	DECLARE_FUNCTION(execGetActionName); \
	DECLARE_FUNCTION(execOnActionActivated);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandingAction(); \
	friend struct Z_Construct_UClass_ULandingAction_Statics; \
public: \
	DECLARE_CLASS(ULandingAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplicatedVitalityPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULandingAction)


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandingAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandingAction(ULandingAction&&); \
	NO_API ULandingAction(const ULandingAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandingAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandingAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandingAction) \
	NO_API virtual ~ULandingAction();


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_11_PROLOG
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REPLICATEDVITALITYPLUGIN_API UClass* StaticClass<class ULandingAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
