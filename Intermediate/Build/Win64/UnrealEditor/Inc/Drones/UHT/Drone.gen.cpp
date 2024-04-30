// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drones/Drone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrone() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DRONES_API UClass* Z_Construct_UClass_ADrone();
	DRONES_API UClass* Z_Construct_UClass_ADrone_NoRegister();
	DRONES_API UClass* Z_Construct_UClass_ARocketProjectile_NoRegister();
	DRONES_API UClass* Z_Construct_UClass_UAmmoBar_NoRegister();
	DRONES_API UClass* Z_Construct_UClass_UHealth_NoRegister();
	DRONES_API UClass* Z_Construct_UClass_UPlayerPanel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Drones();
// End Cross Module References
	DEFINE_FUNCTION(ADrone::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADrone::execRotate)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rotate(Z_Param_Out_Vec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADrone::execMove)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_Out_Vec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADrone::execUpdateAmmoBar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAmmoBar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADrone::execUpdateUIVisibility)
	{
		P_GET_UBOOL(Z_Param_bIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateUIVisibility(Z_Param_bIsVisible);
		P_NATIVE_END;
	}
	void ADrone::StaticRegisterNativesADrone()
	{
		UClass* Class = ADrone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ADrone::execFire },
			{ "Move", &ADrone::execMove },
			{ "Rotate", &ADrone::execRotate },
			{ "UpdateAmmoBar", &ADrone::execUpdateAmmoBar },
			{ "UpdateUIVisibility", &ADrone::execUpdateUIVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADrone_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrone_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrone, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrone_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADrone_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrone_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADrone_Move_Statics
	{
		struct Drone_eventMove_Parms
		{
			FVector Vec;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_Move_Statics::NewProp_Vec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADrone_Move_Statics::NewProp_Vec = { "Vec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Drone_eventMove_Parms, Vec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_Move_Statics::NewProp_Vec_MetaData), Z_Construct_UFunction_ADrone_Move_Statics::NewProp_Vec_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADrone_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrone_Move_Statics::NewProp_Vec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrone_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrone, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ADrone_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADrone_Move_Statics::Drone_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrone_Move_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_Move_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADrone_Move_Statics::Drone_eventMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADrone_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrone_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADrone_Rotate_Statics
	{
		struct Drone_eventRotate_Parms
		{
			FVector2D Vec;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_Rotate_Statics::NewProp_Vec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADrone_Rotate_Statics::NewProp_Vec = { "Vec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Drone_eventRotate_Parms, Vec), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_Rotate_Statics::NewProp_Vec_MetaData), Z_Construct_UFunction_ADrone_Rotate_Statics::NewProp_Vec_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADrone_Rotate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrone_Rotate_Statics::NewProp_Vec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_Rotate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrone_Rotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrone, nullptr, "Rotate", nullptr, nullptr, Z_Construct_UFunction_ADrone_Rotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_Rotate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADrone_Rotate_Statics::Drone_eventRotate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_Rotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrone_Rotate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_Rotate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADrone_Rotate_Statics::Drone_eventRotate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADrone_Rotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrone_Rotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADrone_UpdateAmmoBar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_UpdateAmmoBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrone_UpdateAmmoBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrone, nullptr, "UpdateAmmoBar", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_UpdateAmmoBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrone_UpdateAmmoBar_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADrone_UpdateAmmoBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrone_UpdateAmmoBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics
	{
		struct Drone_eventUpdateUIVisibility_Parms
		{
			bool bIsVisible;
		};
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((Drone_eventUpdateUIVisibility_Parms*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Drone_eventUpdateUIVisibility_Parms), &Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::NewProp_bIsVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrone, nullptr, "UpdateUIVisibility", nullptr, nullptr, Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::Drone_eventUpdateUIVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::Drone_eventUpdateUIVisibility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADrone_UpdateUIVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrone_UpdateUIVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrone);
	UClass* Z_Construct_UClass_ADrone_NoRegister()
	{
		return ADrone::StaticClass();
	}
	struct Z_Construct_UClass_ADrone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Panel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Panel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AmmoBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PanelClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FireAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmoAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUIVisible_MetaData[];
#endif
		static void NewProp_bIsUIVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUIVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Drones,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADrone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADrone_Fire, "Fire" }, // 226385833
		{ &Z_Construct_UFunction_ADrone_Move, "Move" }, // 2800280078
		{ &Z_Construct_UFunction_ADrone_Rotate, "Rotate" }, // 3279502781
		{ &Z_Construct_UFunction_ADrone_UpdateAmmoBar, "UpdateAmmoBar" }, // 3531133461
		{ &Z_Construct_UFunction_ADrone_UpdateUIVisibility, "UpdateUIVisibility" }, // 1886515058
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Drone.h" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_Panel_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_Panel = { "Panel", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, Panel), Z_Construct_UClass_UPlayerPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_Panel_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_Panel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_AmmoBar_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_AmmoBar = { "AmmoBar", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, AmmoBar), Z_Construct_UClass_UAmmoBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_AmmoBar_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_AmmoBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_PanelClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_PanelClass = { "PanelClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, PanelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_PanelClass_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_PanelClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARocketProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_InputMapping_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_InputMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, MovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_MovementAction_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_MovementAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_RotationAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_RotationAction = { "RotationAction", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, RotationAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_RotationAction_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_RotationAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_FireAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_FireAction_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_FireAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Drone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, MovementComponent), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_MovementComponent_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_MovementComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Drone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Drone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_StaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Drone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, CollisionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_CollisionComponent_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_CollisionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_MaxAmmoAmount_MetaData[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_MaxAmmoAmount = { "MaxAmmoAmount", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, MaxAmmoAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_MaxAmmoAmount_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_MaxAmmoAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_AmmoAmount_MetaData[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_AmmoAmount = { "AmmoAmount", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, AmmoAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_AmmoAmount_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_AmmoAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_bIsUIVisible_MetaData[] = {
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	void Z_Construct_UClass_ADrone_Statics::NewProp_bIsUIVisible_SetBit(void* Obj)
	{
		((ADrone*)Obj)->bIsUIVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_bIsUIVisible = { "bIsUIVisible", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADrone), &Z_Construct_UClass_ADrone_Statics::NewProp_bIsUIVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_bIsUIVisible_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_bIsUIVisible_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_Panel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_AmmoBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_PanelClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_MovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_RotationAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_FireAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_MaxAmmoAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_AmmoAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_bIsUIVisible,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADrone_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHealth_NoRegister, (int32)VTABLE_OFFSET(ADrone, IHealth), false },  // 2285563777
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrone_Statics::ClassParams = {
		&ADrone::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADrone_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADrone()
	{
		if (!Z_Registration_Info_UClass_ADrone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrone.OuterSingleton, Z_Construct_UClass_ADrone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADrone.OuterSingleton;
	}
	template<> DRONES_API UClass* StaticClass<ADrone>()
	{
		return ADrone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrone);
	ADrone::~ADrone() {}
	struct Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Drone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Drone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADrone, ADrone::StaticClass, TEXT("ADrone"), &Z_Registration_Info_UClass_ADrone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrone), 2793079623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Drone_h_1969156427(TEXT("/Script/Drones"),
		Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Drone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_UE_Drones_Source_Drones_Drone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
