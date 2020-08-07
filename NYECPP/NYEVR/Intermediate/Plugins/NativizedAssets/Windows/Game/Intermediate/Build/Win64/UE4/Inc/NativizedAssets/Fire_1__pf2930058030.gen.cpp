// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Fire_1__pf2930058030.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFire_1__pf2930058030() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFire_1_C__pf2930058030_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFire_1_C__pf2930058030();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFire_1_C__pf2930058030::execbpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_1_C__pf2930058030::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_1_C__pf2930058030::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_1_C__pf2930058030::execbpf__ExecuteUbergraph_Fire_1__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Fire_1__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AFire_1_C__pf2930058030_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AFire_1_C__pf2930058030::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFire_1_C__pf2930058030_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AFire_1_C__pf2930058030::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		Fire_1_C__pf2930058030_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf),&Parms);
	}
	void AFire_1_C__pf2930058030::StaticRegisterNativesAFire_1_C__pf2930058030()
	{
		UClass* Class = AFire_1_C__pf2930058030::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_Fire_1_0", &AFire_1_C__pf2930058030::execbpf__ExecuteUbergraph_Fire_1__pf_0 },
			{ "InpActEvt_One_K2Node_InputKeyEvent_0", &AFire_1_C__pf2930058030::execbpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf },
			{ "ReceiveBeginPlay", &AFire_1_C__pf2930058030::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AFire_1_C__pf2930058030::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0_Statics
	{
		struct Fire_1_C__pf2930058030_eventbpf__ExecuteUbergraph_Fire_1__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Fire_1_C__pf2930058030_eventbpf__ExecuteUbergraph_Fire_1__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fire_1__pf2930058030.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Fire_1_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_1_C__pf2930058030, nullptr, "ExecuteUbergraph_Fire_1_0", nullptr, nullptr, sizeof(Fire_1_C__pf2930058030_eventbpf__ExecuteUbergraph_Fire_1__pf_0_Parms), Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_AFire_1_C__pf2930058030();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_Fire_1_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Statics
	{
		struct Fire_1_C__pf2930058030_eventbpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Fire_1_C__pf2930058030_eventbpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fire_1__pf2930058030.h" },
		{ "OverrideNativeName", "InpActEvt_One_K2Node_InputKeyEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_1_C__pf2930058030, nullptr, "InpActEvt_One_K2Node_InputKeyEvent_0", nullptr, nullptr, sizeof(Fire_1_C__pf2930058030_eventbpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Parms), Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_1_C__pf2930058030();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_One_K2Node_InputKeyEvent_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/Fire_1__pf2930058030.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_1_C__pf2930058030, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_1_C__pf2930058030();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Fire_1_C__pf2930058030_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Fire_1__pf2930058030.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_1_C__pf2930058030, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(Fire_1_C__pf2930058030_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_1_C__pf2930058030();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFire_1_C__pf2930058030_NoRegister()
	{
		return AFire_1_C__pf2930058030::StaticClass();
	}
	struct Z_Construct_UClass_AFire_1_C__pf2930058030_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Fire__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Fire__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PointLight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PointLight__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ExecuteUbergraph_Fire_1__pf_0, "ExecuteUbergraph_Fire_1_0" }, // 1038960511
		{ &Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf, "InpActEvt_One_K2Node_InputKeyEvent_0" }, // 2000580309
		{ &Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3493670167
		{ &Z_Construct_UFunction_AFire_1_C__pf2930058030_bpf__ReceiveTick__pf, "ReceiveTick" }, // 488366621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Fire_1__pf2930058030.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Fire_1__pf2930058030.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Fire_1_C" },
		{ "ReplaceConverted", "/Game/PyroParticlePack/Blueprints/Fire_1.Fire_1_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_1__pf2930058030.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_1_C__pf2930058030, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_1__pf2930058030.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf = { "K2Node_InputKeyEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_1_C__pf2930058030, b0l__K2Node_InputKeyEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_bpv__Fire__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_1__pf2930058030.h" },
		{ "OverrideNativeName", "Fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_bpv__Fire__pf = { "Fire", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_1_C__pf2930058030, bpv__Fire__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_bpv__Fire__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_bpv__Fire__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_bpv__PointLight__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_1__pf2930058030.h" },
		{ "OverrideNativeName", "PointLight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_bpv__PointLight__pf = { "PointLight", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_1_C__pf2930058030, bpv__PointLight__pf), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_bpv__PointLight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_bpv__PointLight__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_bpv__Fire__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::NewProp_bpv__PointLight__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFire_1_C__pf2930058030>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::ClassParams = {
		&AFire_1_C__pf2930058030::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFire_1_C__pf2930058030()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/PyroParticlePack/Blueprints/Fire_1"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Fire_1_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFire_1_C__pf2930058030_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AFire_1_C__pf2930058030, TEXT("Fire_1_C"), 3657749073);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AFire_1_C__pf2930058030>()
	{
		return AFire_1_C__pf2930058030::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFire_1_C__pf2930058030(Z_Construct_UClass_AFire_1_C__pf2930058030, &AFire_1_C__pf2930058030::StaticClass, TEXT("/Game/PyroParticlePack/Blueprints/Fire_1"), TEXT("Fire_1_C"), true, TEXT("/Game/PyroParticlePack/Blueprints/Fire_1"), TEXT("/Game/PyroParticlePack/Blueprints/Fire_1.Fire_1_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFire_1_C__pf2930058030);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
