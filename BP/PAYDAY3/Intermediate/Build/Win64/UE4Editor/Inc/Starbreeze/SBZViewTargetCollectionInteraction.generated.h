// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
class AActor;
#ifdef STARBREEZE_SBZViewTargetCollectionInteraction_generated_h
#error "SBZViewTargetCollectionInteraction.generated.h already included, missing '#pragma once' in SBZViewTargetCollectionInteraction.h"
#endif
#define STARBREEZE_SBZViewTargetCollectionInteraction_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompleteInteraction); \
	DECLARE_FUNCTION(execSetViewTargetCollection);


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompleteInteraction); \
	DECLARE_FUNCTION(execSetViewTargetCollection);


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZViewTargetCollectionInteraction(); \
	friend struct Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics; \
public: \
	DECLARE_CLASS(ASBZViewTargetCollectionInteraction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZViewTargetCollectionInteraction)


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZViewTargetCollectionInteraction(); \
	friend struct Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics; \
public: \
	DECLARE_CLASS(ASBZViewTargetCollectionInteraction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZViewTargetCollectionInteraction)


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZViewTargetCollectionInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZViewTargetCollectionInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZViewTargetCollectionInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZViewTargetCollectionInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZViewTargetCollectionInteraction(ASBZViewTargetCollectionInteraction&&); \
	NO_API ASBZViewTargetCollectionInteraction(const ASBZViewTargetCollectionInteraction&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZViewTargetCollectionInteraction(ASBZViewTargetCollectionInteraction&&); \
	NO_API ASBZViewTargetCollectionInteraction(const ASBZViewTargetCollectionInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZViewTargetCollectionInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZViewTargetCollectionInteraction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZViewTargetCollectionInteraction)


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ViewTargetCollection() { return STRUCT_OFFSET(ASBZViewTargetCollectionInteraction, ViewTargetCollection); } \
	FORCEINLINE static uint32 __PPO__Interactable() { return STRUCT_OFFSET(ASBZViewTargetCollectionInteraction, Interactable); }


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZViewTargetCollectionInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
