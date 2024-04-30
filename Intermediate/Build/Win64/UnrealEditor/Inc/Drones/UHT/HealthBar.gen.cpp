// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drones/HealthBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthBar() {}
// Cross Module References
	DRONES_API UClass* Z_Construct_UClass_UHealthBar();
	DRONES_API UClass* Z_Construct_UClass_UHealthBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Drones();
// End Cross Module References
	void UHealthBar::StaticRegisterNativesUHealthBar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthBar);
	UClass* Z_Construct_UClass_UHealthBar_NoRegister()
	{
		return UHealthBar::StaticClass();
	}
	struct Z_Construct_UClass_UHealthBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Drones,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HealthBar.h" },
		{ "ModuleRelativePath", "HealthBar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBar_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "HealthBar" },
		{ "ModuleRelativePath", "HealthBar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthBar_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthBar, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBar_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_UHealthBar_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBar_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "HealthBar" },
		{ "ModuleRelativePath", "HealthBar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthBar_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthBar, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBar_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UHealthBar_Statics::NewProp_MaxHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthBar_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthBar_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthBar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthBar_Statics::ClassParams = {
		&UHealthBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHealthBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBar_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthBar_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBar_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHealthBar()
	{
		if (!Z_Registration_Info_UClass_UHealthBar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthBar.OuterSingleton, Z_Construct_UClass_UHealthBar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthBar.OuterSingleton;
	}
	template<> DRONES_API UClass* StaticClass<UHealthBar>()
	{
		return UHealthBar::StaticClass();
	}
	UHealthBar::UHealthBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthBar);
	UHealthBar::~UHealthBar() {}
	struct Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_HealthBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_HealthBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealthBar, UHealthBar::StaticClass, TEXT("UHealthBar"), &Z_Registration_Info_UClass_UHealthBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthBar), 2958757656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_HealthBar_h_1035957564(TEXT("/Script/Drones"),
		Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_HealthBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_HealthBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
