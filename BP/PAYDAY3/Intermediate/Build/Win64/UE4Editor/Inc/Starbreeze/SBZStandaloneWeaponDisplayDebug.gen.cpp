// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStandaloneWeaponDisplayDebug.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStandaloneWeaponDisplayDebug() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStandaloneWeaponDisplay();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPresetConfigData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDebugModularConfigItem();
// End Cross Module References
	DEFINE_FUNCTION(ASBZStandaloneWeaponDisplayDebug::execSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup();
		P_NATIVE_END;
	}
	void ASBZStandaloneWeaponDisplayDebug::StaticRegisterNativesASBZStandaloneWeaponDisplayDebug()
	{
		UClass* Class = ASBZStandaloneWeaponDisplayDebug::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Setup", &ASBZStandaloneWeaponDisplayDebug::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZStandaloneWeaponDisplayDebug_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneWeaponDisplayDebug_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStandaloneWeaponDisplayDebug_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug, nullptr, "Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneWeaponDisplayDebug_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplayDebug_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStandaloneWeaponDisplayDebug_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStandaloneWeaponDisplayDebug_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_NoRegister()
	{
		return ASBZStandaloneWeaponDisplayDebug::StaticClass();
	}
	struct Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZStandaloneWeaponDisplay,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZStandaloneWeaponDisplayDebug_Setup, "Setup" }, // 3905940375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStandaloneWeaponDisplayDebug.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplayDebug.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_WeaponPreset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneWeaponDisplayDebug" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_WeaponPreset = { "WeaponPreset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneWeaponDisplayDebug, WeaponPreset), Z_Construct_UClass_USBZWeaponPresetConfigData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_WeaponPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_WeaponPreset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_WeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneWeaponDisplayDebug" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneWeaponDisplayDebug, WeaponData), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_WeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_WeaponData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_ModData_Inner = { "ModData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDebugModularConfigItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_ModData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneWeaponDisplayDebug" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_ModData = { "ModData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneWeaponDisplayDebug, ModData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_ModData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_ModData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_WeaponPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_ModData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::NewProp_ModData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZStandaloneWeaponDisplayDebug>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::ClassParams = {
		&ASBZStandaloneWeaponDisplayDebug::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZStandaloneWeaponDisplayDebug, 527322965);
	template<> STARBREEZE_API UClass* StaticClass<ASBZStandaloneWeaponDisplayDebug>()
	{
		return ASBZStandaloneWeaponDisplayDebug::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZStandaloneWeaponDisplayDebug(Z_Construct_UClass_ASBZStandaloneWeaponDisplayDebug, &ASBZStandaloneWeaponDisplayDebug::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZStandaloneWeaponDisplayDebug"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZStandaloneWeaponDisplayDebug);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
