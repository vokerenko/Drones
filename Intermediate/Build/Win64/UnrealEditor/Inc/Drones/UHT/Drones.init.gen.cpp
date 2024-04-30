// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrones_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Drones;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Drones()
	{
		if (!Z_Registration_Info_UPackage__Script_Drones.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Drones",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4D74899D,
				0x4D24F06E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Drones.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Drones.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Drones(Z_Construct_UPackage__Script_Drones, TEXT("/Script/Drones"), Z_Registration_Info_UPackage__Script_Drones, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4D74899D, 0x4D24F06E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
