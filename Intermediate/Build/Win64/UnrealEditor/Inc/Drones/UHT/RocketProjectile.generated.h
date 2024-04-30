// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RocketProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DRONES_RocketProjectile_generated_h
#error "RocketProjectile.generated.h already included, missing '#pragma once' in RocketProjectile.h"
#endif
#define DRONES_RocketProjectile_generated_h

#define FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_SPARSE_DATA
#define FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCollision);


#define FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_ACCESSORS
#define FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARocketProjectile(); \
	friend struct Z_Construct_UClass_ARocketProjectile_Statics; \
public: \
	DECLARE_CLASS(ARocketProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Drones"), NO_API) \
	DECLARE_SERIALIZER(ARocketProjectile)


#define FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARocketProjectile(ARocketProjectile&&); \
	NO_API ARocketProjectile(const ARocketProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocketProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocketProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARocketProjectile) \
	NO_API virtual ~ARocketProjectile();


#define FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_9_PROLOG
#define FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_SPARSE_DATA \
	FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_ACCESSORS \
	FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FID_Code_UE_Drones_Source_Drones_RocketProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONES_API UClass* StaticClass<class ARocketProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_UE_Drones_Source_Drones_RocketProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
