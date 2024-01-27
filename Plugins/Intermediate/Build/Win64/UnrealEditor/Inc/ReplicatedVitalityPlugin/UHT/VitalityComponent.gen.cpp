// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicatedVitalityPlugin/Public/Core/VitalityComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "ReplicatedVitalityPlugin/Public/Utils/VitalityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVitalityComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_ULandingAction_NoRegister();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UStaminaAction_NoRegister();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UVitalityComponent();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UVitalityComponent_NoRegister();
	REPLICATEDVITALITYPLUGIN_API UEnum* Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType();
	REPLICATEDVITALITYPLUGIN_API UEnum* Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHealthInfo();
	REPLICATEDVITALITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FShieldInfo();
	REPLICATEDVITALITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStaminaInfo();
	UPackage* Z_Construct_UPackage__Script_ReplicatedVitalityPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics
	{
		struct _Script_ReplicatedVitalityPlugin_eventOnDeathStateUpdated_Parms
		{
			bool OldDeathState;
			UVitalityComponent* VitalityComponent;
		};
		static void NewProp_OldDeathState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OldDeathState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VitalityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VitalityComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::NewProp_OldDeathState_SetBit(void* Obj)
	{
		((_Script_ReplicatedVitalityPlugin_eventOnDeathStateUpdated_Parms*)Obj)->OldDeathState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::NewProp_OldDeathState = { "OldDeathState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ReplicatedVitalityPlugin_eventOnDeathStateUpdated_Parms), &Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::NewProp_OldDeathState_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::NewProp_VitalityComponent = { "VitalityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnDeathStateUpdated_Parms, VitalityComponent), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::NewProp_OldDeathState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::NewProp_VitalityComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin, nullptr, "OnDeathStateUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnDeathStateUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnDeathStateUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDeathStateUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnDeathStateUpdated, bool OldDeathState, UVitalityComponent* VitalityComponent)
{
	struct _Script_ReplicatedVitalityPlugin_eventOnDeathStateUpdated_Parms
	{
		bool OldDeathState;
		UVitalityComponent* VitalityComponent;
	};
	_Script_ReplicatedVitalityPlugin_eventOnDeathStateUpdated_Parms Parms;
	Parms.OldDeathState=OldDeathState ? true : false;
	Parms.VitalityComponent=VitalityComponent;
	OnDeathStateUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics
	{
		struct _Script_ReplicatedVitalityPlugin_eventOnHealthUpdated_Parms
		{
			float OldHealth;
			UVitalityComponent* VitalityComponent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VitalityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VitalityComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnHealthUpdated_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::NewProp_VitalityComponent = { "VitalityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnHealthUpdated_Parms, VitalityComponent), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::NewProp_OldHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::NewProp_VitalityComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin, nullptr, "OnHealthUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnHealthUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnHealthUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHealthUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnHealthUpdated, float OldHealth, UVitalityComponent* VitalityComponent)
{
	struct _Script_ReplicatedVitalityPlugin_eventOnHealthUpdated_Parms
	{
		float OldHealth;
		UVitalityComponent* VitalityComponent;
	};
	_Script_ReplicatedVitalityPlugin_eventOnHealthUpdated_Parms Parms;
	Parms.OldHealth=OldHealth;
	Parms.VitalityComponent=VitalityComponent;
	OnHealthUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics
	{
		struct _Script_ReplicatedVitalityPlugin_eventOnShieldUpdated_Parms
		{
			float OldShield;
			UVitalityComponent* VitalityComponent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldShield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VitalityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VitalityComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::NewProp_OldShield = { "OldShield", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnShieldUpdated_Parms, OldShield), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::NewProp_VitalityComponent = { "VitalityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnShieldUpdated_Parms, VitalityComponent), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::NewProp_OldShield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::NewProp_VitalityComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin, nullptr, "OnShieldUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnShieldUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnShieldUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnShieldUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnShieldUpdated, float OldShield, UVitalityComponent* VitalityComponent)
{
	struct _Script_ReplicatedVitalityPlugin_eventOnShieldUpdated_Parms
	{
		float OldShield;
		UVitalityComponent* VitalityComponent;
	};
	_Script_ReplicatedVitalityPlugin_eventOnShieldUpdated_Parms Parms;
	Parms.OldShield=OldShield;
	Parms.VitalityComponent=VitalityComponent;
	OnShieldUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics
	{
		struct _Script_ReplicatedVitalityPlugin_eventOnStaminaUpdated_Parms
		{
			float OldStamina;
			UVitalityComponent* VitalityComponent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VitalityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VitalityComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::NewProp_OldStamina = { "OldStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnStaminaUpdated_Parms, OldStamina), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::NewProp_VitalityComponent = { "VitalityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnStaminaUpdated_Parms, VitalityComponent), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::NewProp_OldStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::NewProp_VitalityComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin, nullptr, "OnStaminaUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnStaminaUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnStaminaUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStaminaUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaUpdated, float OldStamina, UVitalityComponent* VitalityComponent)
{
	struct _Script_ReplicatedVitalityPlugin_eventOnStaminaUpdated_Parms
	{
		float OldStamina;
		UVitalityComponent* VitalityComponent;
	};
	_Script_ReplicatedVitalityPlugin_eventOnStaminaUpdated_Parms Parms;
	Parms.OldStamina=OldStamina;
	Parms.VitalityComponent=VitalityComponent;
	OnStaminaUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics
	{
		struct _Script_ReplicatedVitalityPlugin_eventOnReceiveDamage_Parms
		{
			EDamageType DamageType;
			float Amount;
			UVitalityComponent* VitalityComponent;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VitalityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VitalityComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnReceiveDamage_Parms, DamageType), Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType, METADATA_PARAMS(0, nullptr) }; // 27816004
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnReceiveDamage_Parms, Amount), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::NewProp_VitalityComponent = { "VitalityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnReceiveDamage_Parms, VitalityComponent), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::NewProp_DamageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::NewProp_VitalityComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin, nullptr, "OnReceiveDamage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnReceiveDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnReceiveDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReceiveDamage_DelegateWrapper(const FMulticastScriptDelegate& OnReceiveDamage, EDamageType DamageType, float Amount, UVitalityComponent* VitalityComponent)
{
	struct _Script_ReplicatedVitalityPlugin_eventOnReceiveDamage_Parms
	{
		EDamageType DamageType;
		float Amount;
		UVitalityComponent* VitalityComponent;
	};
	_Script_ReplicatedVitalityPlugin_eventOnReceiveDamage_Parms Parms;
	Parms.DamageType=DamageType;
	Parms.Amount=Amount;
	Parms.VitalityComponent=VitalityComponent;
	OnReceiveDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics
	{
		struct _Script_ReplicatedVitalityPlugin_eventOnRunOutOfStamina_Parms
		{
			UVitalityComponent* VitalityComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VitalityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VitalityComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::NewProp_VitalityComponent = { "VitalityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnRunOutOfStamina_Parms, VitalityComponent), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::NewProp_VitalityComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::NewProp_VitalityComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin, nullptr, "OnRunOutOfStamina__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnRunOutOfStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnRunOutOfStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRunOutOfStamina_DelegateWrapper(const FMulticastScriptDelegate& OnRunOutOfStamina, UVitalityComponent* VitalityComponent)
{
	struct _Script_ReplicatedVitalityPlugin_eventOnRunOutOfStamina_Parms
	{
		UVitalityComponent* VitalityComponent;
	};
	_Script_ReplicatedVitalityPlugin_eventOnRunOutOfStamina_Parms Parms;
	Parms.VitalityComponent=VitalityComponent;
	OnRunOutOfStamina.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UVitalityComponent::execGetStaminaInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FStaminaInfo*)Z_Param__Result=P_THIS->GetStaminaInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execGetShieldInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FShieldInfo*)Z_Param__Result=P_THIS->GetShieldInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execGetHealthInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHealthInfo*)Z_Param__Result=P_THIS->GetHealthInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execOnRep_MaxStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldMaxStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxStamina(Z_Param_OldMaxStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execOnRep_CurrentStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentStamina(Z_Param_OldStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execStopStaminaAction)
	{
		P_GET_OBJECT(UClass,Z_Param_ActionClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopStaminaAction_Implementation(Z_Param_ActionClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execTryStartStaminaAction)
	{
		P_GET_OBJECT(UClass,Z_Param_ActionClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryStartStaminaAction_Implementation(Z_Param_ActionClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execSetStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStamina(Z_Param_NewStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execOnRep_MaxShield)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldShield);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxShield(Z_Param_OldShield);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execOnRep_CurrentShield)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldShield);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentShield(Z_Param_OldShield);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execRefreshShield)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshShield(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execSetShield)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewShield);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShield(Z_Param_NewShield);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execOnLanded)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLanded(Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execOnRep_MaxHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_OldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execOnRep_CurrentHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentHealth(Z_Param_OldHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execRefreshHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshHealth(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execSetHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealth(Z_Param_NewHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execOnRep_DeathState)
	{
		P_GET_UBOOL(Z_Param_OldDeathState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DeathState(Z_Param_OldDeathState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalityComponent::execReceiveDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_GET_ENUM(EDamageType,Z_Param_DamageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveDamage(Z_Param_Amount,EDamageType(Z_Param_DamageType));
		P_NATIVE_END;
	}
	struct VitalityComponent_eventStopStaminaAction_Parms
	{
		TSubclassOf<UStaminaAction>  ActionClass;
	};
	struct VitalityComponent_eventTryStartStaminaAction_Parms
	{
		TSubclassOf<UStaminaAction>  ActionClass;
	};
	static FName NAME_UVitalityComponent_StopStaminaAction = FName(TEXT("StopStaminaAction"));
	void UVitalityComponent::StopStaminaAction(TSubclassOf<UStaminaAction>  ActionClass)
	{
		VitalityComponent_eventStopStaminaAction_Parms Parms;
		Parms.ActionClass=ActionClass;
		ProcessEvent(FindFunctionChecked(NAME_UVitalityComponent_StopStaminaAction),&Parms);
	}
	static FName NAME_UVitalityComponent_TryStartStaminaAction = FName(TEXT("TryStartStaminaAction"));
	void UVitalityComponent::TryStartStaminaAction(TSubclassOf<UStaminaAction>  ActionClass)
	{
		VitalityComponent_eventTryStartStaminaAction_Parms Parms;
		Parms.ActionClass=ActionClass;
		ProcessEvent(FindFunctionChecked(NAME_UVitalityComponent_TryStartStaminaAction),&Parms);
	}
	void UVitalityComponent::StaticRegisterNativesUVitalityComponent()
	{
		UClass* Class = UVitalityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthInfo", &UVitalityComponent::execGetHealthInfo },
			{ "GetShieldInfo", &UVitalityComponent::execGetShieldInfo },
			{ "GetStaminaInfo", &UVitalityComponent::execGetStaminaInfo },
			{ "OnLanded", &UVitalityComponent::execOnLanded },
			{ "OnRep_CurrentHealth", &UVitalityComponent::execOnRep_CurrentHealth },
			{ "OnRep_CurrentShield", &UVitalityComponent::execOnRep_CurrentShield },
			{ "OnRep_CurrentStamina", &UVitalityComponent::execOnRep_CurrentStamina },
			{ "OnRep_DeathState", &UVitalityComponent::execOnRep_DeathState },
			{ "OnRep_MaxHealth", &UVitalityComponent::execOnRep_MaxHealth },
			{ "OnRep_MaxShield", &UVitalityComponent::execOnRep_MaxShield },
			{ "OnRep_MaxStamina", &UVitalityComponent::execOnRep_MaxStamina },
			{ "ReceiveDamage", &UVitalityComponent::execReceiveDamage },
			{ "RefreshHealth", &UVitalityComponent::execRefreshHealth },
			{ "RefreshShield", &UVitalityComponent::execRefreshShield },
			{ "SetHealth", &UVitalityComponent::execSetHealth },
			{ "SetShield", &UVitalityComponent::execSetShield },
			{ "SetStamina", &UVitalityComponent::execSetStamina },
			{ "StopStaminaAction", &UVitalityComponent::execStopStaminaAction },
			{ "TryStartStaminaAction", &UVitalityComponent::execTryStartStaminaAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics
	{
		struct VitalityComponent_eventGetHealthInfo_Parms
		{
			FHealthInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventGetHealthInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FHealthInfo, METADATA_PARAMS(0, nullptr) }; // 3584865732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats|Getters" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "GetHealthInfo", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::VitalityComponent_eventGetHealthInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::VitalityComponent_eventGetHealthInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_GetHealthInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_GetHealthInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics
	{
		struct VitalityComponent_eventGetShieldInfo_Parms
		{
			FShieldInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventGetShieldInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FShieldInfo, METADATA_PARAMS(0, nullptr) }; // 1708989143
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats|Getters" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "GetShieldInfo", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::VitalityComponent_eventGetShieldInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::VitalityComponent_eventGetShieldInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_GetShieldInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_GetShieldInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics
	{
		struct VitalityComponent_eventGetStaminaInfo_Parms
		{
			FStaminaInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventGetStaminaInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FStaminaInfo, METADATA_PARAMS(0, nullptr) }; // 2793201303
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats|Getters" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "GetStaminaInfo", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::VitalityComponent_eventGetStaminaInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::VitalityComponent_eventGetStaminaInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics
	{
		struct VitalityComponent_eventOnLanded_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventOnLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats|Landing" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "OnLanded", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::VitalityComponent_eventOnLanded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::VitalityComponent_eventOnLanded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_OnLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_OnLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics
	{
		struct VitalityComponent_eventOnRep_CurrentHealth_Parms
		{
			float OldHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventOnRep_CurrentHealth_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "OnRep_CurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::VitalityComponent_eventOnRep_CurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::VitalityComponent_eventOnRep_CurrentHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics
	{
		struct VitalityComponent_eventOnRep_CurrentShield_Parms
		{
			float OldShield;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldShield;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::NewProp_OldShield = { "OldShield", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventOnRep_CurrentShield_Parms, OldShield), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::NewProp_OldShield,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "OnRep_CurrentShield", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::VitalityComponent_eventOnRep_CurrentShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::VitalityComponent_eventOnRep_CurrentShield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics
	{
		struct VitalityComponent_eventOnRep_CurrentStamina_Parms
		{
			float OldStamina;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::NewProp_OldStamina = { "OldStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventOnRep_CurrentStamina_Parms, OldStamina), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::NewProp_OldStamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "OnRep_CurrentStamina", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::VitalityComponent_eventOnRep_CurrentStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::VitalityComponent_eventOnRep_CurrentStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics
	{
		struct VitalityComponent_eventOnRep_DeathState_Parms
		{
			bool OldDeathState;
		};
		static void NewProp_OldDeathState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OldDeathState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::NewProp_OldDeathState_SetBit(void* Obj)
	{
		((VitalityComponent_eventOnRep_DeathState_Parms*)Obj)->OldDeathState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::NewProp_OldDeathState = { "OldDeathState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitalityComponent_eventOnRep_DeathState_Parms), &Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::NewProp_OldDeathState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::NewProp_OldDeathState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "OnRep_DeathState", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::VitalityComponent_eventOnRep_DeathState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::VitalityComponent_eventOnRep_DeathState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics
	{
		struct VitalityComponent_eventOnRep_MaxHealth_Parms
		{
			float OldMaxHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventOnRep_MaxHealth_Parms, OldMaxHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::VitalityComponent_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::VitalityComponent_eventOnRep_MaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics
	{
		struct VitalityComponent_eventOnRep_MaxShield_Parms
		{
			float OldShield;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldShield;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::NewProp_OldShield = { "OldShield", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventOnRep_MaxShield_Parms, OldShield), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::NewProp_OldShield,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "OnRep_MaxShield", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::VitalityComponent_eventOnRep_MaxShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::VitalityComponent_eventOnRep_MaxShield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics
	{
		struct VitalityComponent_eventOnRep_MaxStamina_Parms
		{
			float OldMaxStamina;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldMaxStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina = { "OldMaxStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventOnRep_MaxStamina_Parms, OldMaxStamina), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "OnRep_MaxStamina", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::VitalityComponent_eventOnRep_MaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::VitalityComponent_eventOnRep_MaxStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics
	{
		struct VitalityComponent_eventReceiveDamage_Parms
		{
			float Amount;
			EDamageType DamageType;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventReceiveDamage_Parms, Amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventReceiveDamage_Parms, DamageType), Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType, METADATA_PARAMS(0, nullptr) }; // 27816004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::NewProp_DamageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::NewProp_DamageType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats|General" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "ReceiveDamage", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::VitalityComponent_eventReceiveDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::VitalityComponent_eventReceiveDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_ReceiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_ReceiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics
	{
		struct VitalityComponent_eventRefreshHealth_Parms
		{
			float DeltaTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventRefreshHealth_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::NewProp_DeltaTime_MetaData), Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::NewProp_DeltaTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "RefreshHealth", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::VitalityComponent_eventRefreshHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::VitalityComponent_eventRefreshHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_RefreshHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_RefreshHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics
	{
		struct VitalityComponent_eventRefreshShield_Parms
		{
			float DeltaTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventRefreshShield_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::NewProp_DeltaTime_MetaData), Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::NewProp_DeltaTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "RefreshShield", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::VitalityComponent_eventRefreshShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::VitalityComponent_eventRefreshShield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_RefreshShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_RefreshShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics
	{
		struct VitalityComponent_eventSetHealth_Parms
		{
			float NewHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventSetHealth_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::NewProp_NewHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats|Health" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::VitalityComponent_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::VitalityComponent_eventSetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_SetShield_Statics
	{
		struct VitalityComponent_eventSetShield_Parms
		{
			float NewShield;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewShield;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::NewProp_NewShield = { "NewShield", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventSetShield_Parms, NewShield), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::NewProp_NewShield,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats|Shield" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "SetShield", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::VitalityComponent_eventSetShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::VitalityComponent_eventSetShield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_SetShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_SetShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics
	{
		struct VitalityComponent_eventSetStamina_Parms
		{
			float NewStamina;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::NewProp_NewStamina = { "NewStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventSetStamina_Parms, NewStamina), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::NewProp_NewStamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats|Stamina" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "SetStamina", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::VitalityComponent_eventSetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::VitalityComponent_eventSetStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_SetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_SetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_StopStaminaAction_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVitalityComponent_StopStaminaAction_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventStopStaminaAction_Parms, ActionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStaminaAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_StopStaminaAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_StopStaminaAction_Statics::NewProp_ActionClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_StopStaminaAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats|Stamina" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_StopStaminaAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "StopStaminaAction", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_StopStaminaAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_StopStaminaAction_Statics::PropPointers), sizeof(VitalityComponent_eventStopStaminaAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_StopStaminaAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_StopStaminaAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_StopStaminaAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(VitalityComponent_eventStopStaminaAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_StopStaminaAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_StopStaminaAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalityComponent_eventTryStartStaminaAction_Parms, ActionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStaminaAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction_Statics::NewProp_ActionClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats|Stamina" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalityComponent, nullptr, "TryStartStaminaAction", nullptr, nullptr, Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction_Statics::PropPointers), sizeof(VitalityComponent_eventTryStartStaminaAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(VitalityComponent_eventTryStartStaminaAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVitalityComponent);
	UClass* Z_Construct_UClass_UVitalityComponent_NoRegister()
	{
		return UVitalityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVitalityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathState_MetaData[];
#endif
		static void NewProp_DeathState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DeathState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeathStateUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathStateUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReceiveDamage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiveDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRegenerateHealth_MetaData[];
#endif
		static void NewProp_bShouldRegenerateHealth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRegenerateHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRegenAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRegenFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenDelayAfterDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRegenDelayAfterDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldTakeFallDamage_MetaData[];
#endif
		static void NewProp_bShouldTakeFallDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTakeFallDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallDamageCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FallDamageCurve;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedLandingActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedLandingActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedLandingActions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FallDamageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallDamageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FallDamageType;
		static const UECodeGen_Private::FClassPropertyParams NewProp_LandingActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandingActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LandingActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentShield_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentShield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShield_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRegenerateShield_MetaData[];
#endif
		static void NewProp_bShouldRegenerateShield_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRegenerateShield;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShieldRegenType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldRegenType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShieldRegenType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldRegenAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldRegenAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldRegenFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldRegenFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldRegenDelayAfterDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldRegenDelayAfterDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnShieldUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShieldUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRegenerateStamina_MetaData[];
#endif
		static void NewProp_bShouldRegenerateStamina_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRegenerateStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenerationDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenerationDelay;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedStaminaActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedStaminaActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedStaminaActions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveStaminaActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStaminaActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveStaminaActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRunOutOfStamina_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRunOutOfStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintLandingValues_MetaData[];
#endif
		static void NewProp_bPrintLandingValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintLandingValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVitalityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVitalityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVitalityComponent_GetHealthInfo, "GetHealthInfo" }, // 285837682
		{ &Z_Construct_UFunction_UVitalityComponent_GetShieldInfo, "GetShieldInfo" }, // 1620430646
		{ &Z_Construct_UFunction_UVitalityComponent_GetStaminaInfo, "GetStaminaInfo" }, // 4186657712
		{ &Z_Construct_UFunction_UVitalityComponent_OnLanded, "OnLanded" }, // 1220887725
		{ &Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 3897861095
		{ &Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentShield, "OnRep_CurrentShield" }, // 458165855
		{ &Z_Construct_UFunction_UVitalityComponent_OnRep_CurrentStamina, "OnRep_CurrentStamina" }, // 2338470896
		{ &Z_Construct_UFunction_UVitalityComponent_OnRep_DeathState, "OnRep_DeathState" }, // 904141087
		{ &Z_Construct_UFunction_UVitalityComponent_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 1913048411
		{ &Z_Construct_UFunction_UVitalityComponent_OnRep_MaxShield, "OnRep_MaxShield" }, // 1100991472
		{ &Z_Construct_UFunction_UVitalityComponent_OnRep_MaxStamina, "OnRep_MaxStamina" }, // 723331040
		{ &Z_Construct_UFunction_UVitalityComponent_ReceiveDamage, "ReceiveDamage" }, // 2927317324
		{ &Z_Construct_UFunction_UVitalityComponent_RefreshHealth, "RefreshHealth" }, // 4080382831
		{ &Z_Construct_UFunction_UVitalityComponent_RefreshShield, "RefreshShield" }, // 1278614837
		{ &Z_Construct_UFunction_UVitalityComponent_SetHealth, "SetHealth" }, // 2105582895
		{ &Z_Construct_UFunction_UVitalityComponent_SetShield, "SetShield" }, // 3000398716
		{ &Z_Construct_UFunction_UVitalityComponent_SetStamina, "SetStamina" }, // 2230666395
		{ &Z_Construct_UFunction_UVitalityComponent_StopStaminaAction, "StopStaminaAction" }, // 474560762
		{ &Z_Construct_UFunction_UVitalityComponent_TryStartStaminaAction, "TryStartStaminaAction" }, // 2896367704
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "Vitality Component" },
		{ "IncludePath", "Core/VitalityComponent.h" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_DeathState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVitalityComponent_Statics::NewProp_DeathState_SetBit(void* Obj)
	{
		((UVitalityComponent*)Obj)->DeathState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_DeathState = { "DeathState", "OnRep_DeathState", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVitalityComponent), &Z_Construct_UClass_UVitalityComponent_Statics::NewProp_DeathState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_DeathState_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_DeathState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnDeathStateUpdated_MetaData[] = {
		{ "Category", "Stats|General" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnDeathStateUpdated = { "OnDeathStateUpdated", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, OnDeathStateUpdated), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnDeathStateUpdated_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnDeathStateUpdated_MetaData) }; // 3908627340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnReceiveDamage_MetaData[] = {
		{ "Category", "Stats|General" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnReceiveDamage = { "OnReceiveDamage", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, OnReceiveDamage), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnReceiveDamage_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnReceiveDamage_MetaData) }; // 2001713453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Stats|Health" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0040000100000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats|Health" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0040000100000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateHealth_MetaData[] = {
		{ "Category", "Stats|Health" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateHealth_SetBit(void* Obj)
	{
		((UVitalityComponent*)Obj)->bShouldRegenerateHealth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateHealth = { "bShouldRegenerateHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVitalityComponent), &Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateHealth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateHealth_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenAmount_MetaData[] = {
		{ "Category", "Stats|Health" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenAmount = { "HealthRegenAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, HealthRegenAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenAmount_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenFrequency_MetaData[] = {
		{ "Category", "Stats|Health" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenFrequency = { "HealthRegenFrequency", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, HealthRegenFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenFrequency_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenDelayAfterDamage_MetaData[] = {
		{ "Category", "Stats|Health" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenDelayAfterDamage = { "HealthRegenDelayAfterDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, HealthRegenDelayAfterDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenDelayAfterDamage_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenDelayAfterDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnHealthUpdated_MetaData[] = {
		{ "Category", "Stats|Health" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnHealthUpdated = { "OnHealthUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, OnHealthUpdated), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnHealthUpdated_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnHealthUpdated_MetaData) }; // 3357345768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldTakeFallDamage_MetaData[] = {
		{ "Category", "Stats|Land" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldTakeFallDamage_SetBit(void* Obj)
	{
		((UVitalityComponent*)Obj)->bShouldTakeFallDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldTakeFallDamage = { "bShouldTakeFallDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVitalityComponent), &Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldTakeFallDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldTakeFallDamage_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldTakeFallDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_FallDamageCurve_MetaData[] = {
		{ "Category", "Stats|Land" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_FallDamageCurve = { "FallDamageCurve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, FallDamageCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_FallDamageCurve_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_FallDamageCurve_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedLandingActions_Inner = { "GeneratedLandingActions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandingAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedLandingActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedLandingActions = { "GeneratedLandingActions", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, GeneratedLandingActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedLandingActions_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedLandingActions_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_FallDamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_FallDamageType_MetaData[] = {
		{ "Category", "Stats|Land" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_FallDamageType = { "FallDamageType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, FallDamageType), Z_Construct_UEnum_ReplicatedVitalityPlugin_EDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_FallDamageType_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_FallDamageType_MetaData) }; // 27816004
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_LandingActions_Inner = { "LandingActions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULandingAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_LandingActions_MetaData[] = {
		{ "Category", "Stats|Land" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_LandingActions = { "LandingActions", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, LandingActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_LandingActions_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_LandingActions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentShield_MetaData[] = {
		{ "Category", "Stats|Shield" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentShield = { "CurrentShield", "OnRep_CurrentShield", (EPropertyFlags)0x0040000100000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, CurrentShield), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentShield_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentShield_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxShield_MetaData[] = {
		{ "Category", "Stats|Shield" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxShield = { "MaxShield", "OnRep_MaxShield", (EPropertyFlags)0x0040000100000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, MaxShield), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxShield_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxShield_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateShield_MetaData[] = {
		{ "Category", "Stats|Shield" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateShield_SetBit(void* Obj)
	{
		((UVitalityComponent*)Obj)->bShouldRegenerateShield = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateShield = { "bShouldRegenerateShield", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVitalityComponent), &Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateShield_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateShield_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateShield_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenType_MetaData[] = {
		{ "Category", "Stats|Shield" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenType = { "ShieldRegenType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, ShieldRegenType), Z_Construct_UEnum_ReplicatedVitalityPlugin_EShieldRegenType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenType_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenType_MetaData) }; // 3523389193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenAmount_MetaData[] = {
		{ "Category", "Stats|Shield" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenAmount = { "ShieldRegenAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, ShieldRegenAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenAmount_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenFrequency_MetaData[] = {
		{ "Category", "Stats|Shield" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenFrequency = { "ShieldRegenFrequency", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, ShieldRegenFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenFrequency_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenDelayAfterDamage_MetaData[] = {
		{ "Category", "Stats|Shield" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenDelayAfterDamage = { "ShieldRegenDelayAfterDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, ShieldRegenDelayAfterDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenDelayAfterDamage_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenDelayAfterDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnShieldUpdated_MetaData[] = {
		{ "Category", "Stats|Shield" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnShieldUpdated = { "OnShieldUpdated", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, OnShieldUpdated), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnShieldUpdated_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnShieldUpdated_MetaData) }; // 3327457376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Stats|Stamina" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentStamina = { "CurrentStamina", "OnRep_CurrentStamina", (EPropertyFlags)0x0040000100000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentStamina_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stats|Stamina" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxStamina = { "MaxStamina", "OnRep_MaxStamina", (EPropertyFlags)0x0040000100000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxStamina_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateStamina_MetaData[] = {
		{ "Category", "Stats|Stamina" },
		{ "Comment", "// Regeneration\n" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
		{ "ToolTip", "Regeneration" },
	};
#endif
	void Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateStamina_SetBit(void* Obj)
	{
		((UVitalityComponent*)Obj)->bShouldRegenerateStamina = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateStamina = { "bShouldRegenerateStamina", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVitalityComponent), &Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateStamina_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateStamina_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenAmount_MetaData[] = {
		{ "Category", "Stats|Stamina" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenAmount = { "StaminaRegenAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, StaminaRegenAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenAmount_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenFrequency_MetaData[] = {
		{ "Category", "Stats|Stamina" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenFrequency = { "StaminaRegenFrequency", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, StaminaRegenFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenFrequency_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenerationDelay_MetaData[] = {
		{ "Category", "Stats|Stamina" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenerationDelay = { "StaminaRegenerationDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, StaminaRegenerationDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenerationDelay_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenerationDelay_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedStaminaActions_Inner = { "GeneratedStaminaActions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaminaAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedStaminaActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedStaminaActions = { "GeneratedStaminaActions", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, GeneratedStaminaActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedStaminaActions_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedStaminaActions_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ActiveStaminaActions_Inner = { "ActiveStaminaActions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaminaAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ActiveStaminaActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ActiveStaminaActions = { "ActiveStaminaActions", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, ActiveStaminaActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ActiveStaminaActions_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ActiveStaminaActions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnStaminaUpdated_MetaData[] = {
		{ "Category", "Stats|Stamina" },
		{ "Comment", "// Stamina Replication\n" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
		{ "ToolTip", "Stamina Replication" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnStaminaUpdated = { "OnStaminaUpdated", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, OnStaminaUpdated), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnStaminaUpdated_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnStaminaUpdated_MetaData) }; // 3218603469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnRunOutOfStamina_MetaData[] = {
		{ "Category", "Stats|Stamina" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnRunOutOfStamina = { "OnRunOutOfStamina", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalityComponent, OnRunOutOfStamina), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnRunOutOfStamina_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnRunOutOfStamina_MetaData) }; // 3966482550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bPrintLandingValues_MetaData[] = {
		{ "Category", "Stats|Debug" },
		{ "Comment", "/*\n * Debug\n*/" },
		{ "ModuleRelativePath", "Public/Core/VitalityComponent.h" },
		{ "ToolTip", "* Debug" },
	};
#endif
	void Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bPrintLandingValues_SetBit(void* Obj)
	{
		((UVitalityComponent*)Obj)->bPrintLandingValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bPrintLandingValues = { "bPrintLandingValues", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVitalityComponent), &Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bPrintLandingValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bPrintLandingValues_MetaData), Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bPrintLandingValues_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVitalityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_DeathState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnDeathStateUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnReceiveDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_HealthRegenDelayAfterDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnHealthUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldTakeFallDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_FallDamageCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedLandingActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedLandingActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_FallDamageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_FallDamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_LandingActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_LandingActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentShield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxShield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateShield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ShieldRegenDelayAfterDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnShieldUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_CurrentStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_MaxStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bShouldRegenerateStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_StaminaRegenerationDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedStaminaActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_GeneratedStaminaActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ActiveStaminaActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_ActiveStaminaActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnStaminaUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_OnRunOutOfStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalityComponent_Statics::NewProp_bPrintLandingValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVitalityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVitalityComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVitalityComponent_Statics::ClassParams = {
		&UVitalityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVitalityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVitalityComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalityComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVitalityComponent()
	{
		if (!Z_Registration_Info_UClass_UVitalityComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVitalityComponent.OuterSingleton, Z_Construct_UClass_UVitalityComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVitalityComponent.OuterSingleton;
	}
	template<> REPLICATEDVITALITYPLUGIN_API UClass* StaticClass<UVitalityComponent>()
	{
		return UVitalityComponent::StaticClass();
	}

	void UVitalityComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DeathState(TEXT("DeathState"));
		static const FName Name_CurrentHealth(TEXT("CurrentHealth"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_CurrentShield(TEXT("CurrentShield"));
		static const FName Name_MaxShield(TEXT("MaxShield"));
		static const FName Name_CurrentStamina(TEXT("CurrentStamina"));
		static const FName Name_MaxStamina(TEXT("MaxStamina"));

		const bool bIsValid = true
			&& Name_DeathState == ClassReps[(int32)ENetFields_Private::DeathState].Property->GetFName()
			&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_CurrentShield == ClassReps[(int32)ENetFields_Private::CurrentShield].Property->GetFName()
			&& Name_MaxShield == ClassReps[(int32)ENetFields_Private::MaxShield].Property->GetFName()
			&& Name_CurrentStamina == ClassReps[(int32)ENetFields_Private::CurrentStamina].Property->GetFName()
			&& Name_MaxStamina == ClassReps[(int32)ENetFields_Private::MaxStamina].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVitalityComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVitalityComponent);
	UVitalityComponent::~UVitalityComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVitalityComponent, UVitalityComponent::StaticClass, TEXT("UVitalityComponent"), &Z_Registration_Info_UClass_UVitalityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVitalityComponent), 2395657818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_591058465(TEXT("/Script/ReplicatedVitalityPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_VitalityComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
