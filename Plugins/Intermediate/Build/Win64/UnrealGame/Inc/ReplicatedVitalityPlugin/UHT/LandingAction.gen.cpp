// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicatedVitalityPlugin/Public/Core/LandingAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandingAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_ULandingAction();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_ULandingAction_NoRegister();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ReplicatedVitalityPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics
	{
		struct _Script_ReplicatedVitalityPlugin_eventOnActionActivated_Parms
		{
			float HorizontalSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::NewProp_HorizontalSpeed = { "HorizontalSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnActionActivated_Parms, HorizontalSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::NewProp_HorizontalSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/LandingAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin, nullptr, "OnActionActivated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnActionActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnActionActivated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActionActivated_DelegateWrapper(const FMulticastScriptDelegate& OnActionActivated, float HorizontalSpeed)
{
	struct _Script_ReplicatedVitalityPlugin_eventOnActionActivated_Parms
	{
		float HorizontalSpeed;
	};
	_Script_ReplicatedVitalityPlugin_eventOnActionActivated_Parms Parms;
	Parms.HorizontalSpeed=HorizontalSpeed;
	OnActionActivated.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULandingAction::execGetActuationThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetActuationThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandingAction::execGetActionName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetActionName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandingAction::execOnActionActivated)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HorizontalSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionActivated_Implementation(Z_Param_Owner,Z_Param_HorizontalSpeed);
		P_NATIVE_END;
	}
	struct LandingAction_eventOnActionActivated_Parms
	{
		AActor* Owner;
		float HorizontalSpeed;
	};
	static FName NAME_ULandingAction_OnActionActivated = FName(TEXT("OnActionActivated"));
	void ULandingAction::OnActionActivated(AActor* Owner, const float HorizontalSpeed)
	{
		LandingAction_eventOnActionActivated_Parms Parms;
		Parms.Owner=Owner;
		Parms.HorizontalSpeed=HorizontalSpeed;
		ProcessEvent(FindFunctionChecked(NAME_ULandingAction_OnActionActivated),&Parms);
	}
	void ULandingAction::StaticRegisterNativesULandingAction()
	{
		UClass* Class = ULandingAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActionName", &ULandingAction::execGetActionName },
			{ "GetActuationThreshold", &ULandingAction::execGetActuationThreshold },
			{ "OnActionActivated", &ULandingAction::execOnActionActivated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULandingAction_GetActionName_Statics
	{
		struct LandingAction_eventGetActionName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULandingAction_GetActionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandingAction_eventGetActionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandingAction_GetActionName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandingAction_GetActionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandingAction_GetActionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "Public/Core/LandingAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandingAction_GetActionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandingAction, nullptr, "GetActionName", nullptr, nullptr, Z_Construct_UFunction_ULandingAction_GetActionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandingAction_GetActionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULandingAction_GetActionName_Statics::LandingAction_eventGetActionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandingAction_GetActionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULandingAction_GetActionName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandingAction_GetActionName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULandingAction_GetActionName_Statics::LandingAction_eventGetActionName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULandingAction_GetActionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandingAction_GetActionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics
	{
		struct LandingAction_eventGetActuationThreshold_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandingAction_eventGetActuationThreshold_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "Public/Core/LandingAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandingAction, nullptr, "GetActuationThreshold", nullptr, nullptr, Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::LandingAction_eventGetActuationThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::LandingAction_eventGetActuationThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULandingAction_GetActuationThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandingAction_GetActuationThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandingAction_eventOnActionActivated_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::NewProp_HorizontalSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::NewProp_HorizontalSpeed = { "HorizontalSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandingAction_eventOnActionActivated_Parms, HorizontalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::NewProp_HorizontalSpeed_MetaData), Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::NewProp_HorizontalSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::NewProp_HorizontalSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/LandingAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandingAction, nullptr, "OnActionActivated", nullptr, nullptr, Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::PropPointers), sizeof(LandingAction_eventOnActionActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::PropPointers) < 2048);
	static_assert(sizeof(LandingAction_eventOnActionActivated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULandingAction_OnActionActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandingAction_OnActionActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandingAction);
	UClass* Z_Construct_UClass_ULandingAction_NoRegister()
	{
		return ULandingAction::StaticClass();
	}
	struct Z_Construct_UClass_ULandingAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActuationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActuationThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandingAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandingAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULandingAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandingAction_GetActionName, "GetActionName" }, // 2165043239
		{ &Z_Construct_UFunction_ULandingAction_GetActuationThreshold, "GetActuationThreshold" }, // 3665412477
		{ &Z_Construct_UFunction_ULandingAction_OnActionActivated, "OnActionActivated" }, // 2689807745
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandingAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandingAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/LandingAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/LandingAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandingAction_Statics::NewProp_ActionName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/LandingAction.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULandingAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandingAction, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandingAction_Statics::NewProp_ActionName_MetaData), Z_Construct_UClass_ULandingAction_Statics::NewProp_ActionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandingAction_Statics::NewProp_ActuationThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/LandingAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandingAction_Statics::NewProp_ActuationThreshold = { "ActuationThreshold", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandingAction, ActuationThreshold), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandingAction_Statics::NewProp_ActuationThreshold_MetaData), Z_Construct_UClass_ULandingAction_Statics::NewProp_ActuationThreshold_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandingAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandingAction_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandingAction_Statics::NewProp_ActuationThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandingAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandingAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandingAction_Statics::ClassParams = {
		&ULandingAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULandingAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandingAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandingAction_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandingAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandingAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULandingAction()
	{
		if (!Z_Registration_Info_UClass_ULandingAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandingAction.OuterSingleton, Z_Construct_UClass_ULandingAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandingAction.OuterSingleton;
	}
	template<> REPLICATEDVITALITYPLUGIN_API UClass* StaticClass<ULandingAction>()
	{
		return ULandingAction::StaticClass();
	}
	ULandingAction::ULandingAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandingAction);
	ULandingAction::~ULandingAction() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandingAction, ULandingAction::StaticClass, TEXT("ULandingAction"), &Z_Registration_Info_UClass_ULandingAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandingAction), 529584909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_3101322293(TEXT("/Script/ReplicatedVitalityPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_LandingAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
