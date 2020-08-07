// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_Air_Balloon__pf3784893704.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Air_Balloon__pf3784893704() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_Air_Balloon_C__pf3784893704::execbpf__Construction__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Construction__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Air_Balloon_C__pf3784893704::execbpf__PatternxChange__pfT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__PatternxChange__pfT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Air_Balloon_C__pf3784893704::execbpf__Burner__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Burner__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Air_Balloon_C__pf3784893704::execbpf__GetxHeightxabovexground__pfTTT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetxHeightxabovexground__pfTTT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Air_Balloon_C__pf3784893704::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Air_Balloon_C__pf3784893704::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Air_Balloon_C__pf3784893704::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Air_Balloon_C__pf3784893704::execbpf__ExecuteUbergraph_BP_Air_Balloon__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_Air_Balloon_C__pf3784893704::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_Air_Balloon_C__pf3784893704::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_Air_Balloon_C__pf3784893704_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_Air_Balloon_C__pf3784893704_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Air_Balloon_C__pf3784893704::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Air_Balloon_C__pf3784893704_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Air_Balloon_C__pf3784893704::StaticRegisterNativesABP_Air_Balloon_C__pf3784893704()
	{
		UClass* Class = ABP_Air_Balloon_C__pf3784893704::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Burner", &ABP_Air_Balloon_C__pf3784893704::execbpf__Burner__pf },
			{ "Construction", &ABP_Air_Balloon_C__pf3784893704::execbpf__Construction__pf },
			{ "ExecuteUbergraph_BP_Air_Balloon_0", &ABP_Air_Balloon_C__pf3784893704::execbpf__ExecuteUbergraph_BP_Air_Balloon__pf_0 },
			{ "Get Height above ground", &ABP_Air_Balloon_C__pf3784893704::execbpf__GetxHeightxabovexground__pfTTT },
			{ "Pattern Change", &ABP_Air_Balloon_C__pf3784893704::execbpf__PatternxChange__pfT },
			{ "ReceiveBeginPlay", &ABP_Air_Balloon_C__pf3784893704::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &ABP_Air_Balloon_C__pf3784893704::execbpf__ReceiveTick__pf },
			{ "UserConstructionScript", &ABP_Air_Balloon_C__pf3784893704::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Burner__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Burner__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Burner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Burner__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704, nullptr, "Burner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Burner__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Burner__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Burner__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Burner") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Burner__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Construction__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Construction__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Construction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Construction__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704, nullptr, "Construction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Construction__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Construction__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Construction__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Construction") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Construction__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Statics
	{
		struct BP_Air_Balloon_C__pf3784893704_eventbpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Air_Balloon_C__pf3784893704_eventbpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_BP_Air_Balloon_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704, nullptr, "ExecuteUbergraph_BP_Air_Balloon_0", nullptr, nullptr, sizeof(BP_Air_Balloon_C__pf3784893704_eventbpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Parms), Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_BP_Air_Balloon_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__GetxHeightxabovexground__pfTTT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__GetxHeightxabovexground__pfTTT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Get Height above ground" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__GetxHeightxabovexground__pfTTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704, nullptr, "Get Height above ground", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__GetxHeightxabovexground__pfTTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__GetxHeightxabovexground__pfTTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__GetxHeightxabovexground__pfTTT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Get Height above ground") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__GetxHeightxabovexground__pfTTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__PatternxChange__pfT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__PatternxChange__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Pattern Change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__PatternxChange__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704, nullptr, "Pattern Change", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__PatternxChange__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__PatternxChange__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__PatternxChange__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Pattern Change") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__PatternxChange__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Air_Balloon_C__pf3784893704_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BP_Air_Balloon_C__pf3784893704_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_NoRegister()
	{
		return ABP_Air_Balloon_C__pf3784893704::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_IsClosed_Variable__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Override_Burner__pf_MetaData[];
#endif
		static void NewProp_bpv__Override_Burner__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Override_Burner__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RND__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__RND__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Peoplexmeshes__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Peoplexmeshes__pfT;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Peoplexmeshes__pfT_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SocketsxOccupied__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__SocketsxOccupied__pfT;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__SocketsxOccupied__pfT_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__People__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__People__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EnvelopexPattern__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__EnvelopexPattern__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EnvelopexEmissive__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__EnvelopexEmissive__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Randomxmovementxvector__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Randomxmovementxvector__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EnvelopexMaterial__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__EnvelopexMaterial__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EnvelopexTexture__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__EnvelopexTexture__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Rotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Rotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Dragxcoefficient__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Dragxcoefficient__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Land__pf_MetaData[];
#endif
		static void NewProp_bpv__Land__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Land__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RandomxRotation__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RandomxRotation__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TargetxHeight__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TargetxHeight__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Burnerxon__pfT_MetaData[];
#endif
		static void NewProp_bpv__Burnerxon__pfT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Burnerxon__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WindxSpeedxmxs__pfTTE_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__WindxSpeedxmxs__pfTTE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WindxDirectionxx__pfTTBx_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__WindxDirectionxx__pfTTBx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Heightxabovexground__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Heightxabovexground__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Air_Temperature__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Air_Temperature__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HeightxMax__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__HeightxMax__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HeightxMin__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__HeightxMin__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Balloon__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Balloon__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Envelope_Center__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Envelope_Center__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SM_Flame__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SM_Flame__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Burner__pf, "Burner" }, // 2973981432
		{ &Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__Construction__pf, "Construction" }, // 4035343995
		{ &Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0, "ExecuteUbergraph_BP_Air_Balloon_0" }, // 1305986841
		{ &Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__GetxHeightxabovexground__pfTTT, "Get Height above ground" }, // 1431520759
		{ &Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__PatternxChange__pfT, "Pattern Change" }, // 861153991
		{ &Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3142901432
		{ &Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3382376955
		{ &Z_Construct_UFunction_ABP_Air_Balloon_C__pf3784893704_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1988913558
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_Air_Balloon__pf3784893704.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_Air_Balloon_C" },
		{ "ReplaceConverted", "/Game/Air_Balloons/Blueprints/BP_Air_Balloon.BP_Air_Balloon_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Temp_bool_IsClosed_Variable_2" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_C__pf3784893704*)Obj)->b0l__Temp_bool_IsClosed_Variable_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf = { "Temp_bool_IsClosed_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Temp_bool_Has_Been_Initd_Variable_2" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_C__pf3784893704*)Obj)->b0l__Temp_bool_Has_Been_Initd_Variable_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf = { "Temp_bool_Has_Been_Initd_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Temp_bool_IsClosed_Variable_1" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_C__pf3784893704*)Obj)->b0l__Temp_bool_IsClosed_Variable_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf = { "Temp_bool_IsClosed_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Temp_bool_Has_Been_Initd_Variable_1" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_C__pf3784893704*)Obj)->b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = { "Temp_bool_Has_Been_Initd_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Temp_bool_IsClosed_Variable" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_C__pf3784893704*)Obj)->b0l__Temp_bool_IsClosed_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf = { "Temp_bool_IsClosed_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Temp_bool_Has_Been_Initd_Variable" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_C__pf3784893704*)Obj)->b0l__Temp_bool_Has_Been_Initd_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf = { "Temp_bool_Has_Been_Initd_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Override_Burner__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Override Burner" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Override_Burner" },
		{ "tooltip", "Allows Burner control from Drivable blueprint" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Override_Burner__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_C__pf3784893704*)Obj)->bpv__Override_Burner__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Override_Burner__pf = { "Override_Burner", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Override_Burner__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Override_Burner__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Override_Burner__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__RND__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "RND" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "RND" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__RND__pf = { "RND", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__RND__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__RND__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__RND__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Peoplexmeshes__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "People Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "People meshes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Peoplexmeshes__pfT = { "People meshes", nullptr, (EPropertyFlags)0x001000800001000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__Peoplexmeshes__pfT), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Peoplexmeshes__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Peoplexmeshes__pfT_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Peoplexmeshes__pfT_Inner = { "bpv__Peoplexmeshes__pfT", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__SocketsxOccupied__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Sockets Occupied" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Sockets Occupied" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__SocketsxOccupied__pfT = { "Sockets Occupied", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__SocketsxOccupied__pfT), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__SocketsxOccupied__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__SocketsxOccupied__pfT_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__SocketsxOccupied__pfT_Inner = { "bpv__SocketsxOccupied__pfT", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__People__pf_MetaData[] = {
		{ "Category", "Air Balloon" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "DisplayName", "People" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "People" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__People__pf = { "People", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__People__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__People__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__People__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexPattern__pfT_MetaData[] = {
		{ "Category", "Air Balloon" },
		{ "ClampMax", "13" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Envelope Pattern" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Envelope Pattern" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexPattern__pfT = { "Envelope Pattern", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__EnvelopexPattern__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexPattern__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexPattern__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexEmissive__pfT_MetaData[] = {
		{ "Category", "Air Balloon" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Envelope Emissive" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Envelope Emissive" },
		{ "tooltip", "Brightness of envelope light when burner is on" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexEmissive__pfT = { "Envelope Emissive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__EnvelopexEmissive__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexEmissive__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexEmissive__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Randomxmovementxvector__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Random Movement Vector" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Random movement vector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Randomxmovementxvector__pfTT = { "Random movement vector", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__Randomxmovementxvector__pfTT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Randomxmovementxvector__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Randomxmovementxvector__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexMaterial__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Envelope Material" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Envelope Material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexMaterial__pfT = { "Envelope Material", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__EnvelopexMaterial__pfT), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexMaterial__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexMaterial__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexTexture__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Envelope Texture" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Envelope Texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexTexture__pfT = { "Envelope Texture", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__EnvelopexTexture__pfT), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexTexture__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexTexture__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Rotation__pf_MetaData[] = {
		{ "Category", "Air Balloon" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Rotation" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Rotation" },
		{ "tooltip", "Amount of random Z rotation speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Rotation__pf = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__Rotation__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Rotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Rotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Dragxcoefficient__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Drag Coefficient" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Drag coefficient" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Dragxcoefficient__pfT = { "Drag coefficient", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__Dragxcoefficient__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Dragxcoefficient__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Dragxcoefficient__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Land__pf_MetaData[] = {
		{ "Category", "Air Balloon" },
		{ "DisplayName", "Land" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Land" },
		{ "tooltip", "Balloon will begin landing. Turn off for take off. Can be changed in runtime" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Land__pf_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_C__pf3784893704*)Obj)->bpv__Land__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Land__pf = { "Land", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Land__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Land__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Land__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__RandomxRotation__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Random Rotation" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Random Rotation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__RandomxRotation__pfT = { "Random Rotation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__RandomxRotation__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__RandomxRotation__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__RandomxRotation__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__TargetxHeight__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Target Height" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Target Height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__TargetxHeight__pfT = { "Target Height", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__TargetxHeight__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__TargetxHeight__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__TargetxHeight__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Burnerxon__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Burner On" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Burner on" },
	};
#endif
	void Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Burnerxon__pfT_SetBit(void* Obj)
	{
		((ABP_Air_Balloon_C__pf3784893704*)Obj)->bpv__Burnerxon__pfT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Burnerxon__pfT = { "Burner on", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Air_Balloon_C__pf3784893704), &Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Burnerxon__pfT_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Burnerxon__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Burnerxon__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__WindxSpeedxmxs__pfTTE_MetaData[] = {
		{ "Category", "Air Balloon" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Wind Speed M/s" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Wind Speed m/s" },
		{ "tooltip", "Can be changed in runtime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__WindxSpeedxmxs__pfTTE = { "Wind Speed m/s", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__WindxSpeedxmxs__pfTTE), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__WindxSpeedxmxs__pfTTE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__WindxSpeedxmxs__pfTTE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__WindxDirectionxx__pfTTBx_MetaData[] = {
		{ "Category", "Air Balloon" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Wind Direction \xc2\xb0" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Wind Direction \xc2\xb0" },
		{ "tooltip", "Can be changed in runtime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__WindxDirectionxx__pfTTBx = { "Wind Direction \xc2\xb0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__WindxDirectionxx__pfTTBx), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__WindxDirectionxx__pfTTBx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__WindxDirectionxx__pfTTBx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Heightxabovexground__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Height Above Ground" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Height above ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Heightxabovexground__pfTT = { "Height above ground", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__Heightxabovexground__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Heightxabovexground__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Heightxabovexground__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Air_Temperature__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Air Temperature" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Air_Temperature" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Air_Temperature__pf = { "Air_Temperature", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__Air_Temperature__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Air_Temperature__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Air_Temperature__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__HeightxMax__pfT_MetaData[] = {
		{ "Category", "Air Balloon" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Height Max" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Height Max" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__HeightxMax__pfT = { "Height Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__HeightxMax__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__HeightxMax__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__HeightxMax__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__HeightxMin__pfT_MetaData[] = {
		{ "Category", "Air Balloon" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Height Min" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Height Min" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__HeightxMin__pfT = { "Height Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__HeightxMin__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__HeightxMin__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__HeightxMin__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Balloon__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Balloon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Balloon__pf = { "Balloon", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__Balloon__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Balloon__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Balloon__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Envelope_Center__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "Envelope_Center" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Envelope_Center__pf = { "Envelope_Center", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__Envelope_Center__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Envelope_Center__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Envelope_Center__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__SM_Flame__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Air_Balloon__pf3784893704.h" },
		{ "OverrideNativeName", "SM_Flame" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__SM_Flame__pf = { "SM_Flame", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Air_Balloon_C__pf3784893704, bpv__SM_Flame__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__SM_Flame__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__SM_Flame__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Override_Burner__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__RND__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Peoplexmeshes__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Peoplexmeshes__pfT_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__SocketsxOccupied__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__SocketsxOccupied__pfT_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__People__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexPattern__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexEmissive__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Randomxmovementxvector__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexMaterial__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__EnvelopexTexture__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Rotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Dragxcoefficient__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Land__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__RandomxRotation__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__TargetxHeight__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Burnerxon__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__WindxSpeedxmxs__pfTTE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__WindxDirectionxx__pfTTBx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Heightxabovexground__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Air_Temperature__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__HeightxMax__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__HeightxMin__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Balloon__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__Envelope_Center__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::NewProp_bpv__SM_Flame__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Air_Balloon_C__pf3784893704>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::ClassParams = {
		&ABP_Air_Balloon_C__pf3784893704::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Air_Balloons/Blueprints/BP_Air_Balloon"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Air_Balloon_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Air_Balloon_C__pf3784893704, TEXT("BP_Air_Balloon_C"), 790345792);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_Air_Balloon_C__pf3784893704>()
	{
		return ABP_Air_Balloon_C__pf3784893704::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Air_Balloon_C__pf3784893704(Z_Construct_UClass_ABP_Air_Balloon_C__pf3784893704, &ABP_Air_Balloon_C__pf3784893704::StaticClass, TEXT("/Game/Air_Balloons/Blueprints/BP_Air_Balloon"), TEXT("BP_Air_Balloon_C"), true, TEXT("/Game/Air_Balloons/Blueprints/BP_Air_Balloon"), TEXT("/Game/Air_Balloons/Blueprints/BP_Air_Balloon.BP_Air_Balloon_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Air_Balloon_C__pf3784893704);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
