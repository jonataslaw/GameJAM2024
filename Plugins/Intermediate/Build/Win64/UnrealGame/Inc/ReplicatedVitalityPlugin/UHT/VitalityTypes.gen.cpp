// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicatedVitalityPlugin/Public/Utils/VitalityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVitalityTypes() {}
// Cross Module References
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UStaminaAction_NoRegister();
	REPLICATEDVITALITYPLUGIN_API UEnum* Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType();
	REPLICATEDVITALITYPLUGIN_API UEnum* Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType();
	REPLICATEDVITALITYPLUGIN_API UEnum* Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType();
	REPLICATEDVITALITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHealthInfo();
	REPLICATEDVITALITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FShieldInfo();
	REPLICATEDVITALITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStaminaInfo();
	UPackage* Z_Construct_UPackage__Script_ReplicatedVitalityPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageType;
	static UEnum* EDamageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDamageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType, (UObject*)Z_Construct_UPackage__Script_ReplicatedVitalityPlugin(), TEXT("EDamageType"));
		}
		return Z_Registration_Info_UEnum_EDamageType.OuterSingleton;
	}
	template<> REPLICATEDVITALITYPLUGIN_API UEnum* StaticEnum<EDamageType>()
	{
		return EDamageType_StaticEnum();
	}
	struct Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType_Statics::Enumerators[] = {
		{ "EDamageType::EDT_Standard", (int64)EDamageType::EDT_Standard },
		{ "EDamageType::EDT_HealthOnly", (int64)EDamageType::EDT_HealthOnly },
		{ "EDamageType::EDT_ShieldOnly", (int64)EDamageType::EDT_ShieldOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EDT_HealthOnly.DisplayName", "Health Only" },
		{ "EDT_HealthOnly.Name", "EDamageType::EDT_HealthOnly" },
		{ "EDT_ShieldOnly.DisplayName", "Shield Only" },
		{ "EDT_ShieldOnly.Name", "EDamageType::EDT_ShieldOnly" },
		{ "EDT_Standard.DisplayName", "Standard" },
		{ "EDT_Standard.Name", "EDamageType::EDT_Standard" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
		{ "ScriptName", "Damage_Type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin,
		nullptr,
		"EDamageType",
		"EDamageType",
		Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType()
	{
		if (!Z_Registration_Info_UEnum_EDamageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageType.InnerSingleton, Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDamageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShieldRegenType;
	static UEnum* EShieldRegenType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EShieldRegenType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EShieldRegenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType, (UObject*)Z_Construct_UPackage__Script_ReplicatedVitalityPlugin(), TEXT("EShieldRegenType"));
		}
		return Z_Registration_Info_UEnum_EShieldRegenType.OuterSingleton;
	}
	template<> REPLICATEDVITALITYPLUGIN_API UEnum* StaticEnum<EShieldRegenType>()
	{
		return EShieldRegenType_StaticEnum();
	}
	struct Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType_Statics::Enumerators[] = {
		{ "EShieldRegenType::ESRT_OnHealthCompleted", (int64)EShieldRegenType::ESRT_OnHealthCompleted },
		{ "EShieldRegenType::ESRT_OnReciveDamage", (int64)EShieldRegenType::ESRT_OnReciveDamage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESRT_OnHealthCompleted.DisplayName", "Wait For Health To Complete" },
		{ "ESRT_OnHealthCompleted.Name", "EShieldRegenType::ESRT_OnHealthCompleted" },
		{ "ESRT_OnReciveDamage.DisplayName", "When Receive Damage" },
		{ "ESRT_OnReciveDamage.Name", "EShieldRegenType::ESRT_OnReciveDamage" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
		{ "ScriptName", "Shield_Regeneration_Type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin,
		nullptr,
		"EShieldRegenType",
		"EShieldRegenType",
		Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType()
	{
		if (!Z_Registration_Info_UEnum_EShieldRegenType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShieldRegenType.InnerSingleton, Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EShieldRegenType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStaminaActionType;
	static UEnum* EStaminaActionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStaminaActionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStaminaActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType, (UObject*)Z_Construct_UPackage__Script_ReplicatedVitalityPlugin(), TEXT("EStaminaActionType"));
		}
		return Z_Registration_Info_UEnum_EStaminaActionType.OuterSingleton;
	}
	template<> REPLICATEDVITALITYPLUGIN_API UEnum* StaticEnum<EStaminaActionType>()
	{
		return EStaminaActionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType_Statics::Enumerators[] = {
		{ "EStaminaActionType::ESAT_Continuously", (int64)EStaminaActionType::ESAT_Continuously },
		{ "EStaminaActionType::ESAT_Once", (int64)EStaminaActionType::ESAT_Once },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESAT_Continuously.DisplayName", "Consume Continuously" },
		{ "ESAT_Continuously.Name", "EStaminaActionType::ESAT_Continuously" },
		{ "ESAT_Once.DisplayName", "Consume Once" },
		{ "ESAT_Once.Name", "EStaminaActionType::ESAT_Once" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin,
		nullptr,
		"EStaminaActionType",
		"EStaminaActionType",
		Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType()
	{
		if (!Z_Registration_Info_UEnum_EStaminaActionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStaminaActionType.InnerSingleton, Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStaminaActionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HealthInfo;
class UScriptStruct* FHealthInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HealthInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HealthInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHealthInfo, (UObject*)Z_Construct_UPackage__Script_ReplicatedVitalityPlugin(), TEXT("HealthInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HealthInfo.OuterSingleton;
}
template<> REPLICATEDVITALITYPLUGIN_API UScriptStruct* StaticStruct<FHealthInfo>()
{
	return FHealthInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHealthInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathState_MetaData[];
#endif
		static void NewProp_DeathState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DeathState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHealthInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHealthInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_DeathState_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// General\n" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
		{ "ToolTip", "General" },
	};
#endif
	void Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_DeathState_SetBit(void* Obj)
	{
		((FHealthInfo*)Obj)->DeathState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_DeathState = { "DeathState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHealthInfo), &Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_DeathState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_DeathState_MetaData), Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_DeathState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// Health\n" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
		{ "ToolTip", "Health" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHealthInfo, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHealthInfo, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_NormalizedHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_NormalizedHealth = { "NormalizedHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHealthInfo, NormalizedHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_NormalizedHealth_MetaData), Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_NormalizedHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHealthInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_DeathState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthInfo_Statics::NewProp_NormalizedHealth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHealthInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin,
		nullptr,
		&NewStructOps,
		"HealthInfo",
		Z_Construct_UScriptStruct_FHealthInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthInfo_Statics::PropPointers),
		sizeof(FHealthInfo),
		alignof(FHealthInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHealthInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHealthInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_HealthInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HealthInfo.InnerSingleton, Z_Construct_UScriptStruct_FHealthInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HealthInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShieldInfo;
class UScriptStruct* FShieldInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShieldInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShieldInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShieldInfo, (UObject*)Z_Construct_UPackage__Script_ReplicatedVitalityPlugin(), TEXT("ShieldInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ShieldInfo.OuterSingleton;
}
template<> REPLICATEDVITALITYPLUGIN_API UScriptStruct* StaticStruct<FShieldInfo>()
{
	return FShieldInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShieldInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentShield_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentShield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShield_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedShield_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedShield;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShieldInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShieldInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShieldInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_CurrentShield_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_CurrentShield = { "CurrentShield", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShieldInfo, CurrentShield), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_CurrentShield_MetaData), Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_CurrentShield_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_MaxShield_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_MaxShield = { "MaxShield", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShieldInfo, MaxShield), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_MaxShield_MetaData), Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_MaxShield_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_NormalizedShield_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_NormalizedShield = { "NormalizedShield", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShieldInfo, NormalizedShield), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_NormalizedShield_MetaData), Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_NormalizedShield_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShieldInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_CurrentShield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_MaxShield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShieldInfo_Statics::NewProp_NormalizedShield,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShieldInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin,
		nullptr,
		&NewStructOps,
		"ShieldInfo",
		Z_Construct_UScriptStruct_FShieldInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShieldInfo_Statics::PropPointers),
		sizeof(FShieldInfo),
		alignof(FShieldInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShieldInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShieldInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShieldInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FShieldInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ShieldInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShieldInfo.InnerSingleton, Z_Construct_UScriptStruct_FShieldInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShieldInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaminaInfo;
class UScriptStruct* FStaminaInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaminaInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaminaInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaminaInfo, (UObject*)Z_Construct_UPackage__Script_ReplicatedVitalityPlugin(), TEXT("StaminaInfo"));
	}
	return Z_Registration_Info_UScriptStruct_StaminaInfo.OuterSingleton;
}
template<> REPLICATEDVITALITYPLUGIN_API UScriptStruct* StaticStruct<FStaminaInfo>()
{
	return FStaminaInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaminaInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedStamina;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveStaminaActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStaminaActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveStaminaActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaminaInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaminaInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaminaInfo, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_CurrentStamina_MetaData), Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_CurrentStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaminaInfo, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_MaxStamina_MetaData), Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_MaxStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_NormalizedStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_NormalizedStamina = { "NormalizedStamina", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaminaInfo, NormalizedStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_NormalizedStamina_MetaData), Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_NormalizedStamina_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_ActiveStaminaActions_Inner = { "ActiveStaminaActions", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaminaAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_ActiveStaminaActions_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Utils/VitalityTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_ActiveStaminaActions = { "ActiveStaminaActions", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaminaInfo, ActiveStaminaActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_ActiveStaminaActions_MetaData), Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_ActiveStaminaActions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaminaInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_CurrentStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_MaxStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_NormalizedStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_ActiveStaminaActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewProp_ActiveStaminaActions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaminaInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin,
		nullptr,
		&NewStructOps,
		"StaminaInfo",
		Z_Construct_UScriptStruct_FStaminaInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaminaInfo_Statics::PropPointers),
		sizeof(FStaminaInfo),
		alignof(FStaminaInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaminaInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaminaInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaminaInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStaminaInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_StaminaInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaminaInfo.InnerSingleton, Z_Construct_UScriptStruct_FStaminaInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaminaInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalityTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalityTypes_h_Statics::EnumInfo[] = {
		{ EDamageType_StaticEnum, TEXT("EDamageType"), &Z_Registration_Info_UEnum_EDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 27816004U) },
		{ EShieldRegenType_StaticEnum, TEXT("EShieldRegenType"), &Z_Registration_Info_UEnum_EShieldRegenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3523389193U) },
		{ EStaminaActionType_StaticEnum, TEXT("EStaminaActionType"), &Z_Registration_Info_UEnum_EStaminaActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2338506654U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalityTypes_h_Statics::ScriptStructInfo[] = {
		{ FHealthInfo::StaticStruct, Z_Construct_UScriptStruct_FHealthInfo_Statics::NewStructOps, TEXT("HealthInfo"), &Z_Registration_Info_UScriptStruct_HealthInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHealthInfo), 3584865732U) },
		{ FShieldInfo::StaticStruct, Z_Construct_UScriptStruct_FShieldInfo_Statics::NewStructOps, TEXT("ShieldInfo"), &Z_Registration_Info_UScriptStruct_ShieldInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShieldInfo), 1708989143U) },
		{ FStaminaInfo::StaticStruct, Z_Construct_UScriptStruct_FStaminaInfo_Statics::NewStructOps, TEXT("StaminaInfo"), &Z_Registration_Info_UScriptStruct_StaminaInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaminaInfo), 2793201303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalityTypes_h_310769925(TEXT("/Script/ReplicatedVitalityPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalityTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalityTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalityTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
