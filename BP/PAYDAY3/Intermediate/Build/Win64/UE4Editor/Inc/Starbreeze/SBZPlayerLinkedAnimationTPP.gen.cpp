// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerLinkedAnimationTPP.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerLinkedAnimationTPP() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerLinkedAnimationTPP();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterLinkedAnimation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler();
// End Cross Module References
	void USBZPlayerLinkedAnimationTPP::StaticRegisterNativesUSBZPlayerLinkedAnimationTPP()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_NoRegister()
	{
		return USBZPlayerLinkedAnimationTPP::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyAimRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperBodyAimRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatStateAnimationHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefeatStateAnimationHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCharacterLinkedAnimation,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZPlayerLinkedAnimationTPP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerLinkedAnimationTPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_UpperBodyAimRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLinkedAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerLinkedAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_UpperBodyAimRotation = { "UpperBodyAimRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerLinkedAnimationTPP, UpperBodyAimRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_UpperBodyAimRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_UpperBodyAimRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_Player_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLinkedAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerLinkedAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerLinkedAnimationTPP, Player), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_DefeatStateAnimationHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLinkedAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerLinkedAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_DefeatStateAnimationHandler = { "DefeatStateAnimationHandler", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerLinkedAnimationTPP, DefeatStateAnimationHandler), Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_DefeatStateAnimationHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_DefeatStateAnimationHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_UpperBodyAimRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::NewProp_DefeatStateAnimationHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerLinkedAnimationTPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::ClassParams = {
		&USBZPlayerLinkedAnimationTPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerLinkedAnimationTPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerLinkedAnimationTPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerLinkedAnimationTPP, 573871687);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerLinkedAnimationTPP>()
	{
		return USBZPlayerLinkedAnimationTPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerLinkedAnimationTPP(Z_Construct_UClass_USBZPlayerLinkedAnimationTPP, &USBZPlayerLinkedAnimationTPP::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerLinkedAnimationTPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerLinkedAnimationTPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
