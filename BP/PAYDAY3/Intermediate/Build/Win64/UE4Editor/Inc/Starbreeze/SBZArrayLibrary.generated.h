// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FRandomStream;
#ifdef STARBREEZE_SBZArrayLibrary_generated_h
#error "SBZArrayLibrary.generated.h already included, missing '#pragma once' in SBZArrayLibrary.h"
#endif
#define STARBREEZE_SBZArrayLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindArray); \
	DECLARE_FUNCTION(execRandomizedSplitArray); \
	DECLARE_FUNCTION(execSelectArray); \
	DECLARE_FUNCTION(execSortArray);


#define PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindArray); \
	DECLARE_FUNCTION(execRandomizedSplitArray); \
	DECLARE_FUNCTION(execSelectArray); \
	DECLARE_FUNCTION(execSortArray);


#define PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZArrayLibrary(); \
	friend struct Z_Construct_UClass_USBZArrayLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZArrayLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZArrayLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZArrayLibrary(); \
	friend struct Z_Construct_UClass_USBZArrayLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZArrayLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZArrayLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZArrayLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZArrayLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZArrayLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZArrayLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZArrayLibrary(USBZArrayLibrary&&); \
	NO_API USBZArrayLibrary(const USBZArrayLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZArrayLibrary(USBZArrayLibrary&&); \
	NO_API USBZArrayLibrary(const USBZArrayLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZArrayLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZArrayLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZArrayLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZArrayLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZArrayLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
