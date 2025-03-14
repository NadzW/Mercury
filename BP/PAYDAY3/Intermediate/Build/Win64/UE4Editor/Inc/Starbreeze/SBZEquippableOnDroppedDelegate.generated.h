// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZEquippable;
#ifdef STARBREEZE_SBZEquippableOnDroppedDelegate_generated_h
#error "SBZEquippableOnDroppedDelegate.generated.h already included, missing '#pragma once' in SBZEquippableOnDroppedDelegate.h"
#endif
#define STARBREEZE_SBZEquippableOnDroppedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnDroppedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZEquippableOnDropped_Parms \
{ \
	const ASBZEquippable* Equippable; \
}; \
static inline void FSBZEquippableOnDropped_DelegateWrapper(const FMulticastScriptDelegate& SBZEquippableOnDropped, const ASBZEquippable* Equippable) \
{ \
	_Script_Starbreeze_eventSBZEquippableOnDropped_Parms Parms; \
	Parms.Equippable=Equippable; \
	SBZEquippableOnDropped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnDroppedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
