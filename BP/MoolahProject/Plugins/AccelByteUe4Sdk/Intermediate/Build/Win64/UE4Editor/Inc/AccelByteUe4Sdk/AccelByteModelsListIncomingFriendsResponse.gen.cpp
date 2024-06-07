// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsListIncomingFriendsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsListIncomingFriendsResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLobbyBaseResponse();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsListIncomingFriendsResponse>() == std::is_polymorphic<FAccelByteModelsLobbyBaseResponse>(), "USTRUCT FAccelByteModelsListIncomingFriendsResponse cannot be polymorphic unless super FAccelByteModelsLobbyBaseResponse is polymorphic");

class UScriptStruct* FAccelByteModelsListIncomingFriendsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsListIncomingFriendsResponse"), sizeof(FAccelByteModelsListIncomingFriendsResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsListIncomingFriendsResponse>()
{
	return FAccelByteModelsListIncomingFriendsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse(FAccelByteModelsListIncomingFriendsResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsListIncomingFriendsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsListIncomingFriendsResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsListIncomingFriendsResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsListIncomingFriendsResponse>(FName(TEXT("AccelByteModelsListIncomingFriendsResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsListIncomingFriendsResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendsId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_friendsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsListIncomingFriendsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsListIncomingFriendsResponse>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::NewProp_friendsId_Inner = { "friendsId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::NewProp_friendsId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsListIncomingFriendsResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsListIncomingFriendsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::NewProp_friendsId = { "friendsId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsListIncomingFriendsResponse, friendsId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::NewProp_friendsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::NewProp_friendsId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::NewProp_friendsId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::NewProp_friendsId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsLobbyBaseResponse,
		&NewStructOps,
		"AccelByteModelsListIncomingFriendsResponse",
		sizeof(FAccelByteModelsListIncomingFriendsResponse),
		alignof(FAccelByteModelsListIncomingFriendsResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsListIncomingFriendsResponse"), sizeof(FAccelByteModelsListIncomingFriendsResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsListIncomingFriendsResponse_Hash() { return 3927524572U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
