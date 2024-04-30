// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drones/AmmoBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoBar() {}
// Cross Module References
	DRONES_API UClass* Z_Construct_UClass_UAmmoBar();
	DRONES_API UClass* Z_Construct_UClass_UAmmoBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Drones();
// End Cross Module References
	void UAmmoBar::StaticRegisterNativesUAmmoBar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmmoBar);
	UClass* Z_Construct_UClass_UAmmoBar_NoRegister()
	{
		return UAmmoBar::StaticClass();
	}
	struct Z_Construct_UClass_UAmmoBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmoAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAmmoBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Drones,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoBar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoBar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AmmoBar.h" },
		{ "ModuleRelativePath", "AmmoBar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoBar_Statics::NewProp_AmmoAmount_MetaData[] = {
		{ "Category", "AmmoBar" },
		{ "ModuleRelativePath", "AmmoBar.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAmmoBar_Statics::NewProp_AmmoAmount = { "AmmoAmount", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmmoBar, AmmoAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoBar_Statics::NewProp_AmmoAmount_MetaData), Z_Construct_UClass_UAmmoBar_Statics::NewProp_AmmoAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoBar_Statics::NewProp_MaxAmmoAmount_MetaData[] = {
		{ "Category", "AmmoBar" },
		{ "ModuleRelativePath", "AmmoBar.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAmmoBar_Statics::NewProp_MaxAmmoAmount = { "MaxAmmoAmount", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmmoBar, MaxAmmoAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoBar_Statics::NewProp_MaxAmmoAmount_MetaData), Z_Construct_UClass_UAmmoBar_Statics::NewProp_MaxAmmoAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmmoBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoBar_Statics::NewProp_AmmoAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoBar_Statics::NewProp_MaxAmmoAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAmmoBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmmoBar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmmoBar_Statics::ClassParams = {
		&UAmmoBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAmmoBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoBar_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmmoBar_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoBar_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAmmoBar()
	{
		if (!Z_Registration_Info_UClass_UAmmoBar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmmoBar.OuterSingleton, Z_Construct_UClass_UAmmoBar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAmmoBar.OuterSingleton;
	}
	template<> DRONES_API UClass* StaticClass<UAmmoBar>()
	{
		return UAmmoBar::StaticClass();
	}
	UAmmoBar::UAmmoBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmmoBar);
	UAmmoBar::~UAmmoBar() {}
	struct Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_AmmoBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_AmmoBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAmmoBar, UAmmoBar::StaticClass, TEXT("UAmmoBar"), &Z_Registration_Info_UClass_UAmmoBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmmoBar), 1694036370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_AmmoBar_h_2076240662(TEXT("/Script/Drones"),
		Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_AmmoBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_AmmoBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
