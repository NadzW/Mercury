// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineEventBroker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineEventBroker() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineEventBroker_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineEventBroker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZOnlineEventBroker::StaticRegisterNativesUSBZOnlineEventBroker()
	{
	}
	UClass* Z_Construct_UClass_USBZOnlineEventBroker_NoRegister()
	{
		return USBZOnlineEventBroker::StaticClass();
	}
	struct Z_Construct_UClass_USBZOnlineEventBroker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOnlineEventBroker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineEventBroker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineEventBroker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineEventBroker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOnlineEventBroker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOnlineEventBroker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOnlineEventBroker_Statics::ClassParams = {
		&USBZOnlineEventBroker::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOnlineEventBroker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineEventBroker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOnlineEventBroker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOnlineEventBroker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOnlineEventBroker, 2858462632);
	template<> STARBREEZE_API UClass* StaticClass<USBZOnlineEventBroker>()
	{
		return USBZOnlineEventBroker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOnlineEventBroker(Z_Construct_UClass_USBZOnlineEventBroker, &USBZOnlineEventBroker::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOnlineEventBroker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOnlineEventBroker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
