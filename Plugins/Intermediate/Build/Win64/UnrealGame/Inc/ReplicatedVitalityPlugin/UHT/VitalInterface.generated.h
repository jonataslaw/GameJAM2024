// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/VitalInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVitalityComponent;
#ifdef REPLICATEDVITALITYPLUGIN_VitalInterface_generated_h
#error "VitalInterface.generated.h already included, missing '#pragma once' in VitalInterface.h"
#endif
#define REPLICATEDVITALITYPLUGIN_VitalInterface_generated_h

#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAbleToRegenerateStamina); \
	DECLARE_FUNCTION(execIsAbleToRegenerateShield); \
	DECLARE_FUNCTION(execIsAbleToReceiveShieldDamage); \
	DECLARE_FUNCTION(execIsAbleToRegenerateHealth); \
	DECLARE_FUNCTION(execIsAbleToReceiveFallDamage); \
	DECLARE_FUNCTION(execIsAbleToReceiveHealthDamage);


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_ACCESSORS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REPLICATEDVITALITYPLUGIN_API UVitalInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	REPLICATEDVITALITYPLUGIN_API UVitalInterface(UVitalInterface&&); \
	REPLICATEDVITALITYPLUGIN_API UVitalInterface(const UVitalInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATEDVITALITYPLUGIN_API, UVitalInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVitalInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVitalInterface) \
	REPLICATEDVITALITYPLUGIN_API virtual ~UVitalInterface();


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVitalInterface(); \
	friend struct Z_Construct_UClass_UVitalInterface_Statics; \
public: \
	DECLARE_CLASS(UVitalInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ReplicatedVitalityPlugin"), REPLICATEDVITALITYPLUGIN_API) \
	DECLARE_SERIALIZER(UVitalInterface)


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVitalInterface() {} \
public: \
	typedef UVitalInterface UClassType; \
	typedef IVitalInterface ThisClass; \
	static bool Execute_IsAbleToReceiveFallDamage(const UObject* O, UVitalityComponent* Component); \
	static bool Execute_IsAbleToReceiveHealthDamage(const UObject* O, UVitalityComponent* Component); \
	static bool Execute_IsAbleToReceiveShieldDamage(const UObject* O, UVitalityComponent* Component); \
	static bool Execute_IsAbleToRegenerateHealth(const UObject* O, UVitalityComponent* Component); \
	static bool Execute_IsAbleToRegenerateShield(const UObject* O, UVitalityComponent* Component); \
	static bool Execute_IsAbleToRegenerateStamina(const UObject* O, UVitalityComponent* Component); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_11_PROLOG
#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_ACCESSORS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REPLICATEDVITALITYPLUGIN_API UClass* StaticClass<class UVitalInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
