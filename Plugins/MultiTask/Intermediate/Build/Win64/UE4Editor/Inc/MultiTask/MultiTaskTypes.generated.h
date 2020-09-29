// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTITASK_MultiTaskTypes_generated_h
#error "MultiTaskTypes.generated.h already included, missing '#pragma once' in MultiTaskTypes.h"
#endif
#define MULTITASK_MultiTaskTypes_generated_h

#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTaskHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MULTITASK_API UScriptStruct* StaticStruct<struct FTaskHandle>();

#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_27_DELEGATE \
static inline void FTaskDelegate_DelegateWrapper(const FScriptDelegate& TaskDelegate) \
{ \
	TaskDelegate.ProcessDelegate<UObject>(NULL); \
}


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_SPARSE_DATA
#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_RPC_WRAPPERS
#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiTaskTypes(); \
	friend struct Z_Construct_UClass_UMultiTaskTypes_Statics; \
public: \
	DECLARE_CLASS(UMultiTaskTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiTask"), NO_API) \
	DECLARE_SERIALIZER(UMultiTaskTypes)


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMultiTaskTypes(); \
	friend struct Z_Construct_UClass_UMultiTaskTypes_Statics; \
public: \
	DECLARE_CLASS(UMultiTaskTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiTask"), NO_API) \
	DECLARE_SERIALIZER(UMultiTaskTypes)


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiTaskTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiTaskTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiTaskTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiTaskTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiTaskTypes(UMultiTaskTypes&&); \
	NO_API UMultiTaskTypes(const UMultiTaskTypes&); \
public:


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiTaskTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiTaskTypes(UMultiTaskTypes&&); \
	NO_API UMultiTaskTypes(const UMultiTaskTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiTaskTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiTaskTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiTaskTypes)


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_PRIVATE_PROPERTY_OFFSET
#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_17_PROLOG
#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_PRIVATE_PROPERTY_OFFSET \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_SPARSE_DATA \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_RPC_WRAPPERS \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_INCLASS \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_PRIVATE_PROPERTY_OFFSET \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_SPARSE_DATA \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_INCLASS_NO_PURE_DECLS \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTITASK_API UClass* StaticClass<class UMultiTaskTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
