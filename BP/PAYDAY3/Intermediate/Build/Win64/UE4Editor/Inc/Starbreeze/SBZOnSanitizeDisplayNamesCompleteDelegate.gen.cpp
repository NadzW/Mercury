// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnSanitizeDisplayNamesCompleteDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnSanitizeDisplayNamesCompleteDelegate() {}
// Cross Module References
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics
	{
		struct _Script_Starbreeze_eventSBZOnSanitizeDisplayNamesComplete_Parms
		{
			TArray<FString> SanitizedDisplayNames;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SanitizedDisplayNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanitizedDisplayNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SanitizedDisplayNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::NewProp_SanitizedDisplayNames_Inner = { "SanitizedDisplayNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::NewProp_SanitizedDisplayNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::NewProp_SanitizedDisplayNames = { "SanitizedDisplayNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZOnSanitizeDisplayNamesComplete_Parms, SanitizedDisplayNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::NewProp_SanitizedDisplayNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::NewProp_SanitizedDisplayNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::NewProp_SanitizedDisplayNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::NewProp_SanitizedDisplayNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnSanitizeDisplayNamesCompleteDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Starbreeze, nullptr, "SBZOnSanitizeDisplayNamesComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_Starbreeze_eventSBZOnSanitizeDisplayNamesComplete_Parms), Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
