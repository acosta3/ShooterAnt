// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAnt_init() {}
	SHOOTERANT_API UFunction* Z_Construct_UDelegateFunction_ShooterAnt_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShooterAnt;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShooterAnt()
	{
		if (!Z_Registration_Info_UPackage__Script_ShooterAnt.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ShooterAnt_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShooterAnt",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x96928CB3,
				0xA21F1419,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShooterAnt.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShooterAnt.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShooterAnt(Z_Construct_UPackage__Script_ShooterAnt, TEXT("/Script/ShooterAnt"), Z_Registration_Info_UPackage__Script_ShooterAnt, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x96928CB3, 0xA21F1419));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
