// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetInput() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetInput_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetInput();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniAssetInput::StaticRegisterNativesUHoudiniAssetInput()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAssetInput_NoRegister()
	{
		return UHoudiniAssetInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniAssetInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniAssetInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniAssetParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniAssetInput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetInput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniAssetInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetInput_Statics::ClassParams = {
		&UHoudiniAssetInput::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniAssetInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniAssetInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAssetInput, 2264045465);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniAssetInput>()
	{
		return UHoudiniAssetInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetInput(Z_Construct_UClass_UHoudiniAssetInput, &UHoudiniAssetInput::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAssetInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
