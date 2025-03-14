// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZShownPopupInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZShownPopupInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZShownPopupInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIPopupData();
// End Cross Module References
class UScriptStruct* FSBZShownPopupInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZShownPopupInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZShownPopupInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZShownPopupInfo"), sizeof(FSBZShownPopupInfo), Get_Z_Construct_UScriptStruct_FSBZShownPopupInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZShownPopupInfo>()
{
	return FSBZShownPopupInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZShownPopupInfo(FSBZShownPopupInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZShownPopupInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZShownPopupInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZShownPopupInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZShownPopupInfo>(FName(TEXT("SBZShownPopupInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZShownPopupInfo;
	struct Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopupData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZShownPopupInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZShownPopupInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::NewProp_PopupData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShownPopupInfo" },
		{ "ModuleRelativePath", "Public/SBZShownPopupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::NewProp_PopupData = { "PopupData", nullptr, (EPropertyFlags)0x0010008000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZShownPopupInfo, PopupData), Z_Construct_UScriptStruct_FSBZUIPopupData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::NewProp_PopupData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::NewProp_PopupData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::NewProp_PopupData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZShownPopupInfo",
		sizeof(FSBZShownPopupInfo),
		alignof(FSBZShownPopupInfo),
		Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZShownPopupInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZShownPopupInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZShownPopupInfo"), sizeof(FSBZShownPopupInfo), Get_Z_Construct_UScriptStruct_FSBZShownPopupInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZShownPopupInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZShownPopupInfo_Hash() { return 263613927U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
