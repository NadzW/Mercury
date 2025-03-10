// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCoverShootingPoints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCoverShootingPoints() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCoverShootingPoints();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZShootingPointType();
// End Cross Module References
class UScriptStruct* FSBZCoverShootingPoints::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCoverShootingPoints, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCoverShootingPoints"), sizeof(FSBZCoverShootingPoints), Get_Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCoverShootingPoints>()
{
	return FSBZCoverShootingPoints::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCoverShootingPoints(FSBZCoverShootingPoints::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCoverShootingPoints"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCoverShootingPoints
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCoverShootingPoints()
	{
		UScriptStruct::DeferCppStructOps<FSBZCoverShootingPoints>(FName(TEXT("SBZCoverShootingPoints")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCoverShootingPoints;
	struct Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLineTraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLineTraceLength;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShootingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ShootingType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCoverShootingPoints.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCoverShootingPoints>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverShootingPoints" },
		{ "ModuleRelativePath", "Public/SBZCoverShootingPoints.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCoverShootingPoints, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_MaxLineTraceLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverShootingPoints" },
		{ "ModuleRelativePath", "Public/SBZCoverShootingPoints.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_MaxLineTraceLength = { "MaxLineTraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCoverShootingPoints, MaxLineTraceLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_MaxLineTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_MaxLineTraceLength_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_ShootingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_ShootingType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverShootingPoints" },
		{ "ModuleRelativePath", "Public/SBZCoverShootingPoints.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_ShootingType = { "ShootingType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCoverShootingPoints, ShootingType), Z_Construct_UEnum_Starbreeze_ESBZShootingPointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_ShootingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_ShootingType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_MaxLineTraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_ShootingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::NewProp_ShootingType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCoverShootingPoints",
		sizeof(FSBZCoverShootingPoints),
		alignof(FSBZCoverShootingPoints),
		Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCoverShootingPoints()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCoverShootingPoints"), sizeof(FSBZCoverShootingPoints), Get_Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCoverShootingPoints_Hash() { return 3388880290U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
