// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateJobOverviewDirectJoin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateJobOverviewDirectJoin() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EBlackScreenTransitionType();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZJobOverviewBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMissionState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateJobOverviewDirectJoin::execClientShowBlackScreen)
	{
		P_GET_ENUM(EBlackScreenTransitionType,Z_Param_BlackScreenTransitionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientShowBlackScreen(EBlackScreenTransitionType(Z_Param_BlackScreenTransitionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverviewDirectJoin::execEnableReadyButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableReadyButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateJobOverviewDirectJoin::execOnHandleBeginPlayState)
	{
		P_GET_OBJECT(ASBZPlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHandleBeginPlayState(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void USBZStateMachineStateJobOverviewDirectJoin::StaticRegisterNativesUSBZStateMachineStateJobOverviewDirectJoin()
	{
		UClass* Class = USBZStateMachineStateJobOverviewDirectJoin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientShowBlackScreen", &USBZStateMachineStateJobOverviewDirectJoin::execClientShowBlackScreen },
			{ "EnableReadyButton", &USBZStateMachineStateJobOverviewDirectJoin::execEnableReadyButton },
			{ "OnHandleBeginPlayState", &USBZStateMachineStateJobOverviewDirectJoin::execOnHandleBeginPlayState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics
	{
		struct SBZStateMachineStateJobOverviewDirectJoin_eventClientShowBlackScreen_Parms
		{
			EBlackScreenTransitionType BlackScreenTransitionType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlackScreenTransitionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlackScreenTransitionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics::NewProp_BlackScreenTransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics::NewProp_BlackScreenTransitionType = { "BlackScreenTransitionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverviewDirectJoin_eventClientShowBlackScreen_Parms, BlackScreenTransitionType), Z_Construct_UEnum_Starbreeze_EBlackScreenTransitionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics::NewProp_BlackScreenTransitionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics::NewProp_BlackScreenTransitionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverviewDirectJoin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin, nullptr, "ClientShowBlackScreen", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverviewDirectJoin_eventClientShowBlackScreen_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_EnableReadyButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_EnableReadyButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverviewDirectJoin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_EnableReadyButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin, nullptr, "EnableReadyButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_EnableReadyButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_EnableReadyButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_EnableReadyButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_EnableReadyButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState_Statics
	{
		struct SBZStateMachineStateJobOverviewDirectJoin_eventOnHandleBeginPlayState_Parms
		{
			ASBZPlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateJobOverviewDirectJoin_eventOnHandleBeginPlayState_Parms, PlayerController), Z_Construct_UClass_ASBZPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverviewDirectJoin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin, nullptr, "OnHandleBeginPlayState", nullptr, nullptr, sizeof(SBZStateMachineStateJobOverviewDirectJoin_eventOnHandleBeginPlayState_Parms), Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_NoRegister()
	{
		return USBZStateMachineStateJobOverviewDirectJoin::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JobOverviewWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JobOverviewWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MissionState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_ClientShowBlackScreen, "ClientShowBlackScreen" }, // 1418204551
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_EnableReadyButton, "EnableReadyButton" }, // 1448698995
		{ &Z_Construct_UFunction_USBZStateMachineStateJobOverviewDirectJoin_OnHandleBeginPlayState, "OnHandleBeginPlayState" }, // 3348962474
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateJobOverviewDirectJoin.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverviewDirectJoin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::NewProp_JobOverviewWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateJobOverviewDirectJoin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverviewDirectJoin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::NewProp_JobOverviewWidget = { "JobOverviewWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateJobOverviewDirectJoin, JobOverviewWidget), Z_Construct_UClass_USBZJobOverviewBaseWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::NewProp_JobOverviewWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::NewProp_JobOverviewWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::NewProp_MissionState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateJobOverviewDirectJoin" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateJobOverviewDirectJoin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::NewProp_MissionState = { "MissionState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateJobOverviewDirectJoin, MissionState), Z_Construct_UClass_ASBZMissionState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::NewProp_MissionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::NewProp_MissionState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::NewProp_JobOverviewWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::NewProp_MissionState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateJobOverviewDirectJoin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::ClassParams = {
		&USBZStateMachineStateJobOverviewDirectJoin::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateJobOverviewDirectJoin, 3363929202);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateJobOverviewDirectJoin>()
	{
		return USBZStateMachineStateJobOverviewDirectJoin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateJobOverviewDirectJoin(Z_Construct_UClass_USBZStateMachineStateJobOverviewDirectJoin, &USBZStateMachineStateJobOverviewDirectJoin::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateJobOverviewDirectJoin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateJobOverviewDirectJoin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
