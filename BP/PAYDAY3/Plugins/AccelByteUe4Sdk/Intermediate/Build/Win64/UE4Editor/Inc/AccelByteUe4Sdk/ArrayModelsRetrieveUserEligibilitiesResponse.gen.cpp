// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ArrayModelsRetrieveUserEligibilitiesResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrayModelsRetrieveUserEligibilitiesResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse();
// End Cross Module References
class UScriptStruct* FArrayModelsRetrieveUserEligibilitiesResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("ArrayModelsRetrieveUserEligibilitiesResponse"), sizeof(FArrayModelsRetrieveUserEligibilitiesResponse), Get_Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FArrayModelsRetrieveUserEligibilitiesResponse>()
{
	return FArrayModelsRetrieveUserEligibilitiesResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse(FArrayModelsRetrieveUserEligibilitiesResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("ArrayModelsRetrieveUserEligibilitiesResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFArrayModelsRetrieveUserEligibilitiesResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFArrayModelsRetrieveUserEligibilitiesResponse()
	{
		UScriptStruct::DeferCppStructOps<FArrayModelsRetrieveUserEligibilitiesResponse>(FName(TEXT("ArrayModelsRetrieveUserEligibilitiesResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFArrayModelsRetrieveUserEligibilitiesResponse;
	struct Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArrayModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayModelsRetrieveUserEligibilitiesResponse>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Content_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArrayModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/ArrayModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArrayModelsRetrieveUserEligibilitiesResponse, Content), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Content_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Content,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"ArrayModelsRetrieveUserEligibilitiesResponse",
		sizeof(FArrayModelsRetrieveUserEligibilitiesResponse),
		alignof(FArrayModelsRetrieveUserEligibilitiesResponse),
		Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArrayModelsRetrieveUserEligibilitiesResponse"), sizeof(FArrayModelsRetrieveUserEligibilitiesResponse), Get_Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArrayModelsRetrieveUserEligibilitiesResponse_Hash() { return 1919841235U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
