// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsBulkUserRankingDataV3;
#ifdef ACCELBYTEUE4SDK_DModelsBulkUserRankingDataV3Delegate_generated_h
#error "DModelsBulkUserRankingDataV3Delegate.generated.h already included, missing '#pragma once' in DModelsBulkUserRankingDataV3Delegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsBulkUserRankingDataV3Delegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsBulkUserRankingDataV3Delegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsBulkUserRankingDataV3_Parms \
{ \
	FAccelByteModelsBulkUserRankingDataV3 Response; \
}; \
static inline void FDModelsBulkUserRankingDataV3_DelegateWrapper(const FScriptDelegate& DModelsBulkUserRankingDataV3, FAccelByteModelsBulkUserRankingDataV3 Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsBulkUserRankingDataV3_Parms Parms; \
	Parms.Response=Response; \
	DModelsBulkUserRankingDataV3.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsBulkUserRankingDataV3Delegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
