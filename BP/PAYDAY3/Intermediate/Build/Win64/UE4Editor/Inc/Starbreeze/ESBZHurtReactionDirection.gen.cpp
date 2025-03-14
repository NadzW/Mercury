// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZHurtReactionDirection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZHurtReactionDirection() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHurtReactionDirection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZHurtReactionDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZHurtReactionDirection, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZHurtReactionDirection"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZHurtReactionDirection>()
	{
		return ESBZHurtReactionDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZHurtReactionDirection(ESBZHurtReactionDirection_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZHurtReactionDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZHurtReactionDirection_Hash() { return 2788743504U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZHurtReactionDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZHurtReactionDirection"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZHurtReactionDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZHurtReactionDirection::Forward", (int64)ESBZHurtReactionDirection::Forward },
				{ "ESBZHurtReactionDirection::Right", (int64)ESBZHurtReactionDirection::Right },
				{ "ESBZHurtReactionDirection::Backward", (int64)ESBZHurtReactionDirection::Backward },
				{ "ESBZHurtReactionDirection::Left", (int64)ESBZHurtReactionDirection::Left },
				{ "ESBZHurtReactionDirection::MAX", (int64)ESBZHurtReactionDirection::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Backward.Name", "ESBZHurtReactionDirection::Backward" },
				{ "BlueprintType", "true" },
				{ "Forward.Name", "ESBZHurtReactionDirection::Forward" },
				{ "Left.Name", "ESBZHurtReactionDirection::Left" },
				{ "MAX.Name", "ESBZHurtReactionDirection::MAX" },
				{ "ModuleRelativePath", "Public/ESBZHurtReactionDirection.h" },
				{ "Right.Name", "ESBZHurtReactionDirection::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZHurtReactionDirection",
				"ESBZHurtReactionDirection",
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
