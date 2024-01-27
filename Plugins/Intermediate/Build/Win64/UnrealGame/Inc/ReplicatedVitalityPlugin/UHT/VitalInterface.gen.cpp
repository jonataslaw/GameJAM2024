// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicatedVitalityPlugin/Public/Utils/VitalInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVitalInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UVitalInterface();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UVitalInterface_NoRegister();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UVitalityComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReplicatedVitalityPlugin();
// End Cross Module References
	DEFINE_FUNCTION(IVitalInterface::execIsAbleToRegenerateStamina)
	{
		P_GET_OBJECT(UVitalityComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAbleToRegenerateStamina_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVitalInterface::execIsAbleToRegenerateShield)
	{
		P_GET_OBJECT(UVitalityComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAbleToRegenerateShield_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVitalInterface::execIsAbleToReceiveShieldDamage)
	{
		P_GET_OBJECT(UVitalityComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAbleToReceiveShieldDamage_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVitalInterface::execIsAbleToRegenerateHealth)
	{
		P_GET_OBJECT(UVitalityComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAbleToRegenerateHealth_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVitalInterface::execIsAbleToReceiveFallDamage)
	{
		P_GET_OBJECT(UVitalityComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAbleToReceiveFallDamage_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVitalInterface::execIsAbleToReceiveHealthDamage)
	{
		P_GET_OBJECT(UVitalityComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAbleToReceiveHealthDamage_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	struct VitalInterface_eventIsAbleToReceiveFallDamage_Parms
	{
		UVitalityComponent* Component;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VitalInterface_eventIsAbleToReceiveFallDamage_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct VitalInterface_eventIsAbleToReceiveHealthDamage_Parms
	{
		UVitalityComponent* Component;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VitalInterface_eventIsAbleToReceiveHealthDamage_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct VitalInterface_eventIsAbleToReceiveShieldDamage_Parms
	{
		UVitalityComponent* Component;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VitalInterface_eventIsAbleToReceiveShieldDamage_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct VitalInterface_eventIsAbleToRegenerateHealth_Parms
	{
		UVitalityComponent* Component;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VitalInterface_eventIsAbleToRegenerateHealth_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct VitalInterface_eventIsAbleToRegenerateShield_Parms
	{
		UVitalityComponent* Component;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VitalInterface_eventIsAbleToRegenerateShield_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct VitalInterface_eventIsAbleToRegenerateStamina_Parms
	{
		UVitalityComponent* Component;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VitalInterface_eventIsAbleToRegenerateStamina_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IVitalInterface::IsAbleToReceiveFallDamage(UVitalityComponent* Component) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsAbleToReceiveFallDamage instead.");
		VitalInterface_eventIsAbleToReceiveFallDamage_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVitalInterface::IsAbleToReceiveHealthDamage(UVitalityComponent* Component) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsAbleToReceiveHealthDamage instead.");
		VitalInterface_eventIsAbleToReceiveHealthDamage_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVitalInterface::IsAbleToReceiveShieldDamage(UVitalityComponent* Component) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsAbleToReceiveShieldDamage instead.");
		VitalInterface_eventIsAbleToReceiveShieldDamage_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVitalInterface::IsAbleToRegenerateHealth(UVitalityComponent* Component) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsAbleToRegenerateHealth instead.");
		VitalInterface_eventIsAbleToRegenerateHealth_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVitalInterface::IsAbleToRegenerateShield(UVitalityComponent* Component) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsAbleToRegenerateShield instead.");
		VitalInterface_eventIsAbleToRegenerateShield_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVitalInterface::IsAbleToRegenerateStamina(UVitalityComponent* Component) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsAbleToRegenerateStamina instead.");
		VitalInterface_eventIsAbleToRegenerateStamina_Parms Parms;
		return Parms.ReturnValue;
	}
	void UVitalInterface::StaticRegisterNativesUVitalInterface()
	{
		UClass* Class = UVitalInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAbleToReceiveFallDamage", &IVitalInterface::execIsAbleToReceiveFallDamage },
			{ "IsAbleToReceiveHealthDamage", &IVitalInterface::execIsAbleToReceiveHealthDamage },
			{ "IsAbleToReceiveShieldDamage", &IVitalInterface::execIsAbleToReceiveShieldDamage },
			{ "IsAbleToRegenerateHealth", &IVitalInterface::execIsAbleToRegenerateHealth },
			{ "IsAbleToRegenerateShield", &IVitalInterface::execIsAbleToRegenerateShield },
			{ "IsAbleToRegenerateStamina", &IVitalInterface::execIsAbleToRegenerateStamina },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalInterface_eventIsAbleToReceiveFallDamage_Parms, Component), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::NewProp_Component_MetaData) };
	void Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VitalInterface_eventIsAbleToReceiveFallDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitalInterface_eventIsAbleToReceiveFallDamage_Parms), &Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vitality|Health" },
		{ "ModuleRelativePath", "Public/Utils/VitalInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalInterface, nullptr, "IsAbleToReceiveFallDamage", nullptr, nullptr, Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::PropPointers), sizeof(VitalInterface_eventIsAbleToReceiveFallDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(VitalInterface_eventIsAbleToReceiveFallDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalInterface_eventIsAbleToReceiveHealthDamage_Parms, Component), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::NewProp_Component_MetaData) };
	void Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VitalInterface_eventIsAbleToReceiveHealthDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitalInterface_eventIsAbleToReceiveHealthDamage_Parms), &Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vitality|Health" },
		{ "ModuleRelativePath", "Public/Utils/VitalInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalInterface, nullptr, "IsAbleToReceiveHealthDamage", nullptr, nullptr, Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::PropPointers), sizeof(VitalInterface_eventIsAbleToReceiveHealthDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(VitalInterface_eventIsAbleToReceiveHealthDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalInterface_eventIsAbleToReceiveShieldDamage_Parms, Component), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::NewProp_Component_MetaData) };
	void Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VitalInterface_eventIsAbleToReceiveShieldDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitalInterface_eventIsAbleToReceiveShieldDamage_Parms), &Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vitality|Shield" },
		{ "ModuleRelativePath", "Public/Utils/VitalInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalInterface, nullptr, "IsAbleToReceiveShieldDamage", nullptr, nullptr, Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::PropPointers), sizeof(VitalInterface_eventIsAbleToReceiveShieldDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(VitalInterface_eventIsAbleToReceiveShieldDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalInterface_eventIsAbleToRegenerateHealth_Parms, Component), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::NewProp_Component_MetaData) };
	void Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VitalInterface_eventIsAbleToRegenerateHealth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitalInterface_eventIsAbleToRegenerateHealth_Parms), &Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vitality|Health" },
		{ "ModuleRelativePath", "Public/Utils/VitalInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalInterface, nullptr, "IsAbleToRegenerateHealth", nullptr, nullptr, Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::PropPointers), sizeof(VitalInterface_eventIsAbleToRegenerateHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(VitalInterface_eventIsAbleToRegenerateHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalInterface_eventIsAbleToRegenerateShield_Parms, Component), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::NewProp_Component_MetaData) };
	void Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VitalInterface_eventIsAbleToRegenerateShield_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitalInterface_eventIsAbleToRegenerateShield_Parms), &Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vitality|Shield" },
		{ "ModuleRelativePath", "Public/Utils/VitalInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalInterface, nullptr, "IsAbleToRegenerateShield", nullptr, nullptr, Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::PropPointers), sizeof(VitalInterface_eventIsAbleToRegenerateShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::PropPointers) < 2048);
	static_assert(sizeof(VitalInterface_eventIsAbleToRegenerateShield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitalInterface_eventIsAbleToRegenerateStamina_Parms, Component), Z_Construct_UClass_UVitalityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::NewProp_Component_MetaData) };
	void Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VitalInterface_eventIsAbleToRegenerateStamina_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitalInterface_eventIsAbleToRegenerateStamina_Parms), &Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vitality|Stamina" },
		{ "ModuleRelativePath", "Public/Utils/VitalInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalInterface, nullptr, "IsAbleToRegenerateStamina", nullptr, nullptr, Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::PropPointers), sizeof(VitalInterface_eventIsAbleToRegenerateStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(VitalInterface_eventIsAbleToRegenerateStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVitalInterface);
	UClass* Z_Construct_UClass_UVitalInterface_NoRegister()
	{
		return UVitalInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVitalInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVitalInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVitalInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveFallDamage, "IsAbleToReceiveFallDamage" }, // 2274287792
		{ &Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveHealthDamage, "IsAbleToReceiveHealthDamage" }, // 2785592958
		{ &Z_Construct_UFunction_UVitalInterface_IsAbleToReceiveShieldDamage, "IsAbleToReceiveShieldDamage" }, // 2074091724
		{ &Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateHealth, "IsAbleToRegenerateHealth" }, // 483807351
		{ &Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateShield, "IsAbleToRegenerateShield" }, // 2657097667
		{ &Z_Construct_UFunction_UVitalInterface_IsAbleToRegenerateStamina, "IsAbleToRegenerateStamina" }, // 3479262212
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Utils/VitalInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVitalInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVitalInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVitalInterface_Statics::ClassParams = {
		&UVitalInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UVitalInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVitalInterface()
	{
		if (!Z_Registration_Info_UClass_UVitalInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVitalInterface.OuterSingleton, Z_Construct_UClass_UVitalInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVitalInterface.OuterSingleton;
	}
	template<> REPLICATEDVITALITYPLUGIN_API UClass* StaticClass<UVitalInterface>()
	{
		return UVitalInterface::StaticClass();
	}
	UVitalInterface::UVitalInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVitalInterface);
	UVitalInterface::~UVitalInterface() {}
	static FName NAME_UVitalInterface_IsAbleToReceiveFallDamage = FName(TEXT("IsAbleToReceiveFallDamage"));
	bool IVitalInterface::Execute_IsAbleToReceiveFallDamage(const UObject* O, UVitalityComponent* Component)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVitalInterface::StaticClass()));
		VitalInterface_eventIsAbleToReceiveFallDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVitalInterface_IsAbleToReceiveFallDamage);
		if (Func)
		{
			Parms.Component=Component;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVitalInterface*)(O->GetNativeInterfaceAddress(UVitalInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsAbleToReceiveFallDamage_Implementation(Component);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVitalInterface_IsAbleToReceiveHealthDamage = FName(TEXT("IsAbleToReceiveHealthDamage"));
	bool IVitalInterface::Execute_IsAbleToReceiveHealthDamage(const UObject* O, UVitalityComponent* Component)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVitalInterface::StaticClass()));
		VitalInterface_eventIsAbleToReceiveHealthDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVitalInterface_IsAbleToReceiveHealthDamage);
		if (Func)
		{
			Parms.Component=Component;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVitalInterface*)(O->GetNativeInterfaceAddress(UVitalInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsAbleToReceiveHealthDamage_Implementation(Component);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVitalInterface_IsAbleToReceiveShieldDamage = FName(TEXT("IsAbleToReceiveShieldDamage"));
	bool IVitalInterface::Execute_IsAbleToReceiveShieldDamage(const UObject* O, UVitalityComponent* Component)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVitalInterface::StaticClass()));
		VitalInterface_eventIsAbleToReceiveShieldDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVitalInterface_IsAbleToReceiveShieldDamage);
		if (Func)
		{
			Parms.Component=Component;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVitalInterface*)(O->GetNativeInterfaceAddress(UVitalInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsAbleToReceiveShieldDamage_Implementation(Component);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVitalInterface_IsAbleToRegenerateHealth = FName(TEXT("IsAbleToRegenerateHealth"));
	bool IVitalInterface::Execute_IsAbleToRegenerateHealth(const UObject* O, UVitalityComponent* Component)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVitalInterface::StaticClass()));
		VitalInterface_eventIsAbleToRegenerateHealth_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVitalInterface_IsAbleToRegenerateHealth);
		if (Func)
		{
			Parms.Component=Component;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVitalInterface*)(O->GetNativeInterfaceAddress(UVitalInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsAbleToRegenerateHealth_Implementation(Component);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVitalInterface_IsAbleToRegenerateShield = FName(TEXT("IsAbleToRegenerateShield"));
	bool IVitalInterface::Execute_IsAbleToRegenerateShield(const UObject* O, UVitalityComponent* Component)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVitalInterface::StaticClass()));
		VitalInterface_eventIsAbleToRegenerateShield_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVitalInterface_IsAbleToRegenerateShield);
		if (Func)
		{
			Parms.Component=Component;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVitalInterface*)(O->GetNativeInterfaceAddress(UVitalInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsAbleToRegenerateShield_Implementation(Component);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVitalInterface_IsAbleToRegenerateStamina = FName(TEXT("IsAbleToRegenerateStamina"));
	bool IVitalInterface::Execute_IsAbleToRegenerateStamina(const UObject* O, UVitalityComponent* Component)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVitalInterface::StaticClass()));
		VitalInterface_eventIsAbleToRegenerateStamina_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVitalInterface_IsAbleToRegenerateStamina);
		if (Func)
		{
			Parms.Component=Component;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVitalInterface*)(O->GetNativeInterfaceAddress(UVitalInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsAbleToRegenerateStamina_Implementation(Component);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVitalInterface, UVitalInterface::StaticClass, TEXT("UVitalInterface"), &Z_Registration_Info_UClass_UVitalInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVitalInterface), 2428763759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_2390460579(TEXT("/Script/ReplicatedVitalityPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Utils_VitalInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
