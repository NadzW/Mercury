// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPersonalMessageResponse;
#ifdef ACCELBYTEUE4SDK_DPersonalChatResponseDelegate_generated_h
#error "DPersonalChatResponseDelegate.generated.h already included, missing '#pragma once' in DPersonalChatResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPersonalChatResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPersonalChatResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPersonalChatResponse_Parms \
{ \
	FAccelByteModelsPersonalMessageResponse Response; \
}; \
static inline void FDPersonalChatResponse_DelegateWrapper(const FScriptDelegate& DPersonalChatResponse, FAccelByteModelsPersonalMessageResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPersonalChatResponse_Parms Parms; \
	Parms.Response=Response; \
	DPersonalChatResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPersonalChatResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
