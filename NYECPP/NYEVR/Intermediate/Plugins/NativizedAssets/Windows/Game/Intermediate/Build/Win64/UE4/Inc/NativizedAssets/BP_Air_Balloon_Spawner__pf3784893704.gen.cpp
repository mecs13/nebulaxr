// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_Air_Balloon_Spawner__pf3784893704.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Air_Balloon_Spawner__pf3784893704() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_Air_Balloon_Spawner_C__pf3784893704::execbpf__GetxgroundxheightxbelowxBP__pfTTTT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetxgroundxheightxbelowxBP__pfTTTT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Air_Balloon_Spawner_C__pf3784893704::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Air_Balloon_Spawner_C__pf3784893704::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Air_Balloon_Spawner_C__pf3784893704::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Air_Balloon_Spawner_C__pf3784893704::execbpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_Air_Balloon_Spawner_C__pf3784893704::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_Air_Balloon_Spawner_C__pf3784893704::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_Air_Balloon_Spawner_C__pf3784893704_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Air_Balloon_Spawner_C__pf3784893704::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Air_Balloon_Spawner_C__pf3784893704::StaticRegisterNativesABP_Air_Balloon_Spawner_C__pf3784893704()
	{
		UClass* Class = ABP_Air_Balloon_Spawner_C__pf3784893704::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_BP_Air_Balloon_Spawner_0", &ABP_Air_Balloon_Spawner_C__pf3784893704::execbpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0 },
			{ "Get ground height below BP", &ABP_Air_Balloon_Spawner_C__pf3784893704::execbpf__GetxgroundxheightxbelowxBP__pfTTTT },
			{ "ReceiveBeginPlay", &ABP_Air_Balloon_Spawner_C__pf3784893704::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &ABP_Air_Balloon_Spawner_C__pf3784893704::execbpf__ReceiveTick__pf },
			{ "UserConstructionScript", &ABP_Air_Balloon_Spawner_C__pf3784893704::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Statics
	{
		struct BP_Air_Balloon_Spawner_C__pf3784893704_eventbpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Air_Balloon_Spawner_C__pf3784893704_eventbpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_BP_Air_Balloon_Spawner_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704, nullptr, "ExecuteUbergraph_BP_Air_Balloon_Spawner_0", nullptr, nullptr, sizeof(BP_Air_Balloon_Spawner_C__pf3784893704_eventbpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Parms), Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_BP_Air_Balloon_Spawner_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__GetxgroundxheightxbelowxBP__pfTTTT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__GetxgroundxheightxbelowxBP__pfTTTT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Get ground height below BP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__GetxgroundxheightxbelowxBP__pfTTTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704, nullptr, "Get ground height below BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__GetxgroundxheightxbelowxBP__pfTTTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__GetxgroundxheightxbelowxBP__pfTTTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__GetxgroundxheightxbelowxBP__pfTTTT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Get ground height below BP") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__GetxgroundxheightxbelowxBP__pfTTTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Air_Balloon_Spawner_C__pf3784893704_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BP_Air_Balloon_Spawner_C__pf3784893704_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_NoRegister()
	{
		return ABP_Air_Balloon_Spawner_C__pf3784893704::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_IsClosed_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__People__pf_MetaData[];
#endif
		static void NewProp_bpv__People__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__People__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Rotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Rotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EnvelopexEmissive__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__EnvelopexEmissive__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Windxdirectionxx__pfTTBx_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Windxdirectionxx__pfTTBx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Windxspeedxmxs__pfTTE_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Windxspeedxmxs__pfTTE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Showxboundingxcirclesxinxeditor__pfTTTT_MetaData[];
#endif
		static void NewProp_bpv__Showxboundingxcirclesxinxeditor__pfTTTT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Showxboundingxcirclesxinxeditor__pfTTTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GroundxheightxbelowxBP__pfTTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__GroundxheightxbelowxBP__pfTTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Land__pf_MetaData[];
#endif
		static void NewProp_bpv__Land__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Land__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Randomxscale__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Randomxscale__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BalloonsxArray__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__BalloonsxArray__pfT;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BalloonsxArray__pfT_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Loop__pf_MetaData[];
#endif
		static void NewProp_bpv__Loop__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Loop__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnxRadius__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpawnxRadius__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnxLocations__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__SpawnxLocations__pfT;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__SpawnxLocations__pfT_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HeightxMin__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__HeightxMin__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HeightxMax__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__HeightxMax__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NumberxofxBalloons__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__NumberxofxBalloons__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Torusxmin__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Torusxmin__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Torusxmax__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Torusxmax__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Weather_vane__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Weather_vane__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0, "ExecuteUbergraph_BP_Air_Balloon_Spawner_0" }, // 123668568
		{ &Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__GetxgroundxheightxbelowxBP__pfTTTT, "Get ground height below BP" }, // 4213264019
		{ &Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3248805715
		{ &Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__ReceiveTick__pf, "ReceiveTick" }, // 2901451592
		{ &Z_Construct_UFunction_ABP_Air_Balloon_Spawner_C__pf3784893704_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1368425404
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_Air_Balloon_Spawner_C" },
		{ "ReplaceConverted", "/Game/Air_Balloons/Blueprints/BP_Air_Balloon_Spawner.BP_Air_Balloon_Spawner_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf = { "Temp_int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, b0l__Temp_int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Temp_bool_Has_Been_Initd_Variable" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_Spawner_C__pf3784893704*)Obj)->b0l__Temp_bool_Has_Been_Initd_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf = { "Temp_bool_Has_Been_Initd_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_Spawner_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Temp_bool_IsClosed_Variable" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_Spawner_C__pf3784893704*)Obj)->b0l__Temp_bool_IsClosed_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf = { "Temp_bool_IsClosed_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_Spawner_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf = { "Temp_int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, b0l__Temp_int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__People__pf_MetaData[] = {
		{ "Category", "Air Balloons Spawn" },
		{ "DisplayName", "People" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "People" },
		{ "tooltip", "Will generate 1 to 4 people in each balloon. Turn this off if balloons are far away to save performance" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__People__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_Spawner_C__pf3784893704*)Obj)->bpv__People__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__People__pf = { "People", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_Spawner_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__People__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__People__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__People__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Rotation__pf_MetaData[] = {
		{ "Category", "Air Balloons Spawn" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Rotation" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Rotation" },
		{ "tooltip", "Amount of random Z rotation speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Rotation__pf = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__Rotation__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Rotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Rotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__EnvelopexEmissive__pfT_MetaData[] = {
		{ "Category", "Air Balloons Spawn" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Envelope Emissive" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Envelope Emissive" },
		{ "tooltip", "Brightness of envelope light when burner is on" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__EnvelopexEmissive__pfT = { "Envelope Emissive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__EnvelopexEmissive__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__EnvelopexEmissive__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__EnvelopexEmissive__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Windxdirectionxx__pfTTBx_MetaData[] = {
		{ "Category", "Air Balloons" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Wind Direction \xc2\xb0" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Wind direction \xc2\xb0" },
		{ "tooltip", "Can be changed in runtime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Windxdirectionxx__pfTTBx = { "Wind direction \xc2\xb0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__Windxdirectionxx__pfTTBx), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Windxdirectionxx__pfTTBx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Windxdirectionxx__pfTTBx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Windxspeedxmxs__pfTTE_MetaData[] = {
		{ "Category", "Air Balloons" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Wind Speed M/s" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Wind speed m/s" },
		{ "tooltip", "Can be changed in runtime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Windxspeedxmxs__pfTTE = { "Wind speed m/s", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__Windxspeedxmxs__pfTTE), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Windxspeedxmxs__pfTTE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Windxspeedxmxs__pfTTE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Showxboundingxcirclesxinxeditor__pfTTTT_MetaData[] = {
		{ "Category", "Air Balloons Spawn" },
		{ "DisplayName", "Show Bounding Circles In Editor" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Show bounding circles in editor" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Showxboundingxcirclesxinxeditor__pfTTTT_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_Spawner_C__pf3784893704*)Obj)->bpv__Showxboundingxcirclesxinxeditor__pfTTTT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Showxboundingxcirclesxinxeditor__pfTTTT = { "Show bounding circles in editor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_Spawner_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Showxboundingxcirclesxinxeditor__pfTTTT_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Showxboundingxcirclesxinxeditor__pfTTTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Showxboundingxcirclesxinxeditor__pfTTTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__GroundxheightxbelowxBP__pfTTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Ground Height Below BP" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Ground height below BP" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__GroundxheightxbelowxBP__pfTTT = { "Ground height below BP", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__GroundxheightxbelowxBP__pfTTT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__GroundxheightxbelowxBP__pfTTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__GroundxheightxbelowxBP__pfTTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Land__pf_MetaData[] = {
		{ "Category", "Air Balloons" },
		{ "DisplayName", "Land" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Land" },
		{ "tooltip", "All balloons will begin landing. Turn off for take off. Can be changed in runtime" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Land__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_Spawner_C__pf3784893704*)Obj)->bpv__Land__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Land__pf = { "Land", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_Spawner_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Land__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Land__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Land__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Randomxscale__pfT_MetaData[] = {
		{ "Category", "Air Balloons Spawn" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Random Scale" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Random scale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Randomxscale__pfT = { "Random scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__Randomxscale__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Randomxscale__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Randomxscale__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__BalloonsxArray__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Balloons Array" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Balloons Array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__BalloonsxArray__pfT = { "Balloons Array", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__BalloonsxArray__pfT), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__BalloonsxArray__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__BalloonsxArray__pfT_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__BalloonsxArray__pfT_Inner = { "bpv__BalloonsxArray__pfT", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Loop__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Loop" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Loop" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Loop__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_Spawner_C__pf3784893704*)Obj)->bpv__Loop__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Loop__pf = { "Loop", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_Spawner_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Loop__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Loop__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Loop__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__SpawnxRadius__pfT_MetaData[] = {
		{ "Category", "Air Balloons Spawn" },
		{ "ClampMax", "3000" },
		{ "ClampMin", "30" },
		{ "DisplayName", "Spawn Radius" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Spawn Radius" },
		{ "tooltip", "Balloons will spawn within circle with selected radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__SpawnxRadius__pfT = { "Spawn Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__SpawnxRadius__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__SpawnxRadius__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__SpawnxRadius__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__SpawnxLocations__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Spawn Locations" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Spawn Locations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__SpawnxLocations__pfT = { "Spawn Locations", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__SpawnxLocations__pfT), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__SpawnxLocations__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__SpawnxLocations__pfT_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__SpawnxLocations__pfT_Inner = { "bpv__SpawnxLocations__pfT", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__HeightxMin__pfT_MetaData[] = {
		{ "Category", "Air Balloons" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Height Min" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Height Min" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__HeightxMin__pfT = { "Height Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__HeightxMin__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__HeightxMin__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__HeightxMin__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__HeightxMax__pfT_MetaData[] = {
		{ "Category", "Air Balloons" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Height Max" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Height Max" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__HeightxMax__pfT = { "Height Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__HeightxMax__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__HeightxMax__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__HeightxMax__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__NumberxofxBalloons__pfTT_MetaData[] = {
		{ "Category", "Air Balloons Spawn" },
		{ "ClampMax", "400" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Number Of Balloons" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Number of Balloons" },
		{ "tooltip", "Up to 400 Balloons, but this number depends on Spawn Radius" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__NumberxofxBalloons__pfTT = { "Number of Balloons", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__NumberxofxBalloons__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__NumberxofxBalloons__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__NumberxofxBalloons__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Torusxmin__pfT_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Torus min" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Torusxmin__pfT = { "Torus min", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__Torusxmin__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Torusxmin__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Torusxmin__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Torusxmax__pfT_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Torus max" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Torusxmax__pfT = { "Torus max", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__Torusxmax__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Torusxmax__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Torusxmax__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Weather_vane__pf_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon_Spawner__pf3784893704.h" },
		{ "OverrideNativeName", "Weather_vane" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Weather_vane__pf = { "Weather_vane", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_Spawner_C__pf3784893704, bpv__Weather_vane__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Weather_vane__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Weather_vane__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__People__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Rotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__EnvelopexEmissive__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Windxdirectionxx__pfTTBx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Windxspeedxmxs__pfTTE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Showxboundingxcirclesxinxeditor__pfTTTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__GroundxheightxbelowxBP__pfTTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Land__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Randomxscale__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__BalloonsxArray__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__BalloonsxArray__pfT_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Loop__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__SpawnxRadius__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__SpawnxLocations__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__SpawnxLocations__pfT_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__HeightxMin__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__HeightxMax__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__NumberxofxBalloons__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Torusxmin__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Torusxmax__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::NewProp_bpv__Weather_vane__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Air_Balloon_Spawner_C__pf3784893704>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::ClassParams = {
		&ABP_Air_Balloon_Spawner_C__pf3784893704::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Air_Balloons/Blueprints/BP_Air_Balloon_Spawner"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Air_Balloon_Spawner_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Air_Balloon_Spawner_C__pf3784893704, TEXT("BP_Air_Balloon_Spawner_C"), 2449403981);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_Air_Balloon_Spawner_C__pf3784893704>()
	{
		return ABP_Air_Balloon_Spawner_C__pf3784893704::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704(Z_Construct_UClass_ABP_Air_Balloon_Spawner_C__pf3784893704, &ABP_Air_Balloon_Spawner_C__pf3784893704::StaticClass, TEXT("/Game/Air_Balloons/Blueprints/BP_Air_Balloon_Spawner"), TEXT("BP_Air_Balloon_Spawner_C"), true, TEXT("/Game/Air_Balloons/Blueprints/BP_Air_Balloon_Spawner"), TEXT("/Game/Air_Balloons/Blueprints/BP_Air_Balloon_Spawner.BP_Air_Balloon_Spawner_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Air_Balloon_Spawner_C__pf3784893704);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
