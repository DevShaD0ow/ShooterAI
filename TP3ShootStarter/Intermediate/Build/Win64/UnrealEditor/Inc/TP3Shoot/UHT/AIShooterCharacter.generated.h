// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIShooterCharacter.h"

#ifdef TP3SHOOT_AIShooterCharacter_generated_h
#error "AIShooterCharacter.generated.h already included, missing '#pragma once' in AIShooterCharacter.h"
#endif
#define TP3SHOOT_AIShooterCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAIShooterCharacter ******************************************************
TP3SHOOT_API UClass* Z_Construct_UClass_AAIShooterCharacter_NoRegister();

#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIShooterCharacter_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIShooterCharacter(); \
	friend struct Z_Construct_UClass_AAIShooterCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TP3SHOOT_API UClass* Z_Construct_UClass_AAIShooterCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AAIShooterCharacter, ATP3ShootCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP3Shoot"), Z_Construct_UClass_AAIShooterCharacter_NoRegister) \
	DECLARE_SERIALIZER(AAIShooterCharacter)


#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIShooterCharacter_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAIShooterCharacter(AAIShooterCharacter&&) = delete; \
	AAIShooterCharacter(const AAIShooterCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIShooterCharacter) \
	NO_API virtual ~AAIShooterCharacter();


#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIShooterCharacter_h_8_PROLOG
#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIShooterCharacter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIShooterCharacter_h_11_INCLASS_NO_PURE_DECLS \
	FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIShooterCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAIShooterCharacter;

// ********** End Class AAIShooterCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIShooterCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
