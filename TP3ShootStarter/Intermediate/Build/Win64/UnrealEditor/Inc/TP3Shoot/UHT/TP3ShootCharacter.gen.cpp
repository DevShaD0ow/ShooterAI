// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP3Shoot/TP3ShootCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTP3ShootCharacter() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
TP3SHOOT_API UClass* Z_Construct_UClass_ATP3ShootCharacter();
TP3SHOOT_API UClass* Z_Construct_UClass_ATP3ShootCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP3Shoot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATP3ShootCharacter *******************************************************
void ATP3ShootCharacter::StaticRegisterNativesATP3ShootCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATP3ShootCharacter;
UClass* ATP3ShootCharacter::GetPrivateStaticClass()
{
	using TClass = ATP3ShootCharacter;
	if (!Z_Registration_Info_UClass_ATP3ShootCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TP3ShootCharacter"),
			Z_Registration_Info_UClass_ATP3ShootCharacter.InnerSingleton,
			StaticRegisterNativesATP3ShootCharacter,
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
	return Z_Registration_Info_UClass_ATP3ShootCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ATP3ShootCharacter_NoRegister()
{
	return ATP3ShootCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATP3ShootCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP3ShootCharacter.h" },
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
#endif
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// D\xc3\xa9g\xc3\xa2ts inflig\xc3\xa9s par un tir\n" },
#endif
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "D\xc3\xa9g\xc3\xa2ts inflig\xc3\xa9s par un tir" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance maximale du tir\n" },
#endif
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance maximale du tir" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Temps entre deux tirs (fire rate)\n" },
#endif
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temps entre deux tirs (fire rate)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Son du tir\n" },
#endif
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Son du tir" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Effet de flash du canon\n" },
#endif
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effet de flash du canon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Life_MetaData[] = {
		{ "Category", "Life" },
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StimuliSource_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SK_Gun_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add a gun skeletal mesh component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a gun skeletal mesh component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleStart_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Particle Start\n" },
#endif
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle Start" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleImpact_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Particle Impact\n" },
#endif
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle Impact" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fire animation\n" },
#endif
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAiming_MetaData[] = {
		{ "Category", "Aiming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is Aiming\n" },
#endif
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is Aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFiring_MetaData[] = {
		{ "Category", "Firing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is Firing\n" },
#endif
		{ "ModuleRelativePath", "TP3ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is Firing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Life;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StimuliSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SK_Gun;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleImpact;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
	static void NewProp_IsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAiming;
	static void NewProp_IsFiring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFiring;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP3ShootCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, TurnRateGamepad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnRateGamepad_MetaData), NewProp_TurnRateGamepad_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_WeaponRange = { "WeaponRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, WeaponRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponRange_MetaData), NewProp_WeaponRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleFlash_MetaData), NewProp_MuzzleFlash_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_Life = { "Life", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, Life), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Life_MetaData), NewProp_Life_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_StimuliSource = { "StimuliSource", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, StimuliSource), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StimuliSource_MetaData), NewProp_StimuliSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_SK_Gun = { "SK_Gun", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, SK_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SK_Gun_MetaData), NewProp_SK_Gun_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_ParticleStart = { "ParticleStart", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, ParticleStart), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleStart_MetaData), NewProp_ParticleStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_ParticleImpact = { "ParticleImpact", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, ParticleImpact), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleImpact_MetaData), NewProp_ParticleImpact_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP3ShootCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAnimation_MetaData), NewProp_FireAnimation_MetaData) };
void Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_IsAiming_SetBit(void* Obj)
{
	((ATP3ShootCharacter*)Obj)->IsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_IsAiming = { "IsAiming", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATP3ShootCharacter), &Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_IsAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAiming_MetaData), NewProp_IsAiming_MetaData) };
void Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_IsFiring_SetBit(void* Obj)
{
	((ATP3ShootCharacter*)Obj)->IsFiring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_IsFiring = { "IsFiring", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATP3ShootCharacter), &Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_IsFiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFiring_MetaData), NewProp_IsFiring_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP3ShootCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_TurnRateGamepad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_WeaponRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_MuzzleFlash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_Life,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_StimuliSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_SK_Gun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_ParticleStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_ParticleImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_FireAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_IsAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP3ShootCharacter_Statics::NewProp_IsFiring,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP3ShootCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATP3ShootCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TP3Shoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP3ShootCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP3ShootCharacter_Statics::ClassParams = {
	&ATP3ShootCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATP3ShootCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATP3ShootCharacter_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP3ShootCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP3ShootCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATP3ShootCharacter()
{
	if (!Z_Registration_Info_UClass_ATP3ShootCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP3ShootCharacter.OuterSingleton, Z_Construct_UClass_ATP3ShootCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATP3ShootCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATP3ShootCharacter);
ATP3ShootCharacter::~ATP3ShootCharacter() {}
// ********** End Class ATP3ShootCharacter *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootCharacter_h__Script_TP3Shoot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATP3ShootCharacter, ATP3ShootCharacter::StaticClass, TEXT("ATP3ShootCharacter"), &Z_Registration_Info_UClass_ATP3ShootCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP3ShootCharacter), 3795174755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootCharacter_h__Script_TP3Shoot_51398373(TEXT("/Script/TP3Shoot"),
	Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootCharacter_h__Script_TP3Shoot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootCharacter_h__Script_TP3Shoot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
