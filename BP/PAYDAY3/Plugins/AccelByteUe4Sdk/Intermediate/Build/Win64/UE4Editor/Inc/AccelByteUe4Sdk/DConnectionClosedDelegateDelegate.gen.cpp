// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/DConnectionClosedDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDConnectionClosedDelegateDelegate() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics
	{
		struct _Script_AccelByteUe4Sdk_eventDConnectionClosedDelegate_Parms
		{
			int32 StatusCode;
			FString Reason;
			bool bWasClean;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatusCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reason;
		static void NewProp_bWasClean_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasClean;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AccelByteUe4Sdk_eventDConnectionClosedDelegate_Parms, StatusCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AccelByteUe4Sdk_eventDConnectionClosedDelegate_Parms, Reason), METADATA_PARAMS(Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::NewProp_Reason_MetaData)) };
	void Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::NewProp_bWasClean_SetBit(void* Obj)
	{
		((_Script_AccelByteUe4Sdk_eventDConnectionClosedDelegate_Parms*)Obj)->bWasClean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_AccelByteUe4Sdk_eventDConnectionClosedDelegate_Parms), &Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::NewProp_StatusCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::NewProp_bWasClean,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DConnectionClosedDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk, nullptr, "DConnectionClosedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AccelByteUe4Sdk_eventDConnectionClosedDelegate_Parms), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
