// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsInfoPartyResponse;
#ifdef ACCELBYTEUE4SDK_DInfoPartyResponseDelegate_generated_h
#error "DInfoPartyResponseDelegate.generated.h already included, missing '#pragma once' in DInfoPartyResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DInfoPartyResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DInfoPartyResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDInfoPartyResponse_Parms \
{ \
	FAccelByteModelsInfoPartyResponse Response; \
}; \
static inline void FDInfoPartyResponse_DelegateWrapper(const FScriptDelegate& DInfoPartyResponse, FAccelByteModelsInfoPartyResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDInfoPartyResponse_Parms Parms; \
	Parms.Response=Response; \
	DInfoPartyResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DInfoPartyResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
