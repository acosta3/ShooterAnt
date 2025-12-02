// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterAntPlayerController.h"

#ifdef SHOOTERANT_ShooterAntPlayerController_generated_h
#error "ShooterAntPlayerController.generated.h already included, missing '#pragma once' in ShooterAntPlayerController.h"
#endif
#define SHOOTERANT_ShooterAntPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AShooterAntPlayerController **********************************************
SHOOTERANT_API UClass* Z_Construct_UClass_AShooterAntPlayerController_NoRegister();

#define FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterAntPlayerController(); \
	friend struct Z_Construct_UClass_AShooterAntPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTERANT_API UClass* Z_Construct_UClass_AShooterAntPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AShooterAntPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterAnt"), Z_Construct_UClass_AShooterAntPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AShooterAntPlayerController)


#define FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterAntPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShooterAntPlayerController(AShooterAntPlayerController&&) = delete; \
	AShooterAntPlayerController(const AShooterAntPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterAntPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterAntPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterAntPlayerController) \
	NO_API virtual ~AShooterAntPlayerController();


#define FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntPlayerController_h_17_PROLOG
#define FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShooterAntPlayerController;

// ********** End Class AShooterAntPlayerController ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
