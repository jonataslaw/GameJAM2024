// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedVitalityPlugin_init() {}
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature();
	REPLICATEDVITALITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ReplicatedVitalityPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ReplicatedVitalityPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ReplicatedVitalityPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_ActionUpdate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnActionActivated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnDeathStateUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnEndAction__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnHealthUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnReceiveDamage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnRunOutOfStamina__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnShieldUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnStaminaUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicatedVitalityPlugin_OnTryStartAction__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ReplicatedVitalityPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x09D7FBD2,
				0x7C2D4098,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ReplicatedVitalityPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ReplicatedVitalityPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ReplicatedVitalityPlugin(Z_Construct_UPackage__Script_ReplicatedVitalityPlugin, TEXT("/Script/ReplicatedVitalityPlugin"), Z_Registration_Info_UPackage__Script_ReplicatedVitalityPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x09D7FBD2, 0x7C2D4098));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
