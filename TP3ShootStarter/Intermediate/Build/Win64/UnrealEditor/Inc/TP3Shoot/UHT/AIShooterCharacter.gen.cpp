// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIShooterCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAIShooterCharacter() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
TP3SHOOT_API UClass* Z_Construct_UClass_AAIShooterCharacter();
TP3SHOOT_API UClass* Z_Construct_UClass_AAIShooterCharacter_NoRegister();
TP3SHOOT_API UClass* Z_Construct_UClass_ATP3ShootCharacter();
UPackage* Z_Construct_UPackage__Script_TP3Shoot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAIShooterCharacter ******************************************************
void AAIShooterCharacter::StaticRegisterNativesAAIShooterCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAIShooterCharacter;
UClass* AAIShooterCharacter::GetPrivateStaticClass()
{
	using TClass = AAIShooterCharacter;
	if (!Z_Registration_Info_UClass_AAIShooterCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AIShooterCharacter"),
			Z_Registration_Info_UClass_AAIShooterCharacter.InnerSingleton,
			StaticRegisterNativesAAIShooterCharacter,
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
	return Z_Registration_Info_UClass_AAIShooterCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AAIShooterCharacter_NoRegister()
{
	return AAIShooterCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAIShooterCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIShooterCharacter.h" },
		{ "ModuleRelativePath", "Public/AIShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// R\xc3\xa9""f\xc3\xa9rence vers le Behavior Tree utilis\xc3\xa9 par cette IA\n" },
#endif
		{ "ModuleRelativePath", "Public/AIShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "R\xc3\xa9""f\xc3\xa9rence vers le Behavior Tree utilis\xc3\xa9 par cette IA" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIShooterCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIShooterCharacter_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIShooterCharacter, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIShooterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShooterCharacter_Statics::NewProp_BehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIShooterCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAIShooterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATP3ShootCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TP3Shoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIShooterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIShooterCharacter_Statics::ClassParams = {
	&AAIShooterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAIShooterCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAIShooterCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIShooterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIShooterCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIShooterCharacter()
{
	if (!Z_Registration_Info_UClass_AAIShooterCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIShooterCharacter.OuterSingleton, Z_Construct_UClass_AAIShooterCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIShooterCharacter.OuterSingleton;
}
AAIShooterCharacter::AAIShooterCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIShooterCharacter);
AAIShooterCharacter::~AAIShooterCharacter() {}
// ********** End Class AAIShooterCharacter ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIShooterCharacter_h__Script_TP3Shoot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIShooterCharacter, AAIShooterCharacter::StaticClass, TEXT("AAIShooterCharacter"), &Z_Registration_Info_UClass_AAIShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIShooterCharacter), 105861367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIShooterCharacter_h__Script_TP3Shoot_1488889817(TEXT("/Script/TP3Shoot"),
	Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIShooterCharacter_h__Script_TP3Shoot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealP_ShooterAI_TP3ShootStarter_Source_TP3Shoot_Public_AIShooterCharacter_h__Script_TP3Shoot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
