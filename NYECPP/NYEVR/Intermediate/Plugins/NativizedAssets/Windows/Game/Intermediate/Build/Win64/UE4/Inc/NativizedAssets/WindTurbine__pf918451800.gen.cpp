// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/WindTurbine__pf918451800.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindTurbine__pf918451800() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AWindTurbine_C__pf918451800_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AWindTurbine_C__pf918451800();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWindTurbine_C__pf918451800::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindTurbine_C__pf918451800::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindTurbine_C__pf918451800::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	static FName NAME_AWindTurbine_C__pf918451800_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AWindTurbine_C__pf918451800::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWindTurbine_C__pf918451800_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AWindTurbine_C__pf918451800::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		WindTurbine_C__pf918451800_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AWindTurbine_C__pf918451800_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AWindTurbine_C__pf918451800::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWindTurbine_C__pf918451800_bpf__UserConstructionScript__pf),NULL);
	}
	void AWindTurbine_C__pf918451800::StaticRegisterNativesAWindTurbine_C__pf918451800()
	{
		UClass* Class = AWindTurbine_C__pf918451800::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &AWindTurbine_C__pf918451800::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AWindTurbine_C__pf918451800::execbpf__ReceiveTick__pf },
			{ "UserConstructionScript", &AWindTurbine_C__pf918451800::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindTurbine_C__pf918451800, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AWindTurbine_C__pf918451800();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(WindTurbine_C__pf918451800_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindTurbine_C__pf918451800, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(WindTurbine_C__pf918451800_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AWindTurbine_C__pf918451800();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindTurbine_C__pf918451800, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AWindTurbine_C__pf918451800();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWindTurbine_C__pf918451800_NoRegister()
	{
		return AWindTurbine_C__pf918451800::StaticClass();
	}
	struct Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Sound__pf_MetaData[];
#endif
		static void NewProp_bpv__Sound__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Sound__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OffshorexWindxTurbine__pfTT_MetaData[];
#endif
		static void NewProp_bpv__OffshorexWindxTurbine__pfTT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__OffshorexWindxTurbine__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Rotorxdiameter__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Rotorxdiameter__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__random_speed_change__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__random_speed_change__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Logo_texture__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Logo_texture__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Height__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Height__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Dirtiness__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Dirtiness__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RPMxVariation__pfT_MetaData[];
#endif
		static void NewProp_bpv__RPMxVariation__pfT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__RPMxVariation__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RPM__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RPM__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Base__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Base__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Pillar__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Pillar__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Rotor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Rotor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Anemometer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Anemometer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__logo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__logo__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Nacelle__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Nacelle__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Offshore_base__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Offshore_base__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Audio__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Audio__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3935008118
		{ &Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__ReceiveTick__pf, "ReceiveTick" }, // 439261409
		{ &Z_Construct_UFunction_AWindTurbine_C__pf918451800_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1488980501
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WindTurbine__pf918451800.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "WindTurbine_C" },
		{ "ReplaceConverted", "/Game/Wind_Turbine/WindTurbine.WindTurbine_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddLocalRotation_SweepHitResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_1__pf = { "CallFunc_K2_AddLocalRotation_SweepHitResult_1", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddLocalRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf = { "CallFunc_K2_AddLocalRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, b0l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Sound__pf_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Sound" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Sound" },
	};
#endif
	void Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Sound__pf_SetBit(void* Obj)
	{
		((AWindTurbine_C__pf918451800*)Obj)->bpv__Sound__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Sound__pf = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWindTurbine_C__pf918451800), &Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Sound__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Sound__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Sound__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__OffshorexWindxTurbine__pfTT_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Offshore Wind Turbine" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Offshore Wind Turbine" },
	};
