// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPaginatedUserBinaryRecords;
#ifdef ACCELBYTEUE4SDK_DModelsPaginatedUserBinaryRecordsDelegate_generated_h
#error "DModelsPaginatedUserBinaryRecordsDelegate.generated.h already included, missing '#pragma once' in DModelsPaginatedUserBinaryRecordsDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsPaginatedUserBinaryRecordsDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedUserBinaryRecordsDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsPaginatedUserBinaryRecords_Parms \
{ \
	FAccelByteModelsPaginatedUserBinaryRecords Response; \
}; \
static inline void FDModelsPaginatedUserBinaryRecords_DelegateWrapper(const FScriptDelegate& DModelsPaginatedUserBinaryRecords, FAccelByteModelsPaginatedUserBinaryRecords Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsPaginatedUserBinaryRecords_Parms Parms; \
	Parms.Response=Response; \
	DModelsPaginatedUserBinaryRecords.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedUserBinaryRecordsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
