// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Health.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONES_Health_generated_h
#error "Health.generated.h already included, missing '#pragma once' in Health.h"
#endif
#define DRONES_Health_generated_h

#define FID_Code_UE_Drones_Source_Drones_Health_h_13_SPARSE_DATA
#define FID_Code_UE_Drones_Source_Drones_Health_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_UE_Drones_Source_Drones_Health_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_UE_Drones_Source_Drones_Health_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHealth);


#define FID_Code_UE_Drones_Source_Drones_Health_h_13_ACCESSORS
#define FID_Code_UE_Drones_Source_Drones_Health_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DRONES_API UHealth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DRONES_API UHealth(UHealth&&); \
	DRONES_API UHealth(const UHealth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DRONES_API, UHealth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealth); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealth) \
	DRONES_API virtual ~UHealth();


#define FID_Code_UE_Drones_Source_Drones_Health_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHealth(); \
	friend struct Z_Construct_UClass_UHealth_Statics; \
public: \
	DECLARE_CLASS(UHealth, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Drones"), DRONES_API) \
	DECLARE_SERIALIZER(UHealth)


#define FID_Code_UE_Drones_Source_Drones_Health_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Code_UE_Drones_Source_Drones_Health_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Code_UE_Drones_Source_Drones_Health_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Code_UE_Drones_Source_Drones_Health_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHealth() {} \
public: \
	typedef UHealth UClassType; \
	typedef IHealth ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Code_UE_Drones_Source_Drones_Health_h_10_PROLOG
#define FID_Code_UE_Drones_Source_Drones_Health_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_UE_Drones_Source_Drones_Health_h_13_SPARSE_DATA \
	FID_Code_UE_Drones_Source_Drones_Health_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_UE_Drones_Source_Drones_Health_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_UE_Drones_Source_Drones_Health_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_UE_Drones_Source_Drones_Health_h_13_ACCESSORS \
	FID_Code_UE_Drones_Source_Drones_Health_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONES_API UClass* StaticClass<class UHealth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_UE_Drones_Source_Drones_Health_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