#endif
	void Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__OffshorexWindxTurbine__pfTT_SetBit(void* Obj)
	{
		((AWindTurbine_C__pf918451800*)Obj)->bpv__OffshorexWindxTurbine__pfTT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__OffshorexWindxTurbine__pfTT = { "Offshore Wind Turbine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWindTurbine_C__pf918451800), &Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__OffshorexWindxTurbine__pfTT_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__OffshorexWindxTurbine__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__OffshorexWindxTurbine__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Rotorxdiameter__pfT_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMax", "130" },
		{ "ClampMin", "60" },
		{ "DisplayName", "Rotor Diameter" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Rotor diameter" },
		{ "tooltip", "Rotor (and anemometer x5) rotation speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Rotorxdiameter__pfT = { "Rotor diameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__Rotorxdiameter__pfT), METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Rotorxdiameter__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Rotorxdiameter__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__random_speed_change__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Random Speed Change" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "random_speed_change" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__random_speed_change__pf = { "random_speed_change", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__random_speed_change__pf), METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__random_speed_change__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__random_speed_change__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Logo_texture__pf_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Logo Texture" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Logo_texture" },
		{ "tooltip", "Change logo with your texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Logo_texture__pf = { "Logo_texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__Logo_texture__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Logo_texture__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Logo_texture__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Height__pf_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMax", "150" },
		{ "ClampMin", "50" },
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Height" },
		{ "tooltip", "Rotor center height from ground (meters)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Height__pf = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__Height__pf), METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Height__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Height__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Dirtiness__pf_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Dirtiness" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Dirtiness" },
		{ "tooltip", "Make Turbine old" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Dirtiness__pf = { "Dirtiness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__Dirtiness__pf), METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Dirtiness__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Dirtiness__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__RPMxVariation__pfT_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "RPM Variation" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "RPM Variation" },
		{ "tooltip", "Add \xc2\xb1""30% random variation to rotation speed" },
	};
#endif
	void Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__RPMxVariation__pfT_SetBit(void* Obj)
	{
		((AWindTurbine_C__pf918451800*)Obj)->bpv__RPMxVariation__pfT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__RPMxVariation__pfT = { "RPM Variation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWindTurbine_C__pf918451800), &Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__RPMxVariation__pfT_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__RPMxVariation__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__RPMxVariation__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__RPM__pf_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMax", "200" },
		{ "ClampMin", "-200" },
		{ "DisplayName", "RPM" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "RPM" },
		{ "tooltip", "Rotor (and anemometer x5) rotation speed" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__RPM__pf = { "RPM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__RPM__pf), METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__RPM__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__RPM__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Base__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Base__pf = { "Base", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__Base__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Pillar__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Pillar" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Pillar__pf = { "Pillar", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__Pillar__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Pillar__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Pillar__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Rotor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Rotor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Rotor__pf = { "Rotor", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__Rotor__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Rotor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Rotor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Anemometer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Anemometer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Anemometer__pf = { "Anemometer", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__Anemometer__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Anemometer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Anemometer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__logo__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "logo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__logo__pf = { "logo", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__logo__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__logo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__logo__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Nacelle__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Nacelle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Nacelle__pf = { "Nacelle", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__Nacelle__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Nacelle__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Nacelle__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Offshore_base__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Offshore_base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Offshore_base__pf = { "Offshore_base", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__Offshore_base__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Offshore_base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Offshore_base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Audio__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WindTurbine__pf918451800.h" },
		{ "OverrideNativeName", "Audio" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Audio__pf = { "Audio", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindTurbine_C__pf918451800, bpv__Audio__pf), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Audio__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Audio__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Sound__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__OffshorexWindxTurbine__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Rotorxdiameter__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__random_speed_change__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Logo_texture__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Height__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Dirtiness__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__RPMxVariation__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__RPM__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Pillar__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Rotor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Anemometer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__logo__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Nacelle__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Offshore_base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::NewProp_bpv__Audio__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWindTurbine_C__pf918451800>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::ClassParams = {
		&AWindTurbine_C__pf918451800::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWindTurbine_C__pf918451800()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Wind_Turbine/WindTurbine"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("WindTurbine_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWindTurbine_C__pf918451800_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AWindTurbine_C__pf918451800, TEXT("WindTurbine_C"), 202352439);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AWindTurbine_C__pf918451800>()
	{
		return AWindTurbine_C__pf918451800::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWindTurbine_C__pf918451800(Z_Construct_UClass_AWindTurbine_C__pf918451800, &AWindTurbine_C__pf918451800::StaticClass, TEXT("/Game/Wind_Turbine/WindTurbine"), TEXT("WindTurbine_C"), true, TEXT("/Game/Wind_Turbine/WindTurbine"), TEXT("/Game/Wind_Turbine/WindTurbine.WindTurbine_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWindTurbine_C__pf918451800);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
