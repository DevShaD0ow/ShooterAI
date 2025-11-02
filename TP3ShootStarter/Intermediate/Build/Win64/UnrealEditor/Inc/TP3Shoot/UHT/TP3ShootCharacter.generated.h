// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TP3ShootCharacter.h"

#ifdef TP3SHOOT_TP3ShootCharacter_generated_h
#error "TP3ShootCharacter.generated.h already included, missing '#pragma once' in TP3ShootCharacter.h"
#endif
#define TP3SHOOT_TP3ShootCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATP3ShootCharacter *******************************************************
TP3SHOOT_API UClass* Z_Construct_UClass_ATP3ShootCharacter_NoRegister();

#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP3ShootCharacter(); \
	friend struct Z_Construct_UClass_ATP3ShootCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TP3SHOOT_API UClass* Z_Construct_UClass_ATP3ShootCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATP3ShootCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP3Shoot"), Z_Construct_UClass_ATP3ShootCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATP3ShootCharacter)


#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATP3ShootCharacter(ATP3ShootCharacter&&) = delete; \
	ATP3ShootCharacter(const ATP3ShootCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP3ShootCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP3ShootCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP3ShootCharacter) \
	NO_API virtual ~ATP3ShootCharacter();


#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootCharacter_h_9_PROLOG
#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATP3ShootCharacter;

// ********** End Class ATP3ShootCharacter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
