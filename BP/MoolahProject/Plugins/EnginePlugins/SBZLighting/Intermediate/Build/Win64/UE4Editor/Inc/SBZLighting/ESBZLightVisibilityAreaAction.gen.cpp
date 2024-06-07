// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZLighting/Public/ESBZLightVisibilityAreaAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZLightVisibilityAreaAction() {}
// Cross Module References
	SBZLIGHTING_API UEnum* Z_Construct_UEnum_SBZLighting_ESBZLightVisibilityAreaAction();
	UPackage* Z_Construct_UPackage__Script_SBZLighting();
// End Cross Module References
	static UEnum* ESBZLightVisibilityAreaAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SBZLighting_ESBZLightVisibilityAreaAction, Z_Construct_UPackage__Script_SBZLighting(), TEXT("ESBZLightVisibilityAreaAction"));
		}
		return Singleton;
	}
	template<> SBZLIGHTING_API UEnum* StaticEnum<ESBZLightVisibilityAreaAction::Type>()
	{
		return ESBZLightVisibilityAreaAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZLightVisibilityAreaAction(ESBZLightVisibilityAreaAction_StaticEnum, TEXT("/Script/SBZLighting"), TEXT("ESBZLightVisibilityAreaAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SBZLighting_ESBZLightVisibilityAreaAction_Hash() { return 2629018707U; }
	UEnum* Z_Construct_UEnum_SBZLighting_ESBZLightVisibilityAreaAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SBZLighting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZLightVisibilityAreaAction"), 0, Get_Z_Construct_UEnum_SBZLighting_ESBZLightVisibilityAreaAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZLightVisibilityAreaAction::Enable", (int64)ESBZLightVisibilityAreaAction::Enable },
				{ "ESBZLightVisibilityAreaAction::EnableShadows", (int64)ESBZLightVisibilityAreaAction::EnableShadows },
				{ "ESBZLightVisibilityAreaAction::Disable", (int64)ESBZLightVisibilityAreaAction::Disable },
				{ "ESBZLightVisibilityAreaAction::Max", (int64)ESBZLightVisibilityAreaAction::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disable.Name", "ESBZLightVisibilityAreaAction::Disable" },
				{ "Enable.Name", "ESBZLightVisibilityAreaAction::Enable" },
				{ "EnableShadows.Name", "ESBZLightVisibilityAreaAction::EnableShadows" },
				{ "Max.Name", "ESBZLightVisibilityAreaAction::Max" },
				{ "ModuleRelativePath", "Public/ESBZLightVisibilityAreaAction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SBZLighting,
				nullptr,
				"ESBZLightVisibilityAreaAction",
				"ESBZLightVisibilityAreaAction::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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
