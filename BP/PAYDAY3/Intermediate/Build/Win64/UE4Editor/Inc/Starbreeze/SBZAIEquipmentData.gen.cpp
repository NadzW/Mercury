// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIEquipmentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIEquipmentData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIEquipmentData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIEquipmentData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZThrowableConfig();
// End Cross Module References
	void USBZAIEquipmentData::StaticRegisterNativesUSBZAIEquipmentData()
	{
	}
	UClass* Z_Construct_UClass_USBZAIEquipmentData_NoRegister()
	{
		return USBZAIEquipmentData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIEquipmentData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippableConfigArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableConfigArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippableConfigArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowableConfigArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableConfigArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThrowableConfigArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowableCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIEquipmentData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIEquipmentData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIEquipmentData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIEquipmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_EquippableConfigArray_Inner = { "EquippableConfigArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_EquippableConfigArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIEquipmentData" },
		{ "ModuleRelativePath", "Public/SBZAIEquipmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_EquippableConfigArray = { "EquippableConfigArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIEquipmentData, EquippableConfigArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_EquippableConfigArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_EquippableConfigArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_ThrowableConfigArray_Inner = { "ThrowableConfigArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZThrowableConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_ThrowableConfigArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIEquipmentData" },
		{ "ModuleRelativePath", "Public/SBZAIEquipmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_ThrowableConfigArray = { "ThrowableConfigArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIEquipmentData, ThrowableConfigArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_ThrowableConfigArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_ThrowableConfigArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_ThrowableCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIEquipmentData" },
		{ "ModuleRelativePath", "Public/SBZAIEquipmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_ThrowableCooldown = { "ThrowableCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIEquipmentData, ThrowableCooldown), METADATA_PARAMS(Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_ThrowableCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_ThrowableCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIEquipmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_EquippableConfigArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_EquippableConfigArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_ThrowableConfigArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_ThrowableConfigArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIEquipmentData_Statics::NewProp_ThrowableCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIEquipmentData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIEquipmentData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIEquipmentData_Statics::ClassParams = {
		&USBZAIEquipmentData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIEquipmentData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIEquipmentData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIEquipmentData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIEquipmentData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIEquipmentData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIEquipmentData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIEquipmentData, 2264244948);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIEquipmentData>()
	{
		return USBZAIEquipmentData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIEquipmentData(Z_Construct_UClass_USBZAIEquipmentData, &USBZAIEquipmentData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIEquipmentData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIEquipmentData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
