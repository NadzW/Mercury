// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficSpawnerNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficSpawnerNode() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficSpline_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficRouteArray();
// End Cross Module References
class UScriptStruct* FSBZTrafficSpawnerNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficSpawnerNode"), sizeof(FSBZTrafficSpawnerNode), Get_Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficSpawnerNode>()
{
	return FSBZTrafficSpawnerNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficSpawnerNode(FSBZTrafficSpawnerNode::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficSpawnerNode"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficSpawnerNode
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficSpawnerNode()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficSpawnerNode>(FName(TEXT("SBZTrafficSpawnerNode")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficSpawnerNode;
	struct Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RouteArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RouteArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RouteArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DestinationArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RouteArrayGraph_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RouteArrayGraph_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RouteArrayGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RouteArrayGraph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficSpawnerNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficSpawnerNode>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArray_Inner = { "RouteArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSpawnerNode" },
		{ "ModuleRelativePath", "Public/SBZTrafficSpawnerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArray = { "RouteArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSpawnerNode, RouteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_DestinationArray_Inner = { "DestinationArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_DestinationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSpawnerNode" },
		{ "ModuleRelativePath", "Public/SBZTrafficSpawnerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_DestinationArray = { "DestinationArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSpawnerNode, DestinationArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_DestinationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_DestinationArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArrayGraph_ValueProp = { "RouteArrayGraph", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZTrafficRouteArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArrayGraph_Key_KeyProp = { "RouteArrayGraph_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArrayGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSpawnerNode" },
		{ "ModuleRelativePath", "Public/SBZTrafficSpawnerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArrayGraph = { "RouteArrayGraph", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSpawnerNode, RouteArrayGraph), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArrayGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArrayGraph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_DestinationArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_DestinationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArrayGraph_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArrayGraph_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::NewProp_RouteArrayGraph,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficSpawnerNode",
		sizeof(FSBZTrafficSpawnerNode),
		alignof(FSBZTrafficSpawnerNode),
		Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficSpawnerNode"), sizeof(FSBZTrafficSpawnerNode), Get_Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode_Hash() { return 1811773735U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
