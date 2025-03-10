// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_CheckForRelocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_CheckForRelocation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_CheckForRelocation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_CheckForRelocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
// End Cross Module References
	void USBZBTService_CheckForRelocation::StaticRegisterNativesUSBZBTService_CheckForRelocation()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_CheckForRelocation_NoRegister()
	{
		return USBZBTService_CheckForRelocation::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyEQSRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyEQSRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HidingSpotEQSRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HidingSpotEQSRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_CheckForRelocation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_CheckForRelocation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_TargetBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_CheckForRelocation" },
		{ "ModuleRelativePath", "Public/SBZBTService_CheckForRelocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_TargetBBKey = { "TargetBBKey", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_CheckForRelocation, TargetBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_TargetBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_TargetBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_EnemyEQSRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_CheckForRelocation" },
		{ "ModuleRelativePath", "Public/SBZBTService_CheckForRelocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_EnemyEQSRequest = { "EnemyEQSRequest", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_CheckForRelocation, EnemyEQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_EnemyEQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_EnemyEQSRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_HidingSpotEQSRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_CheckForRelocation" },
		{ "ModuleRelativePath", "Public/SBZBTService_CheckForRelocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_HidingSpotEQSRequest = { "HidingSpotEQSRequest", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_CheckForRelocation, HidingSpotEQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_HidingSpotEQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_HidingSpotEQSRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_TargetBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_EnemyEQSRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::NewProp_HidingSpotEQSRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_CheckForRelocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::ClassParams = {
		&USBZBTService_CheckForRelocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_CheckForRelocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_CheckForRelocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_CheckForRelocation, 551105631);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_CheckForRelocation>()
	{
		return USBZBTService_CheckForRelocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_CheckForRelocation(Z_Construct_UClass_USBZBTService_CheckForRelocation, &USBZBTService_CheckForRelocation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_CheckForRelocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_CheckForRelocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
