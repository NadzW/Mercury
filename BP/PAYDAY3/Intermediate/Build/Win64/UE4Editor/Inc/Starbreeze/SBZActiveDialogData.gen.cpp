// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActiveDialogData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActiveDialogData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActiveDialogData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZActiveDialogData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZActiveDialogData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZActiveDialogData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZActiveDialogData"), sizeof(FSBZActiveDialogData), Get_Z_Construct_UScriptStruct_FSBZActiveDialogData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZActiveDialogData>()
{
	return FSBZActiveDialogData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZActiveDialogData(FSBZActiveDialogData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZActiveDialogData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActiveDialogData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActiveDialogData()
	{
		UScriptStruct::DeferCppStructOps<FSBZActiveDialogData>(FName(TEXT("SBZActiveDialogData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZActiveDialogData;
	struct Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogDataAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Performers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Performers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Performers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZActiveDialogData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZActiveDialogData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewProp_DialogDataAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActiveDialogData" },
		{ "ModuleRelativePath", "Public/SBZActiveDialogData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewProp_DialogDataAsset = { "DialogDataAsset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActiveDialogData, DialogDataAsset), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewProp_DialogDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewProp_DialogDataAsset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewProp_Performers_Inner = { "Performers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewProp_Performers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActiveDialogData" },
		{ "ModuleRelativePath", "Public/SBZActiveDialogData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewProp_Performers = { "Performers", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActiveDialogData, Performers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewProp_Performers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewProp_Performers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewProp_DialogDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewProp_Performers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::NewProp_Performers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZActiveDialogData",
		sizeof(FSBZActiveDialogData),
		alignof(FSBZActiveDialogData),
		Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZActiveDialogData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZActiveDialogData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZActiveDialogData"), sizeof(FSBZActiveDialogData), Get_Z_Construct_UScriptStruct_FSBZActiveDialogData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZActiveDialogData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZActiveDialogData_Hash() { return 905252859U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
