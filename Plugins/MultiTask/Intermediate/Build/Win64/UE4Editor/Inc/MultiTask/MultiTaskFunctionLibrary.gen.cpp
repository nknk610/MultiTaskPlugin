// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiTask/Public/MultiTaskFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiTaskFunctionLibrary() {}
// Cross Module References
	MULTITASK_API UClass* Z_Construct_UClass_UMultiTaskFunctionLibrary_NoRegister();
	MULTITASK_API UClass* Z_Construct_UClass_UMultiTaskFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MultiTask();
	MULTITASK_API UFunction* Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask();
	MULTITASK_API UScriptStruct* Z_Construct_UScriptStruct_FTaskHandle();
	MULTITASK_API UFunction* Z_Construct_UDelegateFunction_MultiTask_TaskDelegate__DelegateSignature();
	MULTITASK_API UFunction* Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask();
	MULTITASK_API UFunction* Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork();
	MULTITASK_API UFunction* Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask();
// End Cross Module References
	void UMultiTaskFunctionLibrary::StaticRegisterNativesUMultiTaskFunctionLibrary()
	{
		UClass* Class = UMultiTaskFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTask", &UMultiTaskFunctionLibrary::execCreateTask },
			{ "GetTask", &UMultiTaskFunctionLibrary::execGetTask },
			{ "IsShouldWork", &UMultiTaskFunctionLibrary::execIsShouldWork },
			{ "StartTask", &UMultiTaskFunctionLibrary::execStartTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics
	{
		struct MultiTaskFunctionLibrary_eventCreateTask_Parms
		{
			FScriptDelegate TaskDelegate;
			bool bShouldWork;
			FTaskHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bShouldWork_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldWork;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TaskDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiTaskFunctionLibrary_eventCreateTask_Parms, ReturnValue), Z_Construct_UScriptStruct_FTaskHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::NewProp_bShouldWork_SetBit(void* Obj)
	{
		((MultiTaskFunctionLibrary_eventCreateTask_Parms*)Obj)->bShouldWork = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::NewProp_bShouldWork = { "bShouldWork", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MultiTaskFunctionLibrary_eventCreateTask_Parms), &Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::NewProp_bShouldWork_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::NewProp_TaskDelegate = { "TaskDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiTaskFunctionLibrary_eventCreateTask_Parms, TaskDelegate), Z_Construct_UDelegateFunction_MultiTask_TaskDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::NewProp_bShouldWork,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::NewProp_TaskDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "MultiTask" },
		{ "ModuleRelativePath", "Public/MultiTaskFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiTaskFunctionLibrary, nullptr, "CreateTask", nullptr, nullptr, sizeof(MultiTaskFunctionLibrary_eventCreateTask_Parms), Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics
	{
		struct MultiTaskFunctionLibrary_eventGetTask_Parms
		{
			FTaskHandle TaskHandle;
			FScriptDelegate ReturnValue;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaskHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080580, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiTaskFunctionLibrary_eventGetTask_Parms, ReturnValue), Z_Construct_UDelegateFunction_MultiTask_TaskDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiTaskFunctionLibrary_eventGetTask_Parms, TaskHandle), Z_Construct_UScriptStruct_FTaskHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics::NewProp_TaskHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "MultiTask" },
		{ "ModuleRelativePath", "Public/MultiTaskFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiTaskFunctionLibrary, nullptr, "GetTask", nullptr, nullptr, sizeof(MultiTaskFunctionLibrary_eventGetTask_Parms), Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics
	{
		struct MultiTaskFunctionLibrary_eventIsShouldWork_Parms
		{
			FTaskHandle TaskHandle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaskHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MultiTaskFunctionLibrary_eventIsShouldWork_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MultiTaskFunctionLibrary_eventIsShouldWork_Parms), &Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiTaskFunctionLibrary_eventIsShouldWork_Parms, TaskHandle), Z_Construct_UScriptStruct_FTaskHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::NewProp_TaskHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::Function_MetaDataParams[] = {
		{ "Category", "MultiTask" },
		{ "ModuleRelativePath", "Public/MultiTaskFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiTaskFunctionLibrary, nullptr, "IsShouldWork", nullptr, nullptr, sizeof(MultiTaskFunctionLibrary_eventIsShouldWork_Parms), Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics
	{
		struct MultiTaskFunctionLibrary_eventStartTask_Parms
		{
			FTaskHandle TaskHandle;
			bool bStartOnBackground;
		};
		static void NewProp_bStartOnBackground_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartOnBackground;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaskHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::NewProp_bStartOnBackground_SetBit(void* Obj)
	{
		((MultiTaskFunctionLibrary_eventStartTask_Parms*)Obj)->bStartOnBackground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::NewProp_bStartOnBackground = { "bStartOnBackground", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MultiTaskFunctionLibrary_eventStartTask_Parms), &Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::NewProp_bStartOnBackground_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiTaskFunctionLibrary_eventStartTask_Parms, TaskHandle), Z_Construct_UScriptStruct_FTaskHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::NewProp_bStartOnBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::NewProp_TaskHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "MultiTask" },
		{ "ModuleRelativePath", "Public/MultiTaskFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiTaskFunctionLibrary, nullptr, "StartTask", nullptr, nullptr, sizeof(MultiTaskFunctionLibrary_eventStartTask_Parms), Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMultiTaskFunctionLibrary_NoRegister()
	{
		return UMultiTaskFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMultiTaskFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiTaskFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiTask,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultiTaskFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiTaskFunctionLibrary_CreateTask, "CreateTask" }, // 1372185348
		{ &Z_Construct_UFunction_UMultiTaskFunctionLibrary_GetTask, "GetTask" }, // 3458575154
		{ &Z_Construct_UFunction_UMultiTaskFunctionLibrary_IsShouldWork, "IsShouldWork" }, // 1121556659
		{ &Z_Construct_UFunction_UMultiTaskFunctionLibrary_StartTask, "StartTask" }, // 703291285
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTaskFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MultiTaskFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MultiTaskFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiTaskFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiTaskFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultiTaskFunctionLibrary_Statics::ClassParams = {
		&UMultiTaskFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiTaskFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTaskFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiTaskFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultiTaskFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultiTaskFunctionLibrary, 783431324);
	template<> MULTITASK_API UClass* StaticClass<UMultiTaskFunctionLibrary>()
	{
		return UMultiTaskFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultiTaskFunctionLibrary(Z_Construct_UClass_UMultiTaskFunctionLibrary, &UMultiTaskFunctionLibrary::StaticClass, TEXT("/Script/MultiTask"), TEXT("UMultiTaskFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiTaskFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
