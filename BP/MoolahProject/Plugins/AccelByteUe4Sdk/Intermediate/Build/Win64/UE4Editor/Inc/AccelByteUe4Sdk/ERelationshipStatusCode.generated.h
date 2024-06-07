// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_ERelationshipStatusCode_generated_h
#error "ERelationshipStatusCode.generated.h already included, missing '#pragma once' in ERelationshipStatusCode.h"
#endif
#define ACCELBYTEUE4SDK_ERelationshipStatusCode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ERelationshipStatusCode_h


#define FOREACH_ENUM_ERELATIONSHIPSTATUSCODE(op) \
	op(ERelationshipStatusCode::Friend) \
	op(ERelationshipStatusCode::Incoming) \
	op(ERelationshipStatusCode::Outgoing) \
	op(ERelationshipStatusCode::NotFriend) 

enum class ERelationshipStatusCode : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<ERelationshipStatusCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
