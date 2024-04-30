// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Turret.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef DRONES_Turret_generated_h
#error "Turret.generated.h already included, missing '#pragma once' in Turret.h"
#endif
#define DRONES_Turret_generated_h

#define FID_Code_UE_Drones_Source_Drones_Turret_h_13_SPARSE_DATA
#define FID_Code_UE_Drones_Source_Drones_Turret_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_UE_Drones_Source_Drones_Turret_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_UE_Drones_Source_Drones_Turret_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireRocket); \
	DECLARE_FUNCTION(execOnSeePawn);


#define FID_Code_UE_Drones_Source_Drones_Turret_h_13_ACCESSORS
#define FID_Code_UE_Drones_Source_Drones_Turret_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Drones"), NO_API) \
	DECLARE_SERIALIZER(ATurret) \
	virtual UObject* _getUObject() const override { return const_cast<ATurret*>(this); }


#define FID_Code_UE_Drones_Source_Drones_Turret_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurret) \
	NO_API virtual ~ATurret();


#define FID_Code_UE_Drones_Source_Drones_Turret_h_10_PROLOG
#define FID_Code_UE_Drones_Source_Drones_Turret_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_UE_Drones_Source_Drones_Turret_h_13_SPARSE_DATA \
	FID_Code_UE_Drones_Source_Drones_Turret_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_UE_Drones_Source_Drones_Turret_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_UE_Drones_Source_Drones_Turret_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_UE_Drones_Source_Drones_Turret_h_13_ACCESSORS \
	FID_Code_UE_Drones_Source_Drones_Turret_h_13_INCLASS_NO_PURE_DECLS \
	FID_Code_UE_Drones_Source_Drones_Turret_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONES_API UClass* StaticClass<class ATurret>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_UE_Drones_Source_Drones_Turret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
