// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRatPack_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RatPack;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RatPack()
	{
		if (!Z_Registration_Info_UPackage__Script_RatPack.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RatPack",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xD40BBA42,
				0xD7A958EA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RatPack.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RatPack.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RatPack(Z_Construct_UPackage__Script_RatPack, TEXT("/Script/RatPack"), Z_Registration_Info_UPackage__Script_RatPack, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD40BBA42, 0xD7A958EA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
