// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRevertDamageAttributeSetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRevertDamageAttributeSetData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZRevertDamageAttributeSetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRevertDamageAttributeSetData"), sizeof(FSBZRevertDamageAttributeSetData), Get_Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRevertDamageAttributeSetData>()
{
	return FSBZRevertDamageAttributeSetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRevertDamageAttributeSetData(FSBZRevertDamageAttributeSetData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRevertDamageAttributeSetData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRevertDamageAttributeSetData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRevertDamageAttributeSetData()
	{
		UScriptStruct::DeferCppStructOps<FSBZRevertDamageAttributeSetData>(FName(TEXT("SBZRevertDamageAttributeSetData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRevertDamageAttributeSetData;
	struct Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRevertDamageAttributeSetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRevertDamageAttributeSetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRevertDamageAttributeSetData" },
		{ "ModuleRelativePath", "Public/SBZRevertDamageAttributeSetData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRevertDamageAttributeSetData, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewProp_ByteArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRevertDamageAttributeSetData" },
		{ "ModuleRelativePath", "Public/SBZRevertDamageAttributeSetData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRevertDamageAttributeSetData, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewProp_ByteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewProp_ByteArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewProp_ByteArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::NewProp_ByteArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRevertDamageAttributeSetData",
		sizeof(FSBZRevertDamageAttributeSetData),
		alignof(FSBZRevertDamageAttributeSetData),
		Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRevertDamageAttributeSetData"), sizeof(FSBZRevertDamageAttributeSetData), Get_Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData_Hash() { return 3494364771U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
