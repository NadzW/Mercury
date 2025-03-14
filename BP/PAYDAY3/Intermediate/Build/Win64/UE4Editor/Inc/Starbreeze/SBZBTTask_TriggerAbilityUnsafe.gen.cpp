// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_TriggerAbilityUnsafe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_TriggerAbilityUnsafe() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAbilityInput();
// End Cross Module References
	void USBZBTTask_TriggerAbilityUnsafe::StaticRegisterNativesUSBZBTTask_TriggerAbilityUnsafe()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_NoRegister()
	{
		return USBZBTTask_TriggerAbilityUnsafe::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbilityInput_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbilityInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_TriggerAbilityUnsafe.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_TriggerAbilityUnsafe.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::NewProp_AbilityInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::NewProp_AbilityInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_TriggerAbilityUnsafe" },
		{ "ModuleRelativePath", "Public/SBZBTTask_TriggerAbilityUnsafe.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::NewProp_AbilityInput = { "AbilityInput", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_TriggerAbilityUnsafe, AbilityInput), Z_Construct_UEnum_Starbreeze_ESBZAbilityInput, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::NewProp_AbilityInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::NewProp_AbilityInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::NewProp_AbilityInput_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::NewProp_AbilityInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_TriggerAbilityUnsafe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::ClassParams = {
		&USBZBTTask_TriggerAbilityUnsafe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_TriggerAbilityUnsafe, 1162078789);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_TriggerAbilityUnsafe>()
	{
		return USBZBTTask_TriggerAbilityUnsafe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_TriggerAbilityUnsafe(Z_Construct_UClass_USBZBTTask_TriggerAbilityUnsafe, &USBZBTTask_TriggerAbilityUnsafe::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_TriggerAbilityUnsafe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_TriggerAbilityUnsafe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
