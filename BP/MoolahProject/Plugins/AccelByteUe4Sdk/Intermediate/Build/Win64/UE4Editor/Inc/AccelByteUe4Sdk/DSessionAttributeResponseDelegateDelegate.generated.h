// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetSessionAttributeResponse;
#ifdef ACCELBYTEUE4SDK_DSessionAttributeResponseDelegateDelegate_generated_h
#error "DSessionAttributeResponseDelegateDelegate.generated.h already included, missing '#pragma once' in DSessionAttributeResponseDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DSessionAttributeResponseDelegateDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSessionAttributeResponseDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDSessionAttributeResponseDelegate_Parms \
{ \
	FAccelByteModelsGetSessionAttributeResponse Response; \
}; \
static inline void FDSessionAttributeResponseDelegate_DelegateWrapper(const FScriptDelegate& DSessionAttributeResponseDelegate, FAccelByteModelsGetSessionAttributeResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDSessionAttributeResponseDelegate_Parms Parms; \
	Parms.Response=Response; \
	DSessionAttributeResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSessionAttributeResponseDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
