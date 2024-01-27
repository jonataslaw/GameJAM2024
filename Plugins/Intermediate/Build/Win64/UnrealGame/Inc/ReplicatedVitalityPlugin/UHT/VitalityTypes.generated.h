// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/VitalityTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REPLICATEDVITALITYPLUGIN_VitalityTypes_generated_h
#error "VitalityTypes.generated.h already included, missing '#pragma once' in VitalityTypes.h"
#endif
#define REPLICATEDVITALITYPLUGIN_VitalityTypes_generated_h

#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalityTypes_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHealthInfo_Statics; \
	REPLICATEDVITALITYPLUGIN_API static class UScriptStruct* StaticStruct();


template<> REPLICATEDVITALITYPLUGIN_API UScriptStruct* StaticStruct<struct FHealthInfo>();

#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalityTypes_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShieldInfo_Statics; \
	REPLICATEDVITALITYPLUGIN_API static class UScriptStruct* StaticStruct();


template<> REPLICATEDVITALITYPLUGIN_API UScriptStruct* StaticStruct<struct FShieldInfo>();

#define FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalityTypes_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaminaInfo_Statics; \
	REPLICATEDVITALITYPLUGIN_API static class UScriptStruct* StaticStruct();


template<> REPLICATEDVITALITYPLUGIN_API UScriptStruct* StaticStruct<struct FStaminaInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalityTypes_h


#define FOREACH_ENUM_EDAMAGETYPE(op) \
	op(EDamageType::EDT_Standard) \
	op(EDamageType::EDT_HealthOnly) \
	op(EDamageType::EDT_ShieldOnly) 

enum class EDamageType : uint8;
template<> struct TIsUEnumClass<EDamageType> { enum { Value = true }; };
template<> REPLICATEDVITALITYPLUGIN_API UEnum* StaticEnum<EDamageType>();

#define FOREACH_ENUM_ESHIELDREGENTYPE(op) \
	op(EShieldRegenType::ESRT_OnHealthCompleted) \
	op(EShieldRegenType::ESRT_OnReciveDamage) 

enum class EShieldRegenType : uint8;
template<> struct TIsUEnumClass<EShieldRegenType> { enum { Value = true }; };
template<> REPLICATEDVITALITYPLUGIN_API UEnum* StaticEnum<EShieldRegenType>();

#define FOREACH_ENUM_ESTAMINAACTIONTYPE(op) \
	op(EStaminaActionType::ESAT_Continuously) \
	op(EStaminaActionType::ESAT_Once) 

enum class EStaminaActionType : uint8;
template<> struct TIsUEnumClass<EStaminaActionType> { enum { Value = true }; };
template<> REPLICATEDVITALITYPLUGIN_API UEnum* StaticEnum<EStaminaActionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
