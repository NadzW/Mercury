// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPaginatedUserGlobalAchievement;
#ifdef ACCELBYTEUE4SDK_DModelsPaginatedUserGlobalAchievementResponseDelegate_generated_h
#error "DModelsPaginatedUserGlobalAchievementResponseDelegate.generated.h already included, missing '#pragma once' in DModelsPaginatedUserGlobalAchievementResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsPaginatedUserGlobalAchievementResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedUserGlobalAchievementResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsPaginatedUserGlobalAchievementResponse_Parms \
{ \
	FAccelByteModelsPaginatedUserGlobalAchievement Response; \
}; \
static inline void FDModelsPaginatedUserGlobalAchievementResponse_DelegateWrapper(const FScriptDelegate& DModelsPaginatedUserGlobalAchievementResponse, FAccelByteModelsPaginatedUserGlobalAchievement Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsPaginatedUserGlobalAchievementResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsPaginatedUserGlobalAchievementResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedUserGlobalAchievementResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
