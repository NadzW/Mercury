// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMilestoneData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMilestoneData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMilestoneData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZMilestoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMilestoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMilestoneData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMilestoneData"), sizeof(FSBZMilestoneData), Get_Z_Construct_UScriptStruct_FSBZMilestoneData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMilestoneData>()
{
	return FSBZMilestoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMilestoneData(FSBZMilestoneData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMilestoneData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMilestoneData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMilestoneData()
	{
		UScriptStruct::DeferCppStructOps<FSBZMilestoneData>(FName(TEXT("SBZMilestoneData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMilestoneData;
	struct Z_Construct_UScriptStruct_FSBZMilestoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MilestoneId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompleted_MetaData[];
#endif
		static void NewProp_bCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMilestoneData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMilestoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewProp_MilestoneId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMilestoneData" },
		{ "ModuleRelativePath", "Public/SBZMilestoneData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewProp_MilestoneId = { "MilestoneId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMilestoneData, MilestoneId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewProp_MilestoneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewProp_MilestoneId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewProp_bCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMilestoneData" },
		{ "ModuleRelativePath", "Public/SBZMilestoneData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewProp_bCompleted_SetBit(void* Obj)
	{
		((FSBZMilestoneData*)Obj)->bCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewProp_bCompleted = { "bCompleted", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZMilestoneData), &Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewProp_bCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewProp_bCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewProp_bCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewProp_MilestoneId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::NewProp_bCompleted,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMilestoneData",
		sizeof(FSBZMilestoneData),
		alignof(FSBZMilestoneData),
		Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMilestoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMilestoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMilestoneData"), sizeof(FSBZMilestoneData), Get_Z_Construct_UScriptStruct_FSBZMilestoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMilestoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMilestoneData_Hash() { return 3077439547U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
