// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZOnlineVoip;
#ifdef STARBREEZE_SBZOnlineVoip_generated_h
#error "SBZOnlineVoip.generated.h already included, missing '#pragma once' in SBZOnlineVoip.h"
#endif
#define STARBREEZE_SBZOnlineVoip_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCaptureDeviceAmplitude); \
	DECLARE_FUNCTION(execGetCaptureDevices); \
	DECLARE_FUNCTION(execGetSBZOnlineVoip); \
	DECLARE_FUNCTION(execGetSelectedCaptureDevice); \
	DECLARE_FUNCTION(execHandleStateEntered); \
	DECLARE_FUNCTION(execSetCaptureDevice);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCaptureDeviceAmplitude); \
	DECLARE_FUNCTION(execGetCaptureDevices); \
	DECLARE_FUNCTION(execGetSBZOnlineVoip); \
	DECLARE_FUNCTION(execGetSelectedCaptureDevice); \
	DECLARE_FUNCTION(execHandleStateEntered); \
	DECLARE_FUNCTION(execSetCaptureDevice);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZOnlineVoip(); \
	friend struct Z_Construct_UClass_USBZOnlineVoip_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineVoip, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineVoip)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZOnlineVoip(); \
	friend struct Z_Construct_UClass_USBZOnlineVoip_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineVoip, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineVoip)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZOnlineVoip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZOnlineVoip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineVoip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineVoip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineVoip(USBZOnlineVoip&&); \
	NO_API USBZOnlineVoip(const USBZOnlineVoip&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineVoip(USBZOnlineVoip&&); \
	NO_API USBZOnlineVoip(const USBZOnlineVoip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineVoip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineVoip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZOnlineVoip)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZOnlineVoip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnlineVoip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
