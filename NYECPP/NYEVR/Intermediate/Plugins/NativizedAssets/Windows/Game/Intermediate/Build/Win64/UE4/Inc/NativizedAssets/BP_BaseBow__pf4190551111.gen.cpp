// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_BaseBow__pf4190551111.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_BaseBow__pf4190551111() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_BaseBow_C__pf4190551111();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPlayerSaveGameInfo_C__pf205484891_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPickupActorInterface_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_BaseBow_C__pf4190551111::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_BaseBow_C__pf4190551111::execbpf__AltRelease__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AltRelease__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_BaseBow_C__pf4190551111::execbpf__Pickup__pf)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_bpp__AttachTo__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Pickup__pf(Z_Param_bpp__AttachTo__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_BaseBow_C__pf4190551111::execbpf__Release__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Release__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_BaseBow_C__pf4190551111_bpf__AltRelease__pf = FName(TEXT("AltRelease"));
	void ABP_BaseBow_C__pf4190551111::eventbpf__AltRelease__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_BaseBow_C__pf4190551111_bpf__AltRelease__pf),NULL);
	}
	static FName NAME_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf = FName(TEXT("Pickup"));
	void ABP_BaseBow_C__pf4190551111::eventbpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
	{
		BP_BaseBow_C__pf4190551111_eventbpf__Pickup__pf_Parms Parms;
		Parms.bpp__AttachTo__pf=bpp__AttachTo__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf),&Parms);
	}
	static FName NAME_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_BaseBow_C__pf4190551111::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_BaseBow_C__pf4190551111_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_BaseBow_C__pf4190551111_bpf__Release__pf = FName(TEXT("Release"));
	void ABP_BaseBow_C__pf4190551111::eventbpf__Release__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_BaseBow_C__pf4190551111_bpf__Release__pf),NULL);
	}
	void ABP_BaseBow_C__pf4190551111::StaticRegisterNativesABP_BaseBow_C__pf4190551111()
	{
		UClass* Class = ABP_BaseBow_C__pf4190551111::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AltRelease", &ABP_BaseBow_C__pf4190551111::execbpf__AltRelease__pf },
			{ "Pickup", &ABP_BaseBow_C__pf4190551111::execbpf__Pickup__pf },
			{ "ReceiveTick", &ABP_BaseBow_C__pf4190551111::execbpf__ReceiveTick__pf },
			{ "Release", &ABP_BaseBow_C__pf4190551111::execbpf__Release__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__AltRelease__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__AltRelease__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "AltRelease" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__AltRelease__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_BaseBow_C__pf4190551111, nullptr, "AltRelease", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__AltRelease__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__AltRelease__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__AltRelease__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_BaseBow_C__pf4190551111();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("AltRelease") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__AltRelease__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__AttachTo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__AttachTo__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf = { "bpp__AttachTo__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_BaseBow_C__pf4190551111_eventbpf__Pickup__pf_Parms, bpp__AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "Pickup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_BaseBow_C__pf4190551111, nullptr, "Pickup", nullptr, nullptr, sizeof(BP_BaseBow_C__pf4190551111_eventbpf__Pickup__pf_Parms), Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_BaseBow_C__pf4190551111();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Pickup") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_BaseBow_C__pf4190551111_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_BaseBow_C__pf4190551111, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BP_BaseBow_C__pf4190551111_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_BaseBow_C__pf4190551111();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Release__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Release__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Release__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_BaseBow_C__pf4190551111, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Release__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Release__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Release__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_BaseBow_C__pf4190551111();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Release") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Release__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_NoRegister()
	{
		return ABP_BaseBow_C__pf4190551111::StaticClass();
	}
	struct Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorRelativeRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorRelativeRotation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_AttachTo__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Yaw_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Yaw_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Pitch_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Pitch_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Roll_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Roll_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Yaw__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Pitch__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Roll__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ArrowProjectileClass__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__ArrowProjectileClass__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FloatCurve__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FloatCurve__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LastCharge__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__LastCharge__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arrow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arrow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Charge__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Charge__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StringComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StringComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GrabComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__GrabComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SkeletalMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SkeletalMesh__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__AltRelease__pf, "AltRelease" }, // 535182252
		{ &Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Pickup__pf, "Pickup" }, // 267184440
		{ &Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3681550350
		{ &Z_Construct_UFunction_ABP_BaseBow_C__pf4190551111_bpf__Release__pf, "Release" }, // 2773369122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_BaseBow__pf4190551111.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_BaseBow_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Bow/BP_BaseBow.BP_BaseBow_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_SetActorRelativeRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorRelativeRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_SetActorRelativeRotation_SweepHitResult__pf = { "CallFunc_K2_SetActorRelativeRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__CallFunc_K2_SetActorRelativeRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_SetActorRelativeRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_SetActorRelativeRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf = { "CallFunc_BreakVector_Z", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf = { "CallFunc_BreakVector_Y", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf = { "CallFunc_BreakVector_X", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_Event_AttachTo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf = { "K2Node_Event_AttachTo", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__K2Node_Event_AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw_1__pf = { "CallFunc_BreakRotator_Yaw_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__CallFunc_BreakRotator_Yaw_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch_1__pf = { "CallFunc_BreakRotator_Pitch_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__CallFunc_BreakRotator_Pitch_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Roll_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll_1__pf = { "CallFunc_BreakRotator_Roll_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__CallFunc_BreakRotator_Roll_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf = { "CallFunc_BreakRotator_Yaw", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__CallFunc_BreakRotator_Yaw__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf = { "CallFunc_BreakRotator_Pitch", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__CallFunc_BreakRotator_Pitch__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Roll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf = { "CallFunc_BreakRotator_Roll", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__CallFunc_BreakRotator_Roll__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((ABP_BaseBow_C__pf4190551111*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_BaseBow_C__pf4190551111), &Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_Save_Game_Info" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf = { "K2Node_DynamicCast_AsPlayer_Save_Game_Info", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf), Z_Construct_UClass_UPlayerSaveGameInfo_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddActorLocalOffset_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf = { "CallFunc_K2_AddActorLocalOffset_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ABP_BaseBow_C__pf4190551111*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_BaseBow_C__pf4190551111), &Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMotion_Controller_Pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = { "K2Node_DynamicCast_AsMotion_Controller_Pawn", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__ArrowProjectileClass__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Arrow Projectile Class" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ArrowProjectileClass" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__ArrowProjectileClass__pf = { "ArrowProjectileClass", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, bpv__ArrowProjectileClass__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__ArrowProjectileClass__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__ArrowProjectileClass__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__FloatCurve__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Float Curve" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "FloatCurve" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__FloatCurve__pf = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, bpv__FloatCurve__pf), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__FloatCurve__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__FloatCurve__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__LastCharge__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Last Charge" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LastCharge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__LastCharge__pf = { "LastCharge", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, bpv__LastCharge__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__LastCharge__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__LastCharge__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__Arrow__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Arrow" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Arrow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__Arrow__pf = { "Arrow", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, bpv__Arrow__pf), Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__Arrow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__Arrow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__Charge__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Charge" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Charge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__Charge__pf = { "Charge", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, bpv__Charge__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__Charge__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__Charge__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__StringComp__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "String Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "StringComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__StringComp__pf = { "StringComp", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, bpv__StringComp__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__StringComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__StringComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__GrabComp__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Grab Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "GrabComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__GrabComp__pf = { "GrabComp", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, bpv__GrabComp__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__GrabComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__GrabComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__SkeletalMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BaseBow__pf4190551111.h" },
		{ "OverrideNativeName", "SkeletalMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__SkeletalMesh__pf = { "SkeletalMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseBow_C__pf4190551111, bpv__SkeletalMesh__pf), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__SkeletalMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__SkeletalMesh__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_SetActorRelativeRotation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__Temp_int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__ArrowProjectileClass__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__FloatCurve__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__LastCharge__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__Arrow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__Charge__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__StringComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__GrabComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::NewProp_bpv__SkeletalMesh__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPickupActorInterface_C_NoRegister, (int32)VTABLE_OFFSET(ABP_BaseBow_C__pf4190551111, IPickupActorInterface_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_BaseBow_C__pf4190551111>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::ClassParams = {
		&ABP_BaseBow_C__pf4190551111::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_BaseBow_C__pf4190551111()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Bow/BP_BaseBow"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_BaseBow_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_BaseBow_C__pf4190551111, TEXT("BP_BaseBow_C"), 3396479376);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_BaseBow_C__pf4190551111>()
	{
		return ABP_BaseBow_C__pf4190551111::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_BaseBow_C__pf4190551111(Z_Construct_UClass_ABP_BaseBow_C__pf4190551111, &ABP_BaseBow_C__pf4190551111::StaticClass, TEXT("/Game/Blueprints/Bow/BP_BaseBow"), TEXT("BP_BaseBow_C"), true, TEXT("/Game/Blueprints/Bow/BP_BaseBow"), TEXT("/Game/Blueprints/Bow/BP_BaseBow.BP_BaseBow_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_BaseBow_C__pf4190551111);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
