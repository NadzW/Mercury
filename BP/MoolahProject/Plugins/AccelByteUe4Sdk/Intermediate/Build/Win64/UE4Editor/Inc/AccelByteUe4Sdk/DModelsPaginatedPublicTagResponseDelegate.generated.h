// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPaginatedPublicTag;
#ifdef ACCELBYTEUE4SDK_DModelsPaginatedPublicTagResponseDelegate_generated_h
#error "DModelsPaginatedPublicTagResponseDelegate.generated.h already included, missing '#pragma once' in DModelsPaginatedPublicTagResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsPaginatedPublicTagResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedPublicTagResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsPaginatedPublicTagResponse_Parms \
{ \
	FAccelByteModelsPaginatedPublicTag Response; \
}; \
static inline void FDModelsPaginatedPublicTagResponse_DelegateWrapper(const FScriptDelegate& DModelsPaginatedPublicTagResponse, FAccelByteModelsPaginatedPublicTag Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsPaginatedPublicTagResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsPaginatedPublicTagResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedPublicTagResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
