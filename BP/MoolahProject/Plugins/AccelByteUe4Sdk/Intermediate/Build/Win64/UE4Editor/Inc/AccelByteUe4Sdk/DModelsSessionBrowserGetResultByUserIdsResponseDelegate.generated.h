// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSessionBrowserGetByUserIdsResult;
#ifdef ACCELBYTEUE4SDK_DModelsSessionBrowserGetResultByUserIdsResponseDelegate_generated_h
#error "DModelsSessionBrowserGetResultByUserIdsResponseDelegate.generated.h already included, missing '#pragma once' in DModelsSessionBrowserGetResultByUserIdsResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsSessionBrowserGetResultByUserIdsResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSessionBrowserGetResultByUserIdsResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsSessionBrowserGetResultByUserIdsResponse_Parms \
{ \
	FAccelByteModelsSessionBrowserGetByUserIdsResult Response; \
}; \
static inline void FDModelsSessionBrowserGetResultByUserIdsResponse_DelegateWrapper(const FScriptDelegate& DModelsSessionBrowserGetResultByUserIdsResponse, FAccelByteModelsSessionBrowserGetByUserIdsResult Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsSessionBrowserGetResultByUserIdsResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsSessionBrowserGetResultByUserIdsResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSessionBrowserGetResultByUserIdsResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
