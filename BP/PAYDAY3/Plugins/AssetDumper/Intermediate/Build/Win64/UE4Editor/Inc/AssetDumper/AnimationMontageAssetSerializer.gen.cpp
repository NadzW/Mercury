// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDumper/Public/Toolkit/AssetTypes/AnimationMontageAssetSerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationMontageAssetSerializer() {}
// Cross Module References
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAnimationMontageAssetSerializer_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAnimationMontageAssetSerializer();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAssetTypeSerializer();
	UPackage* Z_Construct_UPackage__Script_AssetDumper();
// End Cross Module References
	void UAnimationMontageAssetSerializer::StaticRegisterNativesUAnimationMontageAssetSerializer()
	{
	}
	UClass* Z_Construct_UClass_UAnimationMontageAssetSerializer_NoRegister()
	{
		return UAnimationMontageAssetSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationMontageAssetSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationMontageAssetSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeSerializer,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDumper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationMontageAssetSerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypes/AnimationMontageAssetSerializer.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypes/AnimationMontageAssetSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationMontageAssetSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationMontageAssetSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationMontageAssetSerializer_Statics::ClassParams = {
		&UAnimationMontageAssetSerializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationMontageAssetSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationMontageAssetSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationMontageAssetSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationMontageAssetSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationMontageAssetSerializer, 1240116376);
	template<> ASSETDUMPER_API UClass* StaticClass<UAnimationMontageAssetSerializer>()
	{
		return UAnimationMontageAssetSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationMontageAssetSerializer(Z_Construct_UClass_UAnimationMontageAssetSerializer, &UAnimationMontageAssetSerializer::StaticClass, TEXT("/Script/AssetDumper"), TEXT("UAnimationMontageAssetSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationMontageAssetSerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
