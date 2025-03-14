// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAsset() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniAsset::StaticRegisterNativesUHoudiniAsset()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister()
	{
		return UHoudiniAsset::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFileName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetBytes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBytesCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AssetBytesCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAssetLimitedCommercial_MetaData[];
#endif
		static void NewProp_bAssetLimitedCommercial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAssetLimitedCommercial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAssetNonCommercial_MetaData[];
#endif
		static void NewProp_bAssetNonCommercial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAssetNonCommercial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAssetExpanded_MetaData[];
#endif
		static void NewProp_bAssetExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAssetExpanded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetFileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetFileName = { "AssetFileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAsset, AssetFileName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetFileName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytes_Inner = { "AssetBytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytes = { "AssetBytes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAsset, AssetBytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytesCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytesCount = { "AssetBytesCount", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAsset, AssetBytesCount), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytesCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytesCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetLimitedCommercial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetLimitedCommercial_SetBit(void* Obj)
	{
		((UHoudiniAsset*)Obj)->bAssetLimitedCommercial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetLimitedCommercial = { "bAssetLimitedCommercial", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAsset), &Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetLimitedCommercial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetLimitedCommercial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetLimitedCommercial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetNonCommercial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetNonCommercial_SetBit(void* Obj)
	{
		((UHoudiniAsset*)Obj)->bAssetNonCommercial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetNonCommercial = { "bAssetNonCommercial", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAsset), &Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetNonCommercial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetNonCommercial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetNonCommercial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetExpanded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAsset" },
		{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetExpanded_SetBit(void* Obj)
	{
		((UHoudiniAsset*)Obj)->bAssetExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetExpanded = { "bAssetExpanded", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAsset), &Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetExpanded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_AssetBytesCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetLimitedCommercial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetNonCommercial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAsset_Statics::NewProp_bAssetExpanded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAsset_Statics::ClassParams = {
		&UHoudiniAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAsset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAsset, 779189422);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniAsset>()
	{
		return UHoudiniAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAsset(Z_Construct_UClass_UHoudiniAsset, &UHoudiniAsset::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
