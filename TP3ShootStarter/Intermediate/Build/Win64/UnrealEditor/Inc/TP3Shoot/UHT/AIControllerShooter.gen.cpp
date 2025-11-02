// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIControllerShooter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAIControllerShooter() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
TP3SHOOT_API UClass* Z_Construct_UClass_AAIControllerShooter();
TP3SHOOT_API UClass* Z_Construct_UClass_AAIControllerShooter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP3Shoot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAIControllerShooter *****************************************************
void AAIControllerShooter::StaticRegisterNativesAAIControllerShooter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAIControllerShooter;
UClass* AAIControllerShooter::GetPrivateStaticClass()
{
	using TClass = AAIControllerShooter;
	if (!Z_Registration_Info_UClass_AAIControllerShooter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AIControllerShooter"),
			Z_Registration_Info_UClass_AAIControllerShooter.InnerSingleton,
			StaticRegisterNativesAAIControllerShooter,
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
	return Z_Registration_Info_UClass_AAIControllerShooter.InnerSingleton;
}
UClass* Z_Construct_UClass_AAIControllerShooter_NoRegister()
{
	return AAIControllerShooter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAIControllerShooter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIControllerShooter.h" },
		{ "ModuleRelativePath", "Public/AIControllerShooter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIControllerShooter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAIControllerShooter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_TP3Shoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerShooter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIControllerShooter_Statics::ClassParams = {
	&AAIControllerShooter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerShooter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIControllerShooter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIControllerShooter()
{
	if (!Z_Registration_Info_UClass_AAIControllerShooter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIControllerShooter.OuterSingleton, Z_Construct_UClass_AAIControllerShooter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIControllerShooter.OuterSingleton;
}
AAIControllerShooter::AAIControllerShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIControllerShooter);
AAIControllerShooter::~AAIControllerShooter() {}
// ********** End Class AAIControllerShooter *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h__Script_TP3Shoot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIControllerShooter, AAIControllerShooter::StaticClass, TEXT("AAIControllerShooter"), &Z_Registration_Info_UClass_AAIControllerShooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIControllerShooter), 4285509052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h__Script_TP3Shoot_1513478509(TEXT("/Script/TP3Shoot"),
	Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h__Script_TP3Shoot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIControllerShooter_h__Script_TP3Shoot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
