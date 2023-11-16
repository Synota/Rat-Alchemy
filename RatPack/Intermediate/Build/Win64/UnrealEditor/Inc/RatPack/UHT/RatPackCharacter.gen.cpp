// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RatPack/RatPackCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRatPackCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	RATPACK_API UClass* Z_Construct_UClass_ARatPackCharacter();
	RATPACK_API UClass* Z_Construct_UClass_ARatPackCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RatPack();
// End Cross Module References
	void ARatPackCharacter::StaticRegisterNativesARatPackCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARatPackCharacter);
	UClass* Z_Construct_UClass_ARatPackCharacter_NoRegister()
	{
		return ARatPackCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARatPackCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARatPackCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RatPack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARatPackCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARatPackCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RatPackCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "RatPackCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARatPackCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RatPackCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARatPackCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARatPackCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARatPackCharacter_Statics::NewProp_TopDownCameraComponent_MetaData), Z_Construct_UClass_ARatPackCharacter_Statics::NewProp_TopDownCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARatPackCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RatPackCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARatPackCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARatPackCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARatPackCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_ARatPackCharacter_Statics::NewProp_CameraBoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARatPackCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARatPackCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARatPackCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARatPackCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARatPackCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARatPackCharacter_Statics::ClassParams = {
		&ARatPackCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARatPackCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARatPackCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARatPackCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARatPackCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARatPackCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARatPackCharacter()
	{
		if (!Z_Registration_Info_UClass_ARatPackCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARatPackCharacter.OuterSingleton, Z_Construct_UClass_ARatPackCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARatPackCharacter.OuterSingleton;
	}
	template<> RATPACK_API UClass* StaticClass<ARatPackCharacter>()
	{
		return ARatPackCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARatPackCharacter);
	ARatPackCharacter::~ARatPackCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_mplia_Documents_Fall_2023_CMS_611_Rat_Alchemy_RatPack_Source_RatPack_RatPackCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mplia_Documents_Fall_2023_CMS_611_Rat_Alchemy_RatPack_Source_RatPack_RatPackCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARatPackCharacter, ARatPackCharacter::StaticClass, TEXT("ARatPackCharacter"), &Z_Registration_Info_UClass_ARatPackCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARatPackCharacter), 539918482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mplia_Documents_Fall_2023_CMS_611_Rat_Alchemy_RatPack_Source_RatPack_RatPackCharacter_h_1620173975(TEXT("/Script/RatPack"),
		Z_CompiledInDeferFile_FID_Users_mplia_Documents_Fall_2023_CMS_611_Rat_Alchemy_RatPack_Source_RatPack_RatPackCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mplia_Documents_Fall_2023_CMS_611_Rat_Alchemy_RatPack_Source_RatPack_RatPackCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
