// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterAntGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterAntGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SHOOTERANT_API UClass* Z_Construct_UClass_AShooterAntGameMode();
SHOOTERANT_API UClass* Z_Construct_UClass_AShooterAntGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterAnt();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShooterAntGameMode ******************************************************
void AShooterAntGameMode::StaticRegisterNativesAShooterAntGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterAntGameMode;
UClass* AShooterAntGameMode::GetPrivateStaticClass()
{
	using TClass = AShooterAntGameMode;
	if (!Z_Registration_Info_UClass_AShooterAntGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterAntGameMode"),
			Z_Registration_Info_UClass_AShooterAntGameMode.InnerSingleton,
			StaticRegisterNativesAShooterAntGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AShooterAntGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterAntGameMode_NoRegister()
{
	return AShooterAntGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterAntGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShooterAntGameMode.h" },
		{ "ModuleRelativePath", "ShooterAntGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterAntGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AShooterAntGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterAnt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAntGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterAntGameMode_Statics::ClassParams = {
	&AShooterAntGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAntGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterAntGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterAntGameMode()
{
	if (!Z_Registration_Info_UClass_AShooterAntGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterAntGameMode.OuterSingleton, Z_Construct_UClass_AShooterAntGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterAntGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterAntGameMode);
AShooterAntGameMode::~AShooterAntGameMode() {}
// ********** End Class AShooterAntGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntGameMode_h__Script_ShooterAnt_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterAntGameMode, AShooterAntGameMode::StaticClass, TEXT("AShooterAntGameMode"), &Z_Registration_Info_UClass_AShooterAntGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterAntGameMode), 261373402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntGameMode_h__Script_ShooterAnt_3547368749(TEXT("/Script/ShooterAnt"),
	Z_CompiledInDeferFile_FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntGameMode_h__Script_ShooterAnt_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntGameMode_h__Script_ShooterAnt_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
