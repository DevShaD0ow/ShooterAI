// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_Shoot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_Shoot() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
TP3SHOOT_API UClass* Z_Construct_UClass_UBTTask_Shoot();
TP3SHOOT_API UClass* Z_Construct_UClass_UBTTask_Shoot_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP3Shoot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_Shoot ************************************************************
void UBTTask_Shoot::StaticRegisterNativesUBTTask_Shoot()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_Shoot;
UClass* UBTTask_Shoot::GetPrivateStaticClass()
{
	using TClass = UBTTask_Shoot;
	if (!Z_Registration_Info_UClass_UBTTask_Shoot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTask_Shoot"),
			Z_Registration_Info_UClass_UBTTask_Shoot.InnerSingleton,
			StaticRegisterNativesUBTTask_Shoot,
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
	return Z_Registration_Info_UClass_UBTTask_Shoot.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_Shoot_NoRegister()
{
	return UBTTask_Shoot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_Shoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_Shoot.h" },
		{ "ModuleRelativePath", "Public/BTTask_Shoot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Shoot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_Shoot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_TP3Shoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Shoot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Shoot_Statics::ClassParams = {
	&UBTTask_Shoot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Shoot_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_Shoot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_Shoot()
{
	if (!Z_Registration_Info_UClass_UBTTask_Shoot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Shoot.OuterSingleton, Z_Construct_UClass_UBTTask_Shoot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_Shoot.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Shoot);
UBTTask_Shoot::~UBTTask_Shoot() {}
// ********** End Class UBTTask_Shoot **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_BTTask_Shoot_h__Script_TP3Shoot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Shoot, UBTTask_Shoot::StaticClass, TEXT("UBTTask_Shoot"), &Z_Registration_Info_UClass_UBTTask_Shoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Shoot), 2380252259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_BTTask_Shoot_h__Script_TP3Shoot_3879931598(TEXT("/Script/TP3Shoot"),
	Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_BTTask_Shoot_h__Script_TP3Shoot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_BTTask_Shoot_h__Script_TP3Shoot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
