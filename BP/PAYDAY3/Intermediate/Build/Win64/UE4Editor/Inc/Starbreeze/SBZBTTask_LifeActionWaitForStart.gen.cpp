// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_LifeActionWaitForStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_LifeActionWaitForStart() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_LifeActionWaitForStart::StaticRegisterNativesUSBZBTTask_LifeActionWaitForStart()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart_NoRegister()
	{
		return USBZBTTask_LifeActionWaitForStart::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_LifeActionWaitForStart.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_LifeActionWaitForStart.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_LifeActionWaitForStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart_Statics::ClassParams = {
		&USBZBTTask_LifeActionWaitForStart::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_LifeActionWaitForStart, 323320396);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_LifeActionWaitForStart>()
	{
		return USBZBTTask_LifeActionWaitForStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_LifeActionWaitForStart(Z_Construct_UClass_USBZBTTask_LifeActionWaitForStart, &USBZBTTask_LifeActionWaitForStart::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_LifeActionWaitForStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_LifeActionWaitForStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
