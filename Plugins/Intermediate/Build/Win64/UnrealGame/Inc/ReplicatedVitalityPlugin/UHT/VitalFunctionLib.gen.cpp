// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicatedVitalityPlugin/Public/Utils/VitalFunctionLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVitalFunctionLib() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UStaminaAction_NoRegister();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UVitalFunctionLib();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UVitalFunctionLib_NoRegister();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UVitalityComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReplicatedVitalityPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UVitalFunctionLib::execFindStaminaActionByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ActionClass);
		P_GET_TARRAY(UStaminaAction*,Z_Param_Actions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaminaAction**)Z_Param__Result=UVitalFunctionLib::FindStaminaActionByClass(Z_Param_ActionClass,Z_Param_Actions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVitalFunctionLib::execGetVitalityComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVitalityComponent**)Z_Param__Result=UVitalFunctionLib::GetVitalityComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UVitalFunctionLib::StaticRegisterNativesUVitalFunctionLib()
	{
		UClass* Class = UVitalFunctionLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindStaminaActionByClass", &UVitalFunctionLib::execFindStaminaActionByClass },
			{ "GetVitalityComponent", &UVitalFunctionLib::execGetVitalityComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics
	{
		struct VitalFunctionLib_eventFindStaminaActionByClass_Parms
		{
			UClass* ActionClass;
			TArray<UStaminaAction*> Actions;
			UStaminaAction* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalFunctionLib_eventFindStaminaActionByClass_Parms, ActionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaminaAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalFunctionLib_eventFindStaminaActionByClass_Parms, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalFunctionLib_eventFindStaminaActionByClass_Parms, ReturnValue), Z_Construct_UClass_UStaminaAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::NewProp_ActionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Iterations" },
		{ "ModuleRelativePath", "Public/Utils/VitalFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalFunctionLib, nullptr, "FindStaminaActionByClass", nullptr, nullptr, Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::VitalFunctionLib_eventFindStaminaActionByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::VitalFunctionLib_eventFindStaminaActionByClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics
	{
		struct VitalFunctionLib_eventGetVitalityComponent_Parms
		{
			AActor* Actor;
			UVitalityComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalFunctionLib_eventGetVitalityComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalFunctionLib_eventGetVitalityComponent_Parms, ReturnValue), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Utils/VitalFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalFunctionLib, nullptr, "GetVitalityComponent", nullptr, nullptr, Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::VitalFunctionLib_eventGetVitalityComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::VitalFunctionLib_eventGetVitalityComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVitalFunctionLib);
	UClass* Z_Construct_UClass_UVitalFunctionLib_NoRegister()
	{
		return UVitalFunctionLib::StaticClass();
	}
	struct Z_Construct_UClass_UVitalFunctionLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVitalFunctionLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalFunctionLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVitalFunctionLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVitalFunctionLib_FindStaminaActionByClass, "FindStaminaActionByClass" }, // 963453215
		{ &Z_Construct_UFunction_UVitalFunctionLib_GetVitalityComponent, "GetVitalityComponent" }, // 3738362554
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalFunctionLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalFunctionLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/VitalFunctionLib.h" },
		{ "ModuleRelativePath", "Public/Utils/VitalFunctionLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVitalFunctionLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVitalFunctionLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVitalFunctionLib_Statics::ClassParams = {
		&UVitalFunctionLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalFunctionLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UVitalFunctionLib_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVitalFunctionLib()
	{
		if (!Z_Registration_Info_UClass_UVitalFunctionLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVitalFunctionLib.OuterSingleton, Z_Construct_UClass_UVitalFunctionLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVitalFunctionLib.OuterSingleton;
	}
	template<> REPLICATEDVITALITYPLUGIN_API UClass* StaticClass<UVitalFunctionLib>()
	{
		return UVitalFunctionLib::StaticClass();
	}
	UVitalFunctionLib::UVitalFunctionLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVitalFunctionLib);
	UVitalFunctionLib::~UVitalFunctionLib() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVitalFunctionLib, UVitalFunctionLib::StaticClass, TEXT("UVitalFunctionLib"), &Z_Registration_Info_UClass_UVitalFunctionLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVitalFunctionLib), 985302738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_343379754(TEXT("/Script/ReplicatedVitalityPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalFunctionLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
