// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiTask/Public/MultiTaskTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiTaskTypes() {}
// Cross Module References
	MULTITASK_API UFunction* Z_Construct_UDelegateFunction_MultiTask_TaskDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MultiTask();
	MULTITASK_API UScriptStruct* Z_Construct_UScriptStruct_FTaskHandle();
	MULTITASK_API UClass* Z_Construct_UClass_UMultiTaskTypes_NoRegister();
	MULTITASK_API UClass* Z_Construct_UClass_UMultiTaskTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MultiTask_TaskDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiTask_TaskDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//----------------------------------------\n// Start define delegate types\n//----------------------------------------\n" },
		{ "ModuleRelativePath", "Public/MultiTaskTypes.h" },
		{ "ToolTip", "Start define delegate types" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiTask_TaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiTask, nullptr, "TaskDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiTask_TaskDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiTask_TaskDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiTask_TaskDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MultiTask_TaskDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FTaskHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MULTITASK_API uint32 Get_Z_Construct_UScriptStruct_FTaskHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskHandle, Z_Construct_UPackage__Script_MultiTask(), TEXT("TaskHandle"), sizeof(FTaskHandle), Get_Z_Construct_UScriptStruct_FTaskHandle_Hash());
	}
	return Singleton;
}
template<> MULTITASK_API UScriptStruct* StaticStruct<FTaskHandle>()
{
	return FTaskHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTaskHandle(FTaskHandle::StaticStruct, TEXT("/Script/MultiTask"), TEXT("TaskHandle"), false, nullptr, nullptr);
static struct FScriptStruct_MultiTask_StaticRegisterNativesFTaskHandle
{
	FScriptStruct_MultiTask_StaticRegisterNativesFTaskHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TaskHandle")),new UScriptStruct::TCppStructOps<FTaskHandle>);
	}
} ScriptStruct_MultiTask_StaticRegisterNativesFTaskHandle;
	struct Z_Construct_UScriptStruct_FTaskHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/MultiTaskTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaskHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiTask,
		nullptr,
		&NewStructOps,
		"TaskHandle",
		sizeof(FTaskHandle),
		alignof(FTaskHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaskHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTaskHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MultiTask();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TaskHandle"), sizeof(FTaskHandle), Get_Z_Construct_UScriptStruct_FTaskHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTaskHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTaskHandle_Hash() { return 2010737784U; }
	void UMultiTaskTypes::StaticRegisterNativesUMultiTaskTypes()
	{
	}
	UClass* Z_Construct_UClass_UMultiTaskTypes_NoRegister()
	{
		return UMultiTaskTypes::StaticClass();
	}
	struct Z_Construct_UClass_UMultiTaskTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiTaskTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTaskTypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Empty UCLASS, This file contains Delegates, USTRUCT, and UENUM;\n */" },
		{ "IncludePath", "MultiTaskTypes.h" },
		{ "ModuleRelativePath", "Public/MultiTaskTypes.h" },
		{ "ToolTip", "Empty UCLASS, This file contains Delegates, USTRUCT, and UENUM;" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiTaskTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiTaskTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultiTaskTypes_Statics::ClassParams = {
		&UMultiTaskTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiTaskTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTaskTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiTaskTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultiTaskTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultiTaskTypes, 3377536889);
	template<> MULTITASK_API UClass* StaticClass<UMultiTaskTypes>()
	{
		return UMultiTaskTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultiTaskTypes(Z_Construct_UClass_UMultiTaskTypes, &UMultiTaskTypes::StaticClass, TEXT("/Script/MultiTask"), TEXT("UMultiTaskTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiTaskTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
