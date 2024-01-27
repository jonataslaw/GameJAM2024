// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicatedVitalityPlugin/Public/Core/StaminaAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaminaAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UStaminaAction();
	REPLICATEDVITALITYPLUGIN_API UClass* Z_Construct_UClass_UStaminaAction_NoRegister();
	REPLICATEDVITALITYPLUGIN_API UEnum* Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ReplicatedVitalityPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics
	{
		struct _Script_ReplicatedVitalityPlugin_eventOnTryStartAction_Parms
		{
			AActor* Causer;
			bool Successful;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static void NewProp_Successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Successful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnTryStartAction_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::NewProp_Successful_SetBit(void* Obj)
	{
		((_Script_ReplicatedVitalityPlugin_eventOnTryStartAction_Parms*)Obj)->Successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ReplicatedVitalityPlugin_eventOnTryStartAction_Parms), &Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::NewProp_Causer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::NewProp_Successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin, nullptr, "OnTryStartAction__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnTryStartAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnTryStartAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTryStartAction_DelegateWrapper(const FMulticastScriptDelegate& OnTryStartAction, AActor* Causer, bool Successful)
{
	struct _Script_ReplicatedVitalityPlugin_eventOnTryStartAction_Parms
	{
		AActor* Causer;
		bool Successful;
	};
	_Script_ReplicatedVitalityPlugin_eventOnTryStartAction_Parms Parms;
	Parms.Causer=Causer;
	Parms.Successful=Successful ? true : false;
	OnTryStartAction.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics
	{
		struct _Script_ReplicatedVitalityPlugin_eventActionUpdate_Parms
		{
			AActor* Causer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventActionUpdate_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::NewProp_Causer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin, nullptr, "ActionUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventActionUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventActionUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FActionUpdate_DelegateWrapper(const FMulticastScriptDelegate& ActionUpdate, AActor* Causer)
{
	struct _Script_ReplicatedVitalityPlugin_eventActionUpdate_Parms
	{
		AActor* Causer;
	};
	_Script_ReplicatedVitalityPlugin_eventActionUpdate_Parms Parms;
	Parms.Causer=Causer;
	ActionUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics
	{
		struct _Script_ReplicatedVitalityPlugin_eventOnEndAction_Parms
		{
			AActor* Causer;
			bool Forced;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static void NewProp_Forced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Forced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplicatedVitalityPlugin_eventOnEndAction_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::NewProp_Forced_SetBit(void* Obj)
	{
		((_Script_ReplicatedVitalityPlugin_eventOnEndAction_Parms*)Obj)->Forced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::NewProp_Forced = { "Forced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ReplicatedVitalityPlugin_eventOnEndAction_Parms), &Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::NewProp_Forced_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::NewProp_Causer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::NewProp_Forced,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin, nullptr, "OnEndAction__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnEndAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::_Script_ReplicatedVitalityPlugin_eventOnEndAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEndAction_DelegateWrapper(const FMulticastScriptDelegate& OnEndAction, AActor* Causer, bool Forced)
{
	struct _Script_ReplicatedVitalityPlugin_eventOnEndAction_Parms
	{
		AActor* Causer;
		bool Forced;
	};
	_Script_ReplicatedVitalityPlugin_eventOnEndAction_Parms Parms;
	Parms.Causer=Causer;
	Parms.Forced=Forced ? true : false;
	OnEndAction.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UStaminaAction::execSetConsumptionFrequency)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConsumptionFrequency(Z_Param_Owner,Z_Param_NewFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaminaAction::execSetCost)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewCost);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCost(Z_Param_Owner,Z_Param_NewCost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaminaAction::execShouldInteruptAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldInteruptAction_Implementation(Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaminaAction::execShouldConsumeStaminaThisFrame)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldConsumeStaminaThisFrame_Implementation(Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaminaAction::execIsAllowedToStartAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAllowedToStartAction_Implementation(Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaminaAction::execOnStopAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_UBOOL(Z_Param_bForced);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopAction_Implementation(Z_Param_Owner,Z_Param_bForced);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaminaAction::execActionUpdate)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActionUpdate_Implementation(Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaminaAction::execOnTryStartAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_UBOOL(Z_Param_bSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTryStartAction_Implementation(Z_Param_Owner,Z_Param_bSuccessful);
		P_NATIVE_END;
	}
	struct StaminaAction_eventActionUpdate_Parms
	{
		AActor* Owner;
	};
	struct StaminaAction_eventIsAllowedToStartAction_Parms
	{
		AActor* Owner;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		StaminaAction_eventIsAllowedToStartAction_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct StaminaAction_eventOnStopAction_Parms
	{
		AActor* Owner;
		bool bForced;
	};
	struct StaminaAction_eventOnTryStartAction_Parms
	{
		AActor* Owner;
		bool bSuccessful;
	};
	struct StaminaAction_eventShouldConsumeStaminaThisFrame_Parms
	{
		AActor* Owner;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		StaminaAction_eventShouldConsumeStaminaThisFrame_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct StaminaAction_eventShouldInteruptAction_Parms
	{
		AActor* Owner;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		StaminaAction_eventShouldInteruptAction_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UStaminaAction_ActionUpdate = FName(TEXT("ActionUpdate"));
	void UStaminaAction::ActionUpdate(AActor* Owner)
	{
		StaminaAction_eventActionUpdate_Parms Parms;
		Parms.Owner=Owner;
		ProcessEvent(FindFunctionChecked(NAME_UStaminaAction_ActionUpdate),&Parms);
	}
	static FName NAME_UStaminaAction_IsAllowedToStartAction = FName(TEXT("IsAllowedToStartAction"));
	bool UStaminaAction::IsAllowedToStartAction(AActor* Owner)
	{
		StaminaAction_eventIsAllowedToStartAction_Parms Parms;
		Parms.Owner=Owner;
		ProcessEvent(FindFunctionChecked(NAME_UStaminaAction_IsAllowedToStartAction),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UStaminaAction_OnStopAction = FName(TEXT("OnStopAction"));
	void UStaminaAction::OnStopAction(AActor* Owner, bool bForced)
	{
		StaminaAction_eventOnStopAction_Parms Parms;
		Parms.Owner=Owner;
		Parms.bForced=bForced ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UStaminaAction_OnStopAction),&Parms);
	}
	static FName NAME_UStaminaAction_OnTryStartAction = FName(TEXT("OnTryStartAction"));
	void UStaminaAction::OnTryStartAction(AActor* Owner, bool bSuccessful)
	{
		StaminaAction_eventOnTryStartAction_Parms Parms;
		Parms.Owner=Owner;
		Parms.bSuccessful=bSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UStaminaAction_OnTryStartAction),&Parms);
	}
	static FName NAME_UStaminaAction_ShouldConsumeStaminaThisFrame = FName(TEXT("ShouldConsumeStaminaThisFrame"));
	bool UStaminaAction::ShouldConsumeStaminaThisFrame(AActor* Owner)
	{
		StaminaAction_eventShouldConsumeStaminaThisFrame_Parms Parms;
		Parms.Owner=Owner;
		ProcessEvent(FindFunctionChecked(NAME_UStaminaAction_ShouldConsumeStaminaThisFrame),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UStaminaAction_ShouldInteruptAction = FName(TEXT("ShouldInteruptAction"));
	bool UStaminaAction::ShouldInteruptAction(AActor* Owner)
	{
		StaminaAction_eventShouldInteruptAction_Parms Parms;
		Parms.Owner=Owner;
		ProcessEvent(FindFunctionChecked(NAME_UStaminaAction_ShouldInteruptAction),&Parms);
		return !!Parms.ReturnValue;
	}
	void UStaminaAction::StaticRegisterNativesUStaminaAction()
	{
		UClass* Class = UStaminaAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActionUpdate", &UStaminaAction::execActionUpdate },
			{ "IsAllowedToStartAction", &UStaminaAction::execIsAllowedToStartAction },
			{ "OnStopAction", &UStaminaAction::execOnStopAction },
			{ "OnTryStartAction", &UStaminaAction::execOnTryStartAction },
			{ "SetConsumptionFrequency", &UStaminaAction::execSetConsumptionFrequency },
			{ "SetCost", &UStaminaAction::execSetCost },
			{ "ShouldConsumeStaminaThisFrame", &UStaminaAction::execShouldConsumeStaminaThisFrame },
			{ "ShouldInteruptAction", &UStaminaAction::execShouldInteruptAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaminaAction_ActionUpdate_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaminaAction_ActionUpdate_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaAction_eventActionUpdate_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaAction_ActionUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_ActionUpdate_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaAction_ActionUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaAction_ActionUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaAction, nullptr, "ActionUpdate", nullptr, nullptr, Z_Construct_UFunction_UStaminaAction_ActionUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_ActionUpdate_Statics::PropPointers), sizeof(StaminaAction_eventActionUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_ActionUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaAction_ActionUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_ActionUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(StaminaAction_eventActionUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaminaAction_ActionUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaAction_ActionUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaAction_eventIsAllowedToStartAction_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaminaAction_eventIsAllowedToStartAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaminaAction_eventIsAllowedToStartAction_Parms), &Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaAction, nullptr, "IsAllowedToStartAction", nullptr, nullptr, Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::PropPointers), sizeof(StaminaAction_eventIsAllowedToStartAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(StaminaAction_eventIsAllowedToStartAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static void NewProp_bForced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaAction_eventOnStopAction_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::NewProp_bForced_SetBit(void* Obj)
	{
		((StaminaAction_eventOnStopAction_Parms*)Obj)->bForced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::NewProp_bForced = { "bForced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaminaAction_eventOnStopAction_Parms), &Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::NewProp_bForced_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::NewProp_bForced,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaAction, nullptr, "OnStopAction", nullptr, nullptr, Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::PropPointers), sizeof(StaminaAction_eventOnStopAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(StaminaAction_eventOnStopAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaminaAction_OnStopAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaAction_OnStopAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static void NewProp_bSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaAction_eventOnTryStartAction_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::NewProp_bSuccessful_SetBit(void* Obj)
	{
		((StaminaAction_eventOnTryStartAction_Parms*)Obj)->bSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaminaAction_eventOnTryStartAction_Parms), &Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::NewProp_bSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaAction, nullptr, "OnTryStartAction", nullptr, nullptr, Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::PropPointers), sizeof(StaminaAction_eventOnTryStartAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(StaminaAction_eventOnTryStartAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaminaAction_OnTryStartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaAction_OnTryStartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics
	{
		struct StaminaAction_eventSetConsumptionFrequency_Parms
		{
			const AActor* Owner;
			float NewFrequency;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaAction_eventSetConsumptionFrequency_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::NewProp_Owner_MetaData), Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::NewProp_Owner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::NewProp_NewFrequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::NewProp_NewFrequency = { "NewFrequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaAction_eventSetConsumptionFrequency_Parms, NewFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::NewProp_NewFrequency_MetaData), Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::NewProp_NewFrequency_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::NewProp_NewFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaAction, nullptr, "SetConsumptionFrequency", nullptr, nullptr, Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::StaminaAction_eventSetConsumptionFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::StaminaAction_eventSetConsumptionFrequency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaminaAction_SetCost_Statics
	{
		struct StaminaAction_eventSetCost_Parms
		{
			const AActor* Owner;
			float NewCost;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewCost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaAction_SetCost_Statics::NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaminaAction_SetCost_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaAction_eventSetCost_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_SetCost_Statics::NewProp_Owner_MetaData), Z_Construct_UFunction_UStaminaAction_SetCost_Statics::NewProp_Owner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaAction_SetCost_Statics::NewProp_NewCost_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaAction_SetCost_Statics::NewProp_NewCost = { "NewCost", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaAction_eventSetCost_Parms, NewCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_SetCost_Statics::NewProp_NewCost_MetaData), Z_Construct_UFunction_UStaminaAction_SetCost_Statics::NewProp_NewCost_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaAction_SetCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_SetCost_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_SetCost_Statics::NewProp_NewCost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaAction_SetCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaAction_SetCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaAction, nullptr, "SetCost", nullptr, nullptr, Z_Construct_UFunction_UStaminaAction_SetCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_SetCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaminaAction_SetCost_Statics::StaminaAction_eventSetCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_SetCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaAction_SetCost_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_SetCost_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStaminaAction_SetCost_Statics::StaminaAction_eventSetCost_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaminaAction_SetCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaAction_SetCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaAction_eventShouldConsumeStaminaThisFrame_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaminaAction_eventShouldConsumeStaminaThisFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaminaAction_eventShouldConsumeStaminaThisFrame_Parms), &Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaAction, nullptr, "ShouldConsumeStaminaThisFrame", nullptr, nullptr, Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::PropPointers), sizeof(StaminaAction_eventShouldConsumeStaminaThisFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::PropPointers) < 2048);
	static_assert(sizeof(StaminaAction_eventShouldConsumeStaminaThisFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaAction_eventShouldInteruptAction_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaminaAction_eventShouldInteruptAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaminaAction_eventShouldInteruptAction_Parms), &Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaAction, nullptr, "ShouldInteruptAction", nullptr, nullptr, Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::PropPointers), sizeof(StaminaAction_eventShouldInteruptAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(StaminaAction_eventShouldInteruptAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaminaAction);
	UClass* Z_Construct_UClass_UStaminaAction_NoRegister()
	{
		return UStaminaAction::StaticClass();
	}
	struct Z_Construct_UClass_UStaminaAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsumptionFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConsumptionFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaminaAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicatedVitalityPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaminaAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaminaAction_ActionUpdate, "ActionUpdate" }, // 194009704
		{ &Z_Construct_UFunction_UStaminaAction_IsAllowedToStartAction, "IsAllowedToStartAction" }, // 3751779039
		{ &Z_Construct_UFunction_UStaminaAction_OnStopAction, "OnStopAction" }, // 427351267
		{ &Z_Construct_UFunction_UStaminaAction_OnTryStartAction, "OnTryStartAction" }, // 1967268952
		{ &Z_Construct_UFunction_UStaminaAction_SetConsumptionFrequency, "SetConsumptionFrequency" }, // 430244162
		{ &Z_Construct_UFunction_UStaminaAction_SetCost, "SetCost" }, // 3599118503
		{ &Z_Construct_UFunction_UStaminaAction_ShouldConsumeStaminaThisFrame, "ShouldConsumeStaminaThisFrame" }, // 952382959
		{ &Z_Construct_UFunction_UStaminaAction_ShouldInteruptAction, "ShouldInteruptAction" }, // 1464100442
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/StaminaAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStaminaAction_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaAction_Statics::NewProp_ActionType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStaminaAction_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaAction, ActionType), Z_Construct_UEnum_ReplicatedVitalityPlugin_EStaminaActionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaAction_Statics::NewProp_ActionType_MetaData), Z_Construct_UClass_UStaminaAction_Statics::NewProp_ActionType_MetaData) }; // 2338506654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaAction_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaAction_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaAction, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaAction_Statics::NewProp_Cost_MetaData), Z_Construct_UClass_UStaminaAction_Statics::NewProp_Cost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaAction_Statics::NewProp_ConsumptionFrequency_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/StaminaAction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaAction_Statics::NewProp_ConsumptionFrequency = { "ConsumptionFrequency", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaAction, ConsumptionFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaAction_Statics::NewProp_ConsumptionFrequency_MetaData), Z_Construct_UClass_UStaminaAction_Statics::NewProp_ConsumptionFrequency_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaminaAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaAction_Statics::NewProp_ActionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaAction_Statics::NewProp_ActionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaAction_Statics::NewProp_Cost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaAction_Statics::NewProp_ConsumptionFrequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaminaAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaminaAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaminaAction_Statics::ClassParams = {
		&UStaminaAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStaminaAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaminaAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStaminaAction()
	{
		if (!Z_Registration_Info_UClass_UStaminaAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaminaAction.OuterSingleton, Z_Construct_UClass_UStaminaAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaminaAction.OuterSingleton;
	}
	template<> REPLICATEDVITALITYPLUGIN_API UClass* StaticClass<UStaminaAction>()
	{
		return UStaminaAction::StaticClass();
	}
	UStaminaAction::UStaminaAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaminaAction);
	UStaminaAction::~UStaminaAction() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaminaAction, UStaminaAction::StaticClass, TEXT("UStaminaAction"), &Z_Registration_Info_UClass_UStaminaAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaminaAction), 2163738972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_2499239535(TEXT("/Script/ReplicatedVitalityPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReplicatedVitalityPlugin_Source_ReplicatedVitalityPlugin_Public_Core_StaminaAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
