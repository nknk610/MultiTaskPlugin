// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTaskHandle;
#ifdef MULTITASK_MultiTaskFunctionLibrary_generated_h
#error "MultiTaskFunctionLibrary.generated.h already included, missing '#pragma once' in MultiTaskFunctionLibrary.h"
#endif
#define MULTITASK_MultiTaskFunctionLibrary_generated_h

#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_SPARSE_DATA
#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsShouldWork) \
	{ \
		P_GET_STRUCT_REF(FTaskHandle,Z_Param_Out_TaskHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMultiTaskFunctionLibrary::IsShouldWork(Z_Param_Out_TaskHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTask) \
	{ \
		P_GET_STRUCT_REF(FTaskHandle,Z_Param_Out_TaskHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTaskDelegate*)Z_Param__Result=UMultiTaskFunctionLibrary::GetTask(Z_Param_Out_TaskHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTask) \
	{ \
		P_GET_STRUCT(FTaskHandle,Z_Param_TaskHandle); \
		P_GET_UBOOL(Z_Param_bStartOnBackground); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMultiTaskFunctionLibrary::StartTask(Z_Param_TaskHandle,Z_Param_bStartOnBackground); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTask) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_TaskDelegate); \
		P_GET_UBOOL(Z_Param_bShouldWork); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTaskHandle*)Z_Param__Result=UMultiTaskFunctionLibrary::CreateTask(FTaskDelegate(Z_Param_TaskDelegate),Z_Param_bShouldWork); \
		P_NATIVE_END; \
	}


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsShouldWork) \
	{ \
		P_GET_STRUCT_REF(FTaskHandle,Z_Param_Out_TaskHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMultiTaskFunctionLibrary::IsShouldWork(Z_Param_Out_TaskHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTask) \
	{ \
		P_GET_STRUCT_REF(FTaskHandle,Z_Param_Out_TaskHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTaskDelegate*)Z_Param__Result=UMultiTaskFunctionLibrary::GetTask(Z_Param_Out_TaskHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTask) \
	{ \
		P_GET_STRUCT(FTaskHandle,Z_Param_TaskHandle); \
		P_GET_UBOOL(Z_Param_bStartOnBackground); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMultiTaskFunctionLibrary::StartTask(Z_Param_TaskHandle,Z_Param_bStartOnBackground); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTask) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_TaskDelegate); \
		P_GET_UBOOL(Z_Param_bShouldWork); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTaskHandle*)Z_Param__Result=UMultiTaskFunctionLibrary::CreateTask(FTaskDelegate(Z_Param_TaskDelegate),Z_Param_bShouldWork); \
		P_NATIVE_END; \
	}


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiTaskFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMultiTaskFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMultiTaskFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiTask"), NO_API) \
	DECLARE_SERIALIZER(UMultiTaskFunctionLibrary)


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMultiTaskFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMultiTaskFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMultiTaskFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiTask"), NO_API) \
	DECLARE_SERIALIZER(UMultiTaskFunctionLibrary)


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiTaskFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiTaskFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiTaskFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiTaskFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiTaskFunctionLibrary(UMultiTaskFunctionLibrary&&); \
	NO_API UMultiTaskFunctionLibrary(const UMultiTaskFunctionLibrary&); \
public:


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiTaskFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiTaskFunctionLibrary(UMultiTaskFunctionLibrary&&); \
	NO_API UMultiTaskFunctionLibrary(const UMultiTaskFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiTaskFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiTaskFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiTaskFunctionLibrary)


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_13_PROLOG
#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_SPARSE_DATA \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_RPC_WRAPPERS \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_INCLASS \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_SPARSE_DATA \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTITASK_API UClass* StaticClass<class UMultiTaskFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiTaskPlugin_Plugins_MultiTask_Source_MultiTask_Public_MultiTaskFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
