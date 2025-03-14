// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayAbility_CharacterTraverse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayAbility_CharacterTraverse() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterMovementComponent_NoRegister();
// End Cross Module References
	void USBZGameplayAbility_CharacterTraverse::StaticRegisterNativesUSBZGameplayAbility_CharacterTraverse()
	{
	}
	UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_NoRegister()
	{
		return USBZGameplayAbility_CharacterTraverse::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeTrajectoryOnActivationAttempt_MetaData[];
#endif
		static void NewProp_bComputeTrajectoryOnActivationAttempt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeTrajectoryOnActivationAttempt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameplayAbility_CharacterTraverse.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility_CharacterTraverse.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::NewProp_bComputeTrajectoryOnActivationAttempt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility_CharacterTraverse" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility_CharacterTraverse.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::NewProp_bComputeTrajectoryOnActivationAttempt_SetBit(void* Obj)
	{
		((USBZGameplayAbility_CharacterTraverse*)Obj)->bComputeTrajectoryOnActivationAttempt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::NewProp_bComputeTrajectoryOnActivationAttempt = { "bComputeTrajectoryOnActivationAttempt", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameplayAbility_CharacterTraverse), &Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::NewProp_bComputeTrajectoryOnActivationAttempt_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::NewProp_bComputeTrajectoryOnActivationAttempt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::NewProp_bComputeTrajectoryOnActivationAttempt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility_CharacterTraverse" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility_CharacterTraverse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility_CharacterTraverse, MovementComponent), Z_Construct_UClass_USBZCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::NewProp_MovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::NewProp_bComputeTrajectoryOnActivationAttempt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::NewProp_MovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameplayAbility_CharacterTraverse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::ClassParams = {
		&USBZGameplayAbility_CharacterTraverse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameplayAbility_CharacterTraverse, 792015841);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameplayAbility_CharacterTraverse>()
	{
		return USBZGameplayAbility_CharacterTraverse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameplayAbility_CharacterTraverse(Z_Construct_UClass_USBZGameplayAbility_CharacterTraverse, &USBZGameplayAbility_CharacterTraverse::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameplayAbility_CharacterTraverse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameplayAbility_CharacterTraverse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
