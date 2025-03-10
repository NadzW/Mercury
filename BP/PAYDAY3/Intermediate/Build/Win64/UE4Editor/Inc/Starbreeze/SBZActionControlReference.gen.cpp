// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActionControlReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActionControlReference() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActionControlReference();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBaseControlReference();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZActionControlReference>() == std::is_polymorphic<FSBZBaseControlReference>(), "USTRUCT FSBZActionControlReference cannot be polymorphic unless super FSBZBaseControlReference is polymorphic");

class UScriptStruct* FSBZActionControlReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZActionControlReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZActionControlReference, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZActionControlReference"), sizeof(FSBZActionControlReference), Get_Z_Construct_UScriptStruct_FSBZActionControlReference_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZActionControlReference>()
{
	return FSBZActionControlReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZActionControlReference(FSBZActionControlReference::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZActionControlReference"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActionControlReference
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActionControlReference()
	{
		UScriptStruct::DeferCppStructOps<FSBZActionControlReference>(FName(TEXT("SBZActionControlReference")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZActionControlReference;
	struct Z_Construct_UScriptStruct_FSBZActionControlReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZActionControlReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZActionControlReference>();
	}
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::NewProp_ActionList_Inner = { "ActionList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::NewProp_ActionList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionControlReference" },
		{ "ModuleRelativePath", "Public/SBZActionControlReference.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::NewProp_ActionList = { "ActionList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActionControlReference, ActionList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::NewProp_ActionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::NewProp_ActionList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::NewProp_ActionList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::NewProp_ActionList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZBaseControlReference,
		&NewStructOps,
		"SBZActionControlReference",
		sizeof(FSBZActionControlReference),
		alignof(FSBZActionControlReference),
		Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZActionControlReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZActionControlReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZActionControlReference"), sizeof(FSBZActionControlReference), Get_Z_Construct_UScriptStruct_FSBZActionControlReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZActionControlReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZActionControlReference_Hash() { return 1379154876U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
