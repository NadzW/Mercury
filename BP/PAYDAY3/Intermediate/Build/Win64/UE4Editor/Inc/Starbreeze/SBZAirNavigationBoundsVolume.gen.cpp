// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAirNavigationBoundsVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAirNavigationBoundsVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAirNavigationBoundsVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAirNavigationBoundsVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZAirNavigationBoundsVolume::StaticRegisterNativesASBZAirNavigationBoundsVolume()
	{
	}
	UClass* Z_Construct_UClass_ASBZAirNavigationBoundsVolume_NoRegister()
	{
		return ASBZAirNavigationBoundsVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAirNavigationBoundsVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAirNavigationBoundsVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAirNavigationBoundsVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZAirNavigationBoundsVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAirNavigationBoundsVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAirNavigationBoundsVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAirNavigationBoundsVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAirNavigationBoundsVolume_Statics::ClassParams = {
		&ASBZAirNavigationBoundsVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAirNavigationBoundsVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAirNavigationBoundsVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAirNavigationBoundsVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAirNavigationBoundsVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAirNavigationBoundsVolume, 3364759113);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAirNavigationBoundsVolume>()
	{
		return ASBZAirNavigationBoundsVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAirNavigationBoundsVolume(Z_Construct_UClass_ASBZAirNavigationBoundsVolume, &ASBZAirNavigationBoundsVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAirNavigationBoundsVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAirNavigationBoundsVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
