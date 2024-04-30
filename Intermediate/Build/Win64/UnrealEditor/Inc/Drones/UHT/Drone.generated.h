// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONES_Drone_generated_h
#error "Drone.generated.h already included, missing '#pragma once' in Drone.h"
#endif
#define DRONES_Drone_generated_h

#define FID_Code_UE_Drones_Source_Drones_Drone_h_14_SPARSE_DATA
#define FID_Code_UE_Drones_Source_Drones_Drone_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_UE_Drones_Source_Drones_Drone_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_UE_Drones_Source_Drones_Drone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execRotate); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execUpdateAmmoBar); \
	DECLARE_FUNCTION(execUpdateUIVisibility);


#define FID_Code_UE_Drones_Source_Drones_Drone_h_14_ACCESSORS
#define FID_Code_UE_Drones_Source_Drones_Drone_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADrone(); \
	friend struct Z_Construct_UClass_ADrone_Statics; \
public: \
	DECLARE_CLASS(ADrone, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Drones"), NO_API) \
	DECLARE_SERIALIZER(ADrone) \
	virtual UObject* _getUObject() const override { return const_cast<ADrone*>(this); }


#define FID_Code_UE_Drones_Source_Drones_Drone_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADrone(ADrone&&); \
	NO_API ADrone(const ADrone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADrone) \
	NO_API virtual ~ADrone();


#define FID_Code_UE_Drones_Source_Drones_Drone_h_11_PROLOG
#define FID_Code_UE_Drones_Source_Drones_Drone_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_UE_Drones_Source_Drones_Drone_h_14_SPARSE_DATA \
	FID_Code_UE_Drones_Source_Drones_Drone_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_UE_Drones_Source_Drones_Drone_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_UE_Drones_Source_Drones_Drone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_UE_Drones_Source_Drones_Drone_h_14_ACCESSORS \
	FID_Code_UE_Drones_Source_Drones_Drone_h_14_INCLASS_NO_PURE_DECLS \
	FID_Code_UE_Drones_Source_Drones_Drone_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONES_API UClass* StaticClass<class ADrone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_UE_Drones_Source_Drones_Drone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
