// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP3Shoot/TP3ShootGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTP3ShootGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TP3SHOOT_API UClass* Z_Construct_UClass_ATP3ShootGameMode();
TP3SHOOT_API UClass* Z_Construct_UClass_ATP3ShootGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP3Shoot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATP3ShootGameMode ********************************************************
void ATP3ShootGameMode::StaticRegisterNativesATP3ShootGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATP3ShootGameMode;
UClass* ATP3ShootGameMode::GetPrivateStaticClass()
{
	using TClass = ATP3ShootGameMode;
	if (!Z_Registration_Info_UClass_ATP3ShootGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TP3ShootGameMode"),
			Z_Registration_Info_UClass_ATP3ShootGameMode.InnerSingleton,
			StaticRegisterNativesATP3ShootGameMode,
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
	return Z_Registration_Info_UClass_ATP3ShootGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATP3ShootGameMode_NoRegister()
{
	return ATP3ShootGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATP3ShootGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TP3ShootGameMode.h" },
		{ "ModuleRelativePath", "TP3ShootGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP3ShootGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATP3ShootGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TP3Shoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP3ShootGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP3ShootGameMode_Statics::ClassParams = {
	&ATP3ShootGameMode::StaticClass,
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
	0x008803ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP3ShootGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP3ShootGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATP3ShootGameMode()
{
	if (!Z_Registration_Info_UClass_ATP3ShootGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP3ShootGameMode.OuterSingleton, Z_Construct_UClass_ATP3ShootGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATP3ShootGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATP3ShootGameMode);
ATP3ShootGameMode::~ATP3ShootGameMode() {}
// ********** End Class ATP3ShootGameMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootGameMode_h__Script_TP3Shoot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATP3ShootGameMode, ATP3ShootGameMode::StaticClass, TEXT("ATP3ShootGameMode"), &Z_Registration_Info_UClass_ATP3ShootGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP3ShootGameMode), 980229592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootGameMode_h__Script_TP3Shoot_3739846582(TEXT("/Script/TP3Shoot"),
	Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootGameMode_h__Script_TP3Shoot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_TP3ShootGameMode_h__Script_TP3Shoot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
