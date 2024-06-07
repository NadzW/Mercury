// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteMatchmakingSessionStatus_generated_h
#error "EAccelByteMatchmakingSessionStatus.generated.h already included, missing '#pragma once' in EAccelByteMatchmakingSessionStatus.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteMatchmakingSessionStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteMatchmakingSessionStatus_h


#define FOREACH_ENUM_EACCELBYTEMATCHMAKINGSESSIONSTATUS(op) \
	op(EAccelByteMatchmakingSessionStatus::None) \
	op(EAccelByteMatchmakingSessionStatus::Matched) \
	op(EAccelByteMatchmakingSessionStatus::Done) \
	op(EAccelByteMatchmakingSessionStatus::Cancel) \
	op(EAccelByteMatchmakingSessionStatus::Timeout) \
	op(EAccelByteMatchmakingSessionStatus::SessionInQueue) \
	op(EAccelByteMatchmakingSessionStatus::SessionFull) \
	op(EAccelByteMatchmakingSessionStatus::SessionTimeout) 

enum class EAccelByteMatchmakingSessionStatus : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteMatchmakingSessionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
