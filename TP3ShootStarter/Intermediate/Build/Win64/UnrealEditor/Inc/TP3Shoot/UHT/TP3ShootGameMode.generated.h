// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TP3ShootGameMode.h"

#ifdef TP3SHOOT_TP3ShootGameMode_generated_h
#error "TP3ShootGameMode.generated.h already included, missing '#pragma once' in TP3ShootGameMode.h"
#endif
#define TP3SHOOT_TP3ShootGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATP3ShootGameMode ********************************************************
TP3SHOOT_API UClass* Z_Construct_UClass_ATP3ShootGameMode_NoRegister();

#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP3ShootGameMode(); \
	friend struct Z_Construct_UClass_ATP3ShootGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TP3SHOOT_API UClass* Z_Construct_UClass_ATP3ShootGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ATP3ShootGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP3Shoot"), Z_Construct_UClass_ATP3ShootGameMode_NoRegister) \
	DECLARE_SERIALIZER(ATP3ShootGameMode)


#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootGameMode_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATP3ShootGameMode(ATP3ShootGameMode&&) = delete; \
	ATP3ShootGameMode(const ATP3ShootGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TP3SHOOT_API, ATP3ShootGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP3ShootGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP3ShootGameMode) \
	TP3SHOOT_API virtual ~ATP3ShootGameMode();


#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootGameMode_h_9_PROLOG
#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATP3ShootGameMode;

// ********** End Class ATP3ShootGameMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
