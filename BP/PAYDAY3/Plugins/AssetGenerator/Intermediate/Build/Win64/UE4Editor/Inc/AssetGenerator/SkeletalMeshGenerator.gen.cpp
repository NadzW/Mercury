// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/SkeletalMeshGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USkeletalMeshGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USkeletalMeshGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetTypeGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void USkeletalMeshGenerator::StaticRegisterNativesUSkeletalMeshGenerator()
	{
	}
	UClass* Z_Construct_UClass_USkeletalMeshGenerator_NoRegister()
	{
		return USkeletalMeshGenerator::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/SkeletalMeshGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/SkeletalMeshGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshGenerator_Statics::ClassParams = {
		&USkeletalMeshGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkeletalMeshGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeletalMeshGenerator, 510938506);
	template<> ASSETGENERATOR_API UClass* StaticClass<USkeletalMeshGenerator>()
	{
		return USkeletalMeshGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMeshGenerator(Z_Construct_UClass_USkeletalMeshGenerator, &USkeletalMeshGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("USkeletalMeshGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
