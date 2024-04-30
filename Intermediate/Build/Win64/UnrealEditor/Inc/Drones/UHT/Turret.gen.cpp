// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drones/Turret.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurret() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DRONES_API UClass* Z_Construct_UClass_ARocketProjectile_NoRegister();
	DRONES_API UClass* Z_Construct_UClass_ATurret();
	DRONES_API UClass* Z_Construct_UClass_ATurret_NoRegister();
	DRONES_API UClass* Z_Construct_UClass_UHealth_NoRegister();
	DRONES_API UClass* Z_Construct_UClass_UHealthBar_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Drones();
// End Cross Module References
	DEFINE_FUNCTION(ATurret::execFireRocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireRocket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATurret::execOnSeePawn)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSeePawn(Z_Param_Pawn);
		P_NATIVE_END;
	}
	void ATurret::StaticRegisterNativesATurret()
	{
		UClass* Class = ATurret::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireRocket", &ATurret::execFireRocket },
			{ "OnSeePawn", &ATurret::execOnSeePawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATurret_FireRocket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurret_FireRocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_FireRocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "FireRocket", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_FireRocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_FireRocket_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATurret_FireRocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_FireRocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATurret_OnSeePawn_Statics
	{
		struct Turret_eventOnSeePawn_Parms
		{
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurret_OnSeePawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Turret_eventOnSeePawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurret_OnSeePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurret_OnSeePawn_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurret_OnSeePawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_OnSeePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "OnSeePawn", nullptr, nullptr, Z_Construct_UFunction_ATurret_OnSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_OnSeePawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurret_OnSeePawn_Statics::Turret_eventOnSeePawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_OnSeePawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_OnSeePawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_OnSeePawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATurret_OnSeePawn_Statics::Turret_eventOnSeePawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATurret_OnSeePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_OnSeePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurret);
	UClass* Z_Construct_UClass_ATurret_NoRegister()
	{
		return ATurret::StaticClass();
	}
	struct Z_Construct_UClass_ATurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HealthBarClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PawnSensingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadRocketTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReloadRocketTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadRocketTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadRocketTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Drones,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATurret_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurret_FireRocket, "FireRocket" }, // 2618708711
		{ &Z_Construct_UFunction_ATurret_OnSeePawn, "OnSeePawn" }, // 3527837614
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Turret.h" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_HealthBarClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_HealthBarClass = { "HealthBarClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, HealthBarClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UHealthBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_HealthBarClass_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_HealthBarClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARocketProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Category", "Turret" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_ArrowComponent_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_ArrowComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_PawnSensingComponent_MetaData[] = {
		{ "Category", "Turret" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_PawnSensingComponent = { "PawnSensingComponent", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_PawnSensingComponent_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_PawnSensingComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Turret" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_StaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "Category", "Turret" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_WidgetComponent_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_WidgetComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_ReloadRocketTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_ReloadRocketTimerHandle = { "ReloadRocketTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, ReloadRocketTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_ReloadRocketTimerHandle_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_ReloadRocketTimerHandle_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_ReloadRocketTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// in seconds\n" },
#endif
		{ "ModuleRelativePath", "Turret.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "in seconds" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_ReloadRocketTime = { "ReloadRocketTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, ReloadRocketTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_ReloadRocketTime_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_ReloadRocketTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurret_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_HealthBarClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_ArrowComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_PawnSensingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_WidgetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_ReloadRocketTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_ReloadRocketTime,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATurret_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHealth_NoRegister, (int32)VTABLE_OFFSET(ATurret, IHealth), false },  // 2285563777
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurret>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurret_Statics::ClassParams = {
		&ATurret::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATurret_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATurret()
	{
		if (!Z_Registration_Info_UClass_ATurret.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurret.OuterSingleton, Z_Construct_UClass_ATurret_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATurret.OuterSingleton;
	}
	template<> DRONES_API UClass* StaticClass<ATurret>()
	{
		return ATurret::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurret);
	ATurret::~ATurret() {}
	struct Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Turret_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Turret_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATurret, ATurret::StaticClass, TEXT("ATurret"), &Z_Registration_Info_UClass_ATurret, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurret), 3459274871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Turret_h_2600701624(TEXT("/Script/Drones"),
		Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Turret_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Turret_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
