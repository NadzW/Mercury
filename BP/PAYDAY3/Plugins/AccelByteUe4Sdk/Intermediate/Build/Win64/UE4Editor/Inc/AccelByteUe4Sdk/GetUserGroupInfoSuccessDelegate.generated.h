// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetUserGroupInfoResponse;
#ifdef ACCELBYTEUE4SDK_GetUserGroupInfoSuccessDelegate_generated_h
#error "GetUserGroupInfoSuccessDelegate.generated.h already included, missing '#pragma once' in GetUserGroupInfoSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_GetUserGroupInfoSuccessDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetUserGroupInfoSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventGetUserGroupInfoSuccess_Parms \
{ \
	FAccelByteModelsGetUserGroupInfoResponse Response; \
}; \
static inline void FGetUserGroupInfoSuccess_DelegateWrapper(const FScriptDelegate& GetUserGroupInfoSuccess, FAccelByteModelsGetUserGroupInfoResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventGetUserGroupInfoSuccess_Parms Parms; \
	Parms.Response=Response; \
	GetUserGroupInfoSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetUserGroupInfoSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
