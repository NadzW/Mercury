// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZSecurityCompany : uint8;
#ifdef STARBREEZE_SBZOnSecurityCompaniesChangedDelegate_generated_h
#error "SBZOnSecurityCompaniesChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnSecurityCompaniesChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnSecurityCompaniesChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnSecurityCompaniesChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnSecurityCompaniesChanged_Parms \
{ \
	TArray<ESBZSecurityCompany> SecurityCompanies; \
}; \
static inline void FSBZOnSecurityCompaniesChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnSecurityCompaniesChanged, TArray<ESBZSecurityCompany> const& SecurityCompanies) \
{ \
	_Script_Starbreeze_eventSBZOnSecurityCompaniesChanged_Parms Parms; \
	Parms.SecurityCompanies=SecurityCompanies; \
	SBZOnSecurityCompaniesChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnSecurityCompaniesChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
