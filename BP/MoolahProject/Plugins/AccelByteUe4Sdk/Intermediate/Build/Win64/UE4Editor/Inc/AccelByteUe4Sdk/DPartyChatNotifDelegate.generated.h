// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyMessageNotice;
#ifdef ACCELBYTEUE4SDK_DPartyChatNotifDelegate_generated_h
#error "DPartyChatNotifDelegate.generated.h already included, missing '#pragma once' in DPartyChatNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyChatNotifDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyChatNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyChatNotif_Parms \
{ \
	FAccelByteModelsPartyMessageNotice Notif; \
}; \
static inline void FDPartyChatNotif_DelegateWrapper(const FScriptDelegate& DPartyChatNotif, FAccelByteModelsPartyMessageNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyChatNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DPartyChatNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyChatNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
