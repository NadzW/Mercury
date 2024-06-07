// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ArrayModelsBulkStatItemOperationResultResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrayModelsBulkStatItemOperationResultResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemOperationResult();
// End Cross Module References
class UScriptStruct* FArrayModelsBulkStatItemOperationResultResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("ArrayModelsBulkStatItemOperationResultResponse"), sizeof(FArrayModelsBulkStatItemOperationResultResponse), Get_Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FArrayModelsBulkStatItemOperationResultResponse>()
{
	return FArrayModelsBulkStatItemOperationResultResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse(FArrayModelsBulkStatItemOperationResultResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("ArrayModelsBulkStatItemOperationResultResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFArrayModelsBulkStatItemOperationResultResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFArrayModelsBulkStatItemOperationResultResponse()
	{
		UScriptStruct::DeferCppStructOps<FArrayModelsBulkStatItemOperationResultResponse>(FName(TEXT("ArrayModelsBulkStatItemOperationResultResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFArrayModelsBulkStatItemOperationResultResponse;
	struct Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Content_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArrayModelsBulkStatItemOperationResultResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayModelsBulkStatItemOperationResultResponse>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemOperationResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::NewProp_Content_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArrayModelsBulkStatItemOperationResultResponse" },
		{ "ModuleRelativePath", "Public/ArrayModelsBulkStatItemOperationResultResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArrayModelsBulkStatItemOperationResultResponse, Content), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::NewProp_Content_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::NewProp_Content,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"ArrayModelsBulkStatItemOperationResultResponse",
		sizeof(FArrayModelsBulkStatItemOperationResultResponse),
		alignof(FArrayModelsBulkStatItemOperationResultResponse),
		Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArrayModelsBulkStatItemOperationResultResponse"), sizeof(FArrayModelsBulkStatItemOperationResultResponse), Get_Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArrayModelsBulkStatItemOperationResultResponse_Hash() { return 2976628248U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
