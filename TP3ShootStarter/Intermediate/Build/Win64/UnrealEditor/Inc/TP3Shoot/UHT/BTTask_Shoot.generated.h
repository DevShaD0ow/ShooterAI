// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BTTask_Shoot.h"

#ifdef TP3SHOOT_BTTask_Shoot_generated_h
#error "BTTask_Shoot.generated.h already included, missing '#pragma once' in BTTask_Shoot.h"
#endif
#define TP3SHOOT_BTTask_Shoot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_Shoot ************************************************************
TP3SHOOT_API UClass* Z_Construct_UClass_UBTTask_Shoot_NoRegister();

#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_BTTask_Shoot_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_Shoot(); \
	friend struct Z_Construct_UClass_UBTTask_Shoot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TP3SHOOT_API UClass* Z_Construct_UClass_UBTTask_Shoot_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_Shoot, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TP3Shoot"), Z_Construct_UClass_UBTTask_Shoot_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_Shoot)


#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_BTTask_Shoot_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_Shoot(UBTTask_Shoot&&) = delete; \
	UBTTask_Shoot(const UBTTask_Shoot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_Shoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_Shoot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTTask_Shoot) \
	NO_API virtual ~UBTTask_Shoot();


#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_BTTask_Shoot_h_7_PROLOG
#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_BTTask_Shoot_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_BTTask_Shoot_h_10_INCLASS_NO_PURE_DECLS \
	FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_BTTask_Shoot_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_Shoot;

// ********** End Class UBTTask_Shoot **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_BTTask_Shoot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
