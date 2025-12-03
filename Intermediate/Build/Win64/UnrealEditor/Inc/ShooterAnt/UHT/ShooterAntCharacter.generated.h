// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterAntCharacter.h"

#ifdef SHOOTERANT_ShooterAntCharacter_generated_h
#error "ShooterAntCharacter.generated.h already included, missing '#pragma once' in ShooterAntCharacter.h"
#endif
#define SHOOTERANT_ShooterAntCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AShooterAntCharacter *****************************************************
#define FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


SHOOTERANT_API UClass* Z_Construct_UClass_AShooterAntCharacter_NoRegister();

#define FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterAntCharacter(); \
	friend struct Z_Construct_UClass_AShooterAntCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTERANT_API UClass* Z_Construct_UClass_AShooterAntCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AShooterAntCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterAnt"), Z_Construct_UClass_AShooterAntCharacter_NoRegister) \
	DECLARE_SERIALIZER(AShooterAntCharacter)


#define FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntCharacter_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShooterAntCharacter(AShooterAntCharacter&&) = delete; \
	AShooterAntCharacter(const AShooterAntCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterAntCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterAntCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AShooterAntCharacter) \
	NO_API virtual ~AShooterAntCharacter();


#define FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntCharacter_h_22_PROLOG
#define FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShooterAntCharacter;

// ********** End Class AShooterAntCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_antho_Desktop_Unreal_Engine_Projects_ShooterAnt_Source_ShooterAnt_ShooterAntCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
