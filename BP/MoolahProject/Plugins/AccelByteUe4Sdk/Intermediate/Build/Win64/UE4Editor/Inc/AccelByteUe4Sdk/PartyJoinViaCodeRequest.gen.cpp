// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/PartyJoinViaCodeRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyJoinViaCodeRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FPartyJoinViaCodeRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("PartyJoinViaCodeRequest"), sizeof(FPartyJoinViaCodeRequest), Get_Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FPartyJoinViaCodeRequest>()
{
	return FPartyJoinViaCodeRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPartyJoinViaCodeRequest(FPartyJoinViaCodeRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("PartyJoinViaCodeRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPartyJoinViaCodeRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPartyJoinViaCodeRequest()
	{
		UScriptStruct::DeferCppStructOps<FPartyJoinViaCodeRequest>(FName(TEXT("PartyJoinViaCodeRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPartyJoinViaCodeRequest;
	struct Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_partyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_partyCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PartyJoinViaCodeRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyJoinViaCodeRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::NewProp_partyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyJoinViaCodeRequest" },
		{ "ModuleRelativePath", "Public/PartyJoinViaCodeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::NewProp_partyCode = { "partyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyJoinViaCodeRequest, partyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::NewProp_partyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::NewProp_partyCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::NewProp_partyCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"PartyJoinViaCodeRequest",
		sizeof(FPartyJoinViaCodeRequest),
		alignof(FPartyJoinViaCodeRequest),
		Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PartyJoinViaCodeRequest"), sizeof(FPartyJoinViaCodeRequest), Get_Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPartyJoinViaCodeRequest_Hash() { return 2569280959U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
