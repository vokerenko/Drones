// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drones/Health.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealth() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	DRONES_API UClass* Z_Construct_UClass_UHealth();
	DRONES_API UClass* Z_Construct_UClass_UHealth_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Drones();
// End Cross Module References
	DEFINE_FUNCTION(IHealth::execSetHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealth(Z_Param_NewHealth);
		P_NATIVE_END;
	}
	void UHealth::StaticRegisterNativesUHealth()
	{
		UClass* Class = UHealth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHealth", &IHealth::execSetHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealth_SetHealth_Statics
	{
		struct Health_eventSetHealth_Parms
		{
			float NewHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealth_SetHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Health_eventSetHealth_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealth_SetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealth_SetHealth_Statics::NewProp_NewHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealth_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Health.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealth_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealth, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_UHealth_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealth_SetHealth_Statics::Health_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealth_SetHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_SetHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHealth_SetHealth_Statics::Health_eventSetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHealth_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealth_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealth);
	UClass* Z_Construct_UClass_UHealth_NoRegister()
	{
		return UHealth::StaticClass();
	}
	struct Z_Construct_UClass_UHealth_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Drones,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealth_SetHealth, "SetHealth" }, // 4082398555
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealth_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Health.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHealth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealth_Statics::ClassParams = {
		&UHealth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealth_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHealth()
	{
		if (!Z_Registration_Info_UClass_UHealth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealth.OuterSingleton, Z_Construct_UClass_UHealth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealth.OuterSingleton;
	}
	template<> DRONES_API UClass* StaticClass<UHealth>()
	{
		return UHealth::StaticClass();
	}
	UHealth::UHealth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealth);
	UHealth::~UHealth() {}
	struct Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Health_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Health_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealth, UHealth::StaticClass, TEXT("UHealth"), &Z_Registration_Info_UClass_UHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealth), 2285563777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Health_h_218784063(TEXT("/Script/Drones"),
		Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Health_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Health_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
