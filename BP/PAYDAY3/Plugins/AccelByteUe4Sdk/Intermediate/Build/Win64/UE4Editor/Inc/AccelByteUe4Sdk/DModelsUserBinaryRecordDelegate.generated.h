// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUserBinaryRecord;
#ifdef ACCELBYTEUE4SDK_DModelsUserBinaryRecordDelegate_generated_h
#error "DModelsUserBinaryRecordDelegate.generated.h already included, missing '#pragma once' in DModelsUserBinaryRecordDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUserBinaryRecordDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUserBinaryRecordDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUserBinaryRecord_Parms \
{ \
	FAccelByteModelsUserBinaryRecord Response; \
}; \
static inline void FDModelsUserBinaryRecord_DelegateWrapper(const FScriptDelegate& DModelsUserBinaryRecord, FAccelByteModelsUserBinaryRecord Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUserBinaryRecord_Parms Parms; \
	Parms.Response=Response; \
	DModelsUserBinaryRecord.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUserBinaryRecordDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
