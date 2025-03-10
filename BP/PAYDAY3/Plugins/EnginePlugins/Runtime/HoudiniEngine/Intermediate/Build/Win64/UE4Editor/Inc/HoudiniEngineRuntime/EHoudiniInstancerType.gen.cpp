// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniInstancerType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniInstancerType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniInstancerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInstancerType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInstancerType>()
	{
		return EHoudiniInstancerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniInstancerType(EHoudiniInstancerType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniInstancerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Hash() { return 318797547U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniInstancerType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniInstancerType::Invalid", (int64)EHoudiniInstancerType::Invalid },
				{ "EHoudiniInstancerType::ObjectInstancer", (int64)EHoudiniInstancerType::ObjectInstancer },
				{ "EHoudiniInstancerType::PackedPrimitive", (int64)EHoudiniInstancerType::PackedPrimitive },
				{ "EHoudiniInstancerType::AttributeInstancer", (int64)EHoudiniInstancerType::AttributeInstancer },
				{ "EHoudiniInstancerType::OldSchoolAttributeInstancer", (int64)EHoudiniInstancerType::OldSchoolAttributeInstancer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttributeInstancer.Name", "EHoudiniInstancerType::AttributeInstancer" },
				{ "BlueprintType", "true" },
				{ "Invalid.Name", "EHoudiniInstancerType::Invalid" },
				{ "ModuleRelativePath", "Public/EHoudiniInstancerType.h" },
				{ "ObjectInstancer.Name", "EHoudiniInstancerType::ObjectInstancer" },
				{ "OldSchoolAttributeInstancer.Name", "EHoudiniInstancerType::OldSchoolAttributeInstancer" },
				{ "PackedPrimitive.Name", "EHoudiniInstancerType::PackedPrimitive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniInstancerType",
				"EHoudiniInstancerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
