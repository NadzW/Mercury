// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDamageInstigatorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDamageInstigatorInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageInstigatorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageInstigatorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDamageInstigatorInterface::StaticRegisterNativesUSBZDamageInstigatorInterface()
	{
	}
	UClass* Z_Construct_UClass_USBZDamageInstigatorInterface_NoRegister()
	{
		return USBZDamageInstigatorInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZDamageInstigatorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDamageInstigatorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDamageInstigatorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDamageInstigatorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDamageInstigatorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZDamageInstigatorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDamageInstigatorInterface_Statics::ClassParams = {
		&USBZDamageInstigatorInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDamageInstigatorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDamageInstigatorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDamageInstigatorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDamageInstigatorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDamageInstigatorInterface, 1936563248);
	template<> STARBREEZE_API UClass* StaticClass<USBZDamageInstigatorInterface>()
	{
		return USBZDamageInstigatorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDamageInstigatorInterface(Z_Construct_UClass_USBZDamageInstigatorInterface, &USBZDamageInstigatorInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDamageInstigatorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDamageInstigatorInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
