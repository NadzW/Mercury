// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCResponseDelegate_generated_h
#error "DModelsUGCResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCResponse_Parms \
{ \
	FAccelByteModelsUGCResponse Response; \
}; \
static inline void FDModelsUGCResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCResponse, FAccelByteModelsUGCResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
