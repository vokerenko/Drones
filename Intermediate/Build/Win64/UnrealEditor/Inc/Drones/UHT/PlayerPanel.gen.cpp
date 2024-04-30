// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drones/PlayerPanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPanel() {}
// Cross Module References
	DRONES_API UClass* Z_Construct_UClass_UAmmoBar_NoRegister();
	DRONES_API UClass* Z_Construct_UClass_UHealthBar_NoRegister();
	DRONES_API UClass* Z_Construct_UClass_UPlayerPanel();
	DRONES_API UClass* Z_Construct_UClass_UPlayerPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Drones();
// End Cross Module References
	void UPlayerPanel::StaticRegisterNativesUPlayerPanel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerPanel);
	UClass* Z_Construct_UClass_UPlayerPanel_NoRegister()
	{
		return UPlayerPanel::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AmmoBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Drones,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPanel_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPanel_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlayerPanel.h" },
		{ "ModuleRelativePath", "PlayerPanel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPanel_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerPanel_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerPanel, HealthBar), Z_Construct_UClass_UHealthBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPanel_Statics::NewProp_HealthBar_MetaData), Z_Construct_UClass_UPlayerPanel_Statics::NewProp_HealthBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPanel_Statics::NewProp_AmmoBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerPanel_Statics::NewProp_AmmoBar = { "AmmoBar", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerPanel, AmmoBar), Z_Construct_UClass_UAmmoBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPanel_Statics::NewProp_AmmoBar_MetaData), Z_Construct_UClass_UPlayerPanel_Statics::NewProp_AmmoBar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPanel_Statics::NewProp_HealthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPanel_Statics::NewProp_AmmoBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerPanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerPanel_Statics::ClassParams = {
		&UPlayerPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPanel_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPanel_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerPanel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPanel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerPanel()
	{
		if (!Z_Registration_Info_UClass_UPlayerPanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerPanel.OuterSingleton, Z_Construct_UClass_UPlayerPanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerPanel.OuterSingleton;
	}
	template<> DRONES_API UClass* StaticClass<UPlayerPanel>()
	{
		return UPlayerPanel::StaticClass();
	}
	UPlayerPanel::UPlayerPanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerPanel);
	UPlayerPanel::~UPlayerPanel() {}
	struct Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_PlayerPanel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_PlayerPanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerPanel, UPlayerPanel::StaticClass, TEXT("UPlayerPanel"), &Z_Registration_Info_UClass_UPlayerPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerPanel), 2370158731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_PlayerPanel_h_250224845(TEXT("/Script/Drones"),
		Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_PlayerPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_PlayerPanel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
