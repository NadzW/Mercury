// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteSeasonPassStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteSeasonPassStatus() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSeasonPassStatus();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteSeasonPassStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSeasonPassStatus, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteSeasonPassStatus"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteSeasonPassStatus>()
	{
		return EAccelByteSeasonPassStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteSeasonPassStatus(EAccelByteSeasonPassStatus_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteSeasonPassStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSeasonPassStatus_Hash() { return 2597050930U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSeasonPassStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteSeasonPassStatus"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSeasonPassStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteSeasonPassStatus::DRAFT", (int64)EAccelByteSeasonPassStatus::DRAFT },
				{ "EAccelByteSeasonPassStatus::PUBLISHED", (int64)EAccelByteSeasonPassStatus::PUBLISHED },
				{ "EAccelByteSeasonPassStatus::RETIRED", (int64)EAccelByteSeasonPassStatus::RETIRED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DRAFT.Name", "EAccelByteSeasonPassStatus::DRAFT" },
				{ "ModuleRelativePath", "Public/EAccelByteSeasonPassStatus.h" },
				{ "PUBLISHED.Name", "EAccelByteSeasonPassStatus::PUBLISHED" },
				{ "RETIRED.Name", "EAccelByteSeasonPassStatus::RETIRED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteSeasonPassStatus",
				"EAccelByteSeasonPassStatus",
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
