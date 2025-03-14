// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_ConvertAchievementStatus_generated_h
#error "ConvertAchievementStatus.generated.h already included, missing '#pragma once' in ConvertAchievementStatus.h"
#endif
#define ACCELBYTEUE4SDK_ConvertAchievementStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ConvertAchievementStatus_h


#define FOREACH_ENUM_CONVERTACHIEVEMENTSTATUS(op) \
	op(ConvertAchievementStatus::NONE) \
	op(ConvertAchievementStatus::IN_PROGRESS) \
	op(ConvertAchievementStatus::UNLOCKED) 

enum class ConvertAchievementStatus : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<ConvertAchievementStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
