// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTargetFinderPredicate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTargetFinderPredicate() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinderPredicate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinderPredicate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZTargetFinderPredicate::StaticRegisterNativesUSBZTargetFinderPredicate()
	{
	}
	UClass* Z_Construct_UClass_USBZTargetFinderPredicate_NoRegister()
	{
		return USBZTargetFinderPredicate::StaticClass();
	}
	struct Z_Construct_UClass_USBZTargetFinderPredicate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTargetFinderPredicate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTargetFinderPredicate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTargetFinderPredicate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTargetFinderPredicate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTargetFinderPredicate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTargetFinderPredicate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTargetFinderPredicate_Statics::ClassParams = {
		&USBZTargetFinderPredicate::StaticClass,
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
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTargetFinderPredicate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinderPredicate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTargetFinderPredicate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTargetFinderPredicate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTargetFinderPredicate, 3820435109);
	template<> STARBREEZE_API UClass* StaticClass<USBZTargetFinderPredicate>()
	{
		return USBZTargetFinderPredicate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTargetFinderPredicate(Z_Construct_UClass_USBZTargetFinderPredicate, &USBZTargetFinderPredicate::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTargetFinderPredicate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTargetFinderPredicate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
