// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillScramblerExtraPockets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillScramblerExtraPockets() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillScramblerExtraPockets_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillScramblerExtraPockets();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillScramblerExtraPockets::StaticRegisterNativesUSBZSkillScramblerExtraPockets()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillScramblerExtraPockets_NoRegister()
	{
		return USBZSkillScramblerExtraPockets::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillScramblerExtraPockets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillScramblerExtraPockets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillScramblerExtraPockets_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillScramblerExtraPockets.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillScramblerExtraPockets.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillScramblerExtraPockets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillScramblerExtraPockets>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillScramblerExtraPockets_Statics::ClassParams = {
		&USBZSkillScramblerExtraPockets::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillScramblerExtraPockets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillScramblerExtraPockets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillScramblerExtraPockets()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillScramblerExtraPockets_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillScramblerExtraPockets, 3250653815);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillScramblerExtraPockets>()
	{
		return USBZSkillScramblerExtraPockets::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillScramblerExtraPockets(Z_Construct_UClass_USBZSkillScramblerExtraPockets, &USBZSkillScramblerExtraPockets::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillScramblerExtraPockets"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillScramblerExtraPockets);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
