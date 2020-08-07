// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/TargetSpawner__pf1010915279.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetSpawner__pf1010915279() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATargetSpawner_C__pf1010915279_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATargetSpawner_C__pf1010915279();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATargetSpawner_C__pf1010915279::execbpf__SpawnItem__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpawnItem__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATargetSpawner_C__pf1010915279::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATargetSpawner_C__pf1010915279::execbpf__Spawning__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Spawning__pf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATargetSpawner_C__pf1010915279::execbpf__ExecuteUbergraph_TargetSpawner__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_TargetSpawner__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ATargetSpawner_C__pf1010915279::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		TargetSpawner_C__pf1010915279_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ATargetSpawner_C__pf1010915279_bpf__Spawning__pf = FName(TEXT("Spawning"));
	void ATargetSpawner_C__pf1010915279::bpf__Spawning__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATargetSpawner_C__pf1010915279_bpf__Spawning__pf),NULL);
	}
	void ATargetSpawner_C__pf1010915279::StaticRegisterNativesATargetSpawner_C__pf1010915279()
	{
		UClass* Class = ATargetSpawner_C__pf1010915279::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_TargetSpawner_0", &ATargetSpawner_C__pf1010915279::execbpf__ExecuteUbergraph_TargetSpawner__pf_0 },
			{ "ReceiveTick", &ATargetSpawner_C__pf1010915279::execbpf__ReceiveTick__pf },
			{ "Spawning", &ATargetSpawner_C__pf1010915279::execbpf__Spawning__pf },
			{ "SpawnItem", &ATargetSpawner_C__pf1010915279::execbpf__SpawnItem__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0_Statics
	{
		struct TargetSpawner_C__pf1010915279_eventbpf__ExecuteUbergraph_TargetSpawner__pf_0_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TargetSpawner_C__pf1010915279_eventbpf__ExecuteUbergraph_TargetSpawner__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_TargetSpawner_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetSpawner_C__pf1010915279, nullptr, "ExecuteUbergraph_TargetSpawner_0", nullptr, nullptr, sizeof(TargetSpawner_C__pf1010915279_eventbpf__ExecuteUbergraph_TargetSpawner__pf_0_Parms), Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_ATargetSpawner_C__pf1010915279();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_TargetSpawner_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TargetSpawner_C__pf1010915279_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetSpawner_C__pf1010915279, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(TargetSpawner_C__pf1010915279_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATargetSpawner_C__pf1010915279();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__Spawning__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__Spawning__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "OverrideNativeName", "Spawning" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__Spawning__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetSpawner_C__pf1010915279, nullptr, "Spawning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__Spawning__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__Spawning__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__Spawning__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATargetSpawner_C__pf1010915279();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Spawning") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__Spawning__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__SpawnItem__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__SpawnItem__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "OverrideNativeName", "SpawnItem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__SpawnItem__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetSpawner_C__pf1010915279, nullptr, "SpawnItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__SpawnItem__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__SpawnItem__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__SpawnItem__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATargetSpawner_C__pf1010915279();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SpawnItem") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__SpawnItem__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATargetSpawner_C__pf1010915279_NoRegister()
	{
		return ATargetSpawner_C__pf1010915279::StaticClass();
	}
	struct Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllChildActors_ChildActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllChildActors_ChildActors__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllChildActors_ChildActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnAmount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__SpawnAmount__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IntervalDelay__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__IntervalDelay__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Box__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Box__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ExecuteUbergraph_TargetSpawner__pf_0, "ExecuteUbergraph_TargetSpawner_0" }, // 1007680967
		{ &Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__ReceiveTick__pf, "ReceiveTick" }, // 2600433960
		{ &Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__Spawning__pf, "Spawning" }, // 3526835260
		{ &Z_Construct_UFunction_ATargetSpawner_C__pf1010915279_bpf__SpawnItem__pf, "SpawnItem" }, // 737732316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TargetSpawner__pf1010915279.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "TargetSpawner_C" },
		{ "ReplaceConverted", "/Game/TargetSpawner.TargetSpawner_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetSpawner_C__pf1010915279, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__CallFunc_GetAllChildActors_ChildActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "OverrideNativeName", "CallFunc_GetAllChildActors_ChildActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__CallFunc_GetAllChildActors_ChildActors__pf = { "CallFunc_GetAllChildActors_ChildActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetSpawner_C__pf1010915279, b0l__CallFunc_GetAllChildActors_ChildActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__CallFunc_GetAllChildActors_ChildActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__CallFunc_GetAllChildActors_ChildActors__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__CallFunc_GetAllChildActors_ChildActors__pf_Inner = { "b0l__CallFunc_GetAllChildActors_ChildActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetSpawner_C__pf1010915279, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetSpawner_C__pf1010915279, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__SpawnAmount__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Spawn Amount" },
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SpawnAmount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__SpawnAmount__pf = { "SpawnAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetSpawner_C__pf1010915279, bpv__SpawnAmount__pf), METADATA_PARAMS(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__SpawnAmount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__SpawnAmount__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__IntervalDelay__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Interval Delay" },
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "IntervalDelay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__IntervalDelay__pf = { "IntervalDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetSpawner_C__pf1010915279, bpv__IntervalDelay__pf), METADATA_PARAMS(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__IntervalDelay__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__IntervalDelay__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetSpawner_C__pf1010915279, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__Box__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetSpawner__pf1010915279.h" },
		{ "OverrideNativeName", "Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__Box__pf = { "Box", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetSpawner_C__pf1010915279, bpv__Box__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__Box__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__Box__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__CallFunc_GetAllChildActors_ChildActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__CallFunc_GetAllChildActors_ChildActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_b0l__Temp_int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__SpawnAmount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__IntervalDelay__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::NewProp_bpv__Box__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetSpawner_C__pf1010915279>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::ClassParams = {
		&ATargetSpawner_C__pf1010915279::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATargetSpawner_C__pf1010915279()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TargetSpawner"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("TargetSpawner_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATargetSpawner_C__pf1010915279_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ATargetSpawner_C__pf1010915279, TEXT("TargetSpawner_C"), 1937994979);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ATargetSpawner_C__pf1010915279>()
	{
		return ATargetSpawner_C__pf1010915279::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATargetSpawner_C__pf1010915279(Z_Construct_UClass_ATargetSpawner_C__pf1010915279, &ATargetSpawner_C__pf1010915279::StaticClass, TEXT("/Game/TargetSpawner"), TEXT("TargetSpawner_C"), true, TEXT("/Game/TargetSpawner"), TEXT("/Game/TargetSpawner.TargetSpawner_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetSpawner_C__pf1010915279);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
