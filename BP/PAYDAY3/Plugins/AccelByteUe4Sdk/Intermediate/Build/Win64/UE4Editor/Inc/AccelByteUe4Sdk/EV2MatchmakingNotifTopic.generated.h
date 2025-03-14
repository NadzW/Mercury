// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EV2MatchmakingNotifTopic_generated_h
#error "EV2MatchmakingNotifTopic.generated.h already included, missing '#pragma once' in EV2MatchmakingNotifTopic.h"
#endif
#define ACCELBYTEUE4SDK_EV2MatchmakingNotifTopic_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EV2MatchmakingNotifTopic_h


#define FOREACH_ENUM_EV2MATCHMAKINGNOTIFTOPIC(op) \
	op(EV2MatchmakingNotifTopic::Invalid) \
	op(EV2MatchmakingNotifTopic::OnMatchFound) \
	op(EV2MatchmakingNotifTopic::OnMatchmakingStarted) \
	op(EV2MatchmakingNotifTopic::OnMatchmakingTicketExpired) \
	op(EV2MatchmakingNotifTopic::OnMatchmakingTicketCanceled) 

enum class EV2MatchmakingNotifTopic : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EV2MatchmakingNotifTopic>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
