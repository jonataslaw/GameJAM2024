// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/VitalFunctionLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UStaminaAction;
class UVitalityComponent;
#ifdef REPLICATEDVITALITYPLUGIN_VitalFunctionLib_generated_h
#error "VitalFunctionLib.generated.h already included, missing '#pragma once' in VitalFunctionLib.h"
#endif
#define REPLICATEDVITALITYPLUGIN_VitalFunctionLib_generated_h

#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindStaminaActionByClass); \
	DECLARE_FUNCTION(execGetVitalityComponent);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVitalFunctionLib(); \
	friend struct Z_Construct_UClass_UVitalFunctionLib_Statics; \
public: \
	DECLARE_CLASS(UVitalFunctionLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplicatedVitalityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVitalFunctionLib)


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVitalFunctionLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVitalFunctionLib(UVitalFunctionLib&&); \
	NO_API UVitalFunctionLib(const UVitalFunctionLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVitalFunctionLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVitalFunctionLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVitalFunctionLib) \
	NO_API virtual ~UVitalFunctionLib();


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_12_PROLOG
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REPLICATEDVITALITYPLUGIN_API UClass* StaticClass<class UVitalFunctionLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
