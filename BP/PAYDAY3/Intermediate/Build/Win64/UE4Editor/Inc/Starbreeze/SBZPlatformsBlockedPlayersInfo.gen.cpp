// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlatformsBlockedPlayersInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlatformsBlockedPlayersInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBlockedPlayers();
// End Cross Module References
class UScriptStruct* FSBZPlatformsBlockedPlayersInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlatformsBlockedPlayersInfo"), sizeof(FSBZPlatformsBlockedPlayersInfo), Get_Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlatformsBlockedPlayersInfo>()
{
	return FSBZPlatformsBlockedPlayersInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo(FSBZPlatformsBlockedPlayersInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlatformsBlockedPlayersInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlatformsBlockedPlayersInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlatformsBlockedPlayersInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlatformsBlockedPlayersInfo>(FName(TEXT("SBZPlatformsBlockedPlayersInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlatformsBlockedPlayersInfo;
	struct Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlatformBlockedPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformBlockedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlatformBlockedPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlatformsBlockedPlayersInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlatformsBlockedPlayersInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::NewProp_PlatformBlockedPlayers_Inner = { "PlatformBlockedPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBlockedPlayers, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::NewProp_PlatformBlockedPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlatformsBlockedPlayersInfo" },
		{ "ModuleRelativePath", "Public/SBZPlatformsBlockedPlayersInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::NewProp_PlatformBlockedPlayers = { "PlatformBlockedPlayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlatformsBlockedPlayersInfo, PlatformBlockedPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::NewProp_PlatformBlockedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::NewProp_PlatformBlockedPlayers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::NewProp_PlatformBlockedPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::NewProp_PlatformBlockedPlayers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPlatformsBlockedPlayersInfo",
		sizeof(FSBZPlatformsBlockedPlayersInfo),
		alignof(FSBZPlatformsBlockedPlayersInfo),
		Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlatformsBlockedPlayersInfo"), sizeof(FSBZPlatformsBlockedPlayersInfo), Get_Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlatformsBlockedPlayersInfo_Hash() { return 558813885U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
