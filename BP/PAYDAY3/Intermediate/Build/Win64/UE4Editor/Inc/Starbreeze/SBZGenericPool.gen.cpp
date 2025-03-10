// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGenericPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGenericPool() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGenericPool_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGenericPool();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void USBZGenericPool::StaticRegisterNativesUSBZGenericPool()
	{
	}
	UClass* Z_Construct_UClass_USBZGenericPool_NoRegister()
	{
		return USBZGenericPool::StaticClass();
	}
	struct Z_Construct_UClass_USBZGenericPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGenericPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGenericPool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGenericPool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGenericPool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGenericPool_Statics::NewProp_Pool_Inner = { "Pool", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGenericPool_Statics::NewProp_Pool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGenericPool" },
		{ "ModuleRelativePath", "Public/SBZGenericPool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGenericPool_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGenericPool, Pool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGenericPool_Statics::NewProp_Pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGenericPool_Statics::NewProp_Pool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGenericPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGenericPool_Statics::NewProp_Pool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGenericPool_Statics::NewProp_Pool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGenericPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGenericPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGenericPool_Statics::ClassParams = {
		&USBZGenericPool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGenericPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGenericPool_Statics::PropPointers),
		0,
		0x002000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGenericPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGenericPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGenericPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGenericPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGenericPool, 1863603831);
	template<> STARBREEZE_API UClass* StaticClass<USBZGenericPool>()
	{
		return USBZGenericPool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGenericPool(Z_Construct_UClass_USBZGenericPool, &USBZGenericPool::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGenericPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGenericPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
