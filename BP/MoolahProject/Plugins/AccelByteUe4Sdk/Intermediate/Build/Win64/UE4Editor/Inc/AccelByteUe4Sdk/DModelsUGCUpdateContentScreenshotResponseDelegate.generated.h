// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCUpdateContentScreenshotResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCUpdateContentScreenshotResponseDelegate_generated_h
#error "DModelsUGCUpdateContentScreenshotResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCUpdateContentScreenshotResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCUpdateContentScreenshotResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCUpdateContentScreenshotResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCUpdateContentScreenshotResponse_Parms \
{ \
	FAccelByteModelsUGCUpdateContentScreenshotResponse Response; \
}; \
static inline void FDModelsUGCUpdateContentScreenshotResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCUpdateContentScreenshotResponse, FAccelByteModelsUGCUpdateContentScreenshotResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCUpdateContentScreenshotResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCUpdateContentScreenshotResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCUpdateContentScreenshotResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
