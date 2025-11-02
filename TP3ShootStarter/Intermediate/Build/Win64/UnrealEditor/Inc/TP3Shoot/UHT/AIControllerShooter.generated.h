// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIControllerShooter.h"

#ifdef TP3SHOOT_AIControllerShooter_generated_h
#error "AIControllerShooter.generated.h already included, missing '#pragma once' in AIControllerShooter.h"
#endif
#define TP3SHOOT_AIControllerShooter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FAIStimulus;

// ********** Begin Class AAIControllerShooter *****************************************************
#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated);


TP3SHOOT_API UClass* Z_Construct_UClass_AAIControllerShooter_NoRegister();

#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIControllerShooter(); \
	friend struct Z_Construct_UClass_AAIControllerShooter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TP3SHOOT_API UClass* Z_Construct_UClass_AAIControllerShooter_NoRegister(); \
public: \
	DECLARE_CLASS2(AAIControllerShooter, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP3Shoot"), Z_Construct_UClass_AAIControllerShooter_NoRegister) \
	DECLARE_SERIALIZER(AAIControllerShooter)


#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAIControllerShooter(AAIControllerShooter&&) = delete; \
	AAIControllerShooter(const AAIControllerShooter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIControllerShooter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIControllerShooter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIControllerShooter) \
	NO_API virtual ~AAIControllerShooter();


#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h_13_PROLOG
#define FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h_16_INCLASS_NO_PURE_DECLS \
	FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAIControllerShooter;

// ********** End Class AAIControllerShooter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
