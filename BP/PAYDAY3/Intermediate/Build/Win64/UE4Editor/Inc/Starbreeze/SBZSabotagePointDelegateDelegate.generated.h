// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZSabotagePointDelegateDelegate_generated_h
#error "SBZSabotagePointDelegateDelegate.generated.h already included, missing '#pragma once' in SBZSabotagePointDelegateDelegate.h"
#endif
#define STARBREEZE_SBZSabotagePointDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePointDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZSabotagePointDelegate_Parms \
{ \
	bool bSabotaged; \
}; \
static inline void FSBZSabotagePointDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZSabotagePointDelegate, bool bSabotaged) \
{ \
	_Script_Starbreeze_eventSBZSabotagePointDelegate_Parms Parms; \
	Parms.bSabotaged=bSabotaged ? true : false; \
	SBZSabotagePointDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSabotagePointDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
