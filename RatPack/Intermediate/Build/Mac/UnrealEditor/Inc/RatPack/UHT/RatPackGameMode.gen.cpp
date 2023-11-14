// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RatPack/RatPackGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRatPackGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RATPACK_API UClass* Z_Construct_UClass_ARatPackGameMode();
	RATPACK_API UClass* Z_Construct_UClass_ARatPackGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RatPack();
// End Cross Module References
	void ARatPackGameMode::StaticRegisterNativesARatPackGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARatPackGameMode);
	UClass* Z_Construct_UClass_ARatPackGameMode_NoRegister()
	{
		return ARatPackGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARatPackGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARatPackGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RatPack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARatPackGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARatPackGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RatPackGameMode.h" },
		{ "ModuleRelativePath", "RatPackGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARatPackGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARatPackGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARatPackGameMode_Statics::ClassParams = {
		&ARatPackGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARatPackGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARatPackGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARatPackGameMode()
	{
		if (!Z_Registration_Info_UClass_ARatPackGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARatPackGameMode.OuterSingleton, Z_Construct_UClass_ARatPackGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARatPackGameMode.OuterSingleton;
	}
	template<> RATPACK_API UClass* StaticClass<ARatPackGameMode>()
	{
		return ARatPackGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARatPackGameMode);
	ARatPackGameMode::~ARatPackGameMode() {}
	struct Z_CompiledInDeferFile_FID_Diego1_Documents_Unreal_Projects_RatPack_Source_RatPack_RatPackGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diego1_Documents_Unreal_Projects_RatPack_Source_RatPack_RatPackGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARatPackGameMode, ARatPackGameMode::StaticClass, TEXT("ARatPackGameMode"), &Z_Registration_Info_UClass_ARatPackGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARatPackGameMode), 3617847876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diego1_Documents_Unreal_Projects_RatPack_Source_RatPack_RatPackGameMode_h_293305201(TEXT("/Script/RatPack"),
		Z_CompiledInDeferFile_FID_Diego1_Documents_Unreal_Projects_RatPack_Source_RatPack_RatPackGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diego1_Documents_Unreal_Projects_RatPack_Source_RatPack_RatPackGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
