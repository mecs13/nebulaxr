// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_CommercialPlane__pf3475422732.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_CommercialPlane__pf3475422732() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UCommercialPlane_AnimBlueprint_C__pf1945484998_NoRegister();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__EAirplaneType__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_CommercialPlane_C__pf3475422732::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_CommercialPlane_C__pf3475422732::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_CommercialPlane_C__pf3475422732::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_CommercialPlane_C__pf3475422732::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_CommercialPlane_C__pf3475422732::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_CommercialPlane_C__pf3475422732_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_CommercialPlane_C__pf3475422732_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_CommercialPlane_C__pf3475422732::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_CommercialPlane_C__pf3475422732_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_CommercialPlane_C__pf3475422732::StaticRegisterNativesABP_CommercialPlane_C__pf3475422732()
	{
		UClass* Class = ABP_CommercialPlane_C__pf3475422732::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &ABP_CommercialPlane_C__pf3475422732::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &ABP_CommercialPlane_C__pf3475422732::execbpf__ReceiveTick__pf },
			{ "UserConstructionScript", &ABP_CommercialPlane_C__pf3475422732::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_CommercialPlane_C__pf3475422732_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BP_CommercialPlane_C__pf3475422732_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_NoRegister()
	{
		return ABP_CommercialPlane_C__pf3475422732::StaticClass();
	}
	struct Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsCommercial_Plane_Anim_Blueprint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsCommercial_Plane_Anim_Blueprint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CustomColor__pf_MetaData[];
#endif
		static void NewProp_bpv__CustomColor__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__CustomColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CarrierLivery__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__CarrierLivery__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__CarrierLivery__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LiveryColor4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__LiveryColor4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LiveryColor3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__LiveryColor3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LiveryColor2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__LiveryColor2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LiveryColor1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__LiveryColor1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SlatsDeployOuter__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SlatsDeployOuter__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SlatsDeployInner__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SlatsDeployInner__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ThrustReverserDeploy__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ThrustReverserDeploy__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Rudder__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Rudder__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Elevator__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Elevator__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AileronRight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__AileronRight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AileronLeft__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__AileronLeft__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FlapsOuter__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FlapsOuter__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FlapsInner__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FlapsInner__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeedbrakesOuter6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpeedbrakesOuter6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeedbrakesOuter5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpeedbrakesOuter5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeedbrakesOuter4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpeedbrakesOuter4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeedbrakesOuter3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpeedbrakesOuter3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeedbrakesOuter1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpeedbrakesOuter1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeedbrakesInner2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpeedbrakesInner2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeedbrakesInner1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpeedbrakesInner1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MainGearDoorBay__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__MainGearDoorBay__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MainWheelShocks__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__MainWheelShocks__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MainGearRetract__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__MainGearRetract__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FrontWheelShocks__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FrontWheelShocks__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FrontGearRetract__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FrontGearRetract__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FrontGearDoors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FrontGearDoors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FrontWheelTurn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FrontWheelTurn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightWheelSpin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RightWheelSpin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftWheelSpin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__LeftWheelSpin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FrontWheelSpin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FrontWheelSpin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftEngineSpin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__LeftEngineSpin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightEngineSpin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RightEngineSpin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Plane__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Plane__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 104126767
		{ &Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__ReceiveTick__pf, "ReceiveTick" }, // 2178094864
		{ &Z_Construct_UFunction_ABP_CommercialPlane_C__pf3475422732_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1983543693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_CommercialPlane__pf3475422732.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_CommercialPlane_C" },
		{ "ReplaceConverted", "/Game/CommercialPlane/Blueprints/BP_CommercialPlane.BP_CommercialPlane_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ABP_CommercialPlane_C__pf3475422732*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_CommercialPlane_C__pf3475422732), &Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_DynamicCast_AsCommercial_Plane_Anim_Blueprint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsCommercial_Plane_Anim_Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_DynamicCast_AsCommercial_Plane_Anim_Blueprint__pf = { "K2Node_DynamicCast_AsCommercial_Plane_Anim_Blueprint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, b0l__K2Node_DynamicCast_AsCommercial_Plane_Anim_Blueprint__pf), Z_Construct_UClass_UCommercialPlane_AnimBlueprint_C__pf1945484998_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_DynamicCast_AsCommercial_Plane_Anim_Blueprint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_DynamicCast_AsCommercial_Plane_Anim_Blueprint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CustomColor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Custom Color" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CustomColor" },
	};
#endif
	void Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CustomColor__pf_SetBit(void* Obj)
	{
		((ABP_CommercialPlane_C__pf3475422732*)Obj)->bpv__CustomColor__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CustomColor__pf = { "CustomColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_CommercialPlane_C__pf3475422732), &Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CustomColor__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CustomColor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CustomColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CarrierLivery__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Carrier Livery" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CarrierLivery" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CarrierLivery__pf = { "CarrierLivery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__CarrierLivery__pf), Z_Construct_UEnum_NativizedAssets_E__EAirplaneType__pf, METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CarrierLivery__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CarrierLivery__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CarrierLivery__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor4__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Livery Color 4" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LiveryColor4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor4__pf = { "LiveryColor4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__LiveryColor4__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor3__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Livery Color 3" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LiveryColor3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor3__pf = { "LiveryColor3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__LiveryColor3__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor2__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Livery Color 2" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LiveryColor2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor2__pf = { "LiveryColor2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__LiveryColor2__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Livery Color 1" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LiveryColor1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor1__pf = { "LiveryColor1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__LiveryColor1__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SlatsDeployOuter__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Slats Deploy Outer" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SlatsDeployOuter" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SlatsDeployOuter__pf = { "SlatsDeployOuter", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__SlatsDeployOuter__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SlatsDeployOuter__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SlatsDeployOuter__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SlatsDeployInner__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Slats Deploy Inner" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SlatsDeployInner" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SlatsDeployInner__pf = { "SlatsDeployInner", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__SlatsDeployInner__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SlatsDeployInner__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SlatsDeployInner__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__ThrustReverserDeploy__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Thrust Reverser Deploy" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ThrustReverserDeploy" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__ThrustReverserDeploy__pf = { "ThrustReverserDeploy", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__ThrustReverserDeploy__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__ThrustReverserDeploy__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__ThrustReverserDeploy__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Rudder__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "45" },
		{ "ClampMin", "-45" },
		{ "DisplayName", "Rudder" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "Rudder" },
		{ "UIMax", "45" },
		{ "UIMin", "-45" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Rudder__pf = { "Rudder", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__Rudder__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Rudder__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Rudder__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Elevator__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "45" },
		{ "ClampMin", "-45" },
		{ "DisplayName", "Elevator" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "Elevator" },
		{ "UIMax", "45" },
		{ "UIMin", "-45" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Elevator__pf = { "Elevator", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__Elevator__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Elevator__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Elevator__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__AileronRight__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Aileron Right" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "AileronRight" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__AileronRight__pf = { "AileronRight", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__AileronRight__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__AileronRight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__AileronRight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__AileronLeft__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Aileron Left" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "AileronLeft" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__AileronLeft__pf = { "AileronLeft", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__AileronLeft__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__AileronLeft__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__AileronLeft__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FlapsOuter__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Flaps Outer" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "FlapsOuter" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FlapsOuter__pf = { "FlapsOuter", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__FlapsOuter__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FlapsOuter__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FlapsOuter__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FlapsInner__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Flaps Inner" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "FlapsInner" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FlapsInner__pf = { "FlapsInner", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__FlapsInner__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FlapsInner__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FlapsInner__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter6__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Speedbrakes Outer 6" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "SpeedbrakesOuter6" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter6__pf = { "SpeedbrakesOuter6", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__SpeedbrakesOuter6__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter5__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Speedbrakes Outer 5" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "SpeedbrakesOuter5" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter5__pf = { "SpeedbrakesOuter5", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__SpeedbrakesOuter5__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter4__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Speedbrakes Outer 4" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "SpeedbrakesOuter4" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter4__pf = { "SpeedbrakesOuter4", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__SpeedbrakesOuter4__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter3__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Speedbrakes Outer 3" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "SpeedbrakesOuter3" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter3__pf = { "SpeedbrakesOuter3", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__SpeedbrakesOuter3__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Speedbrakes Outer 1" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "SpeedbrakesOuter1" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter1__pf = { "SpeedbrakesOuter1", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__SpeedbrakesOuter1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesInner2__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Speedbrakes Inner 2" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "SpeedbrakesInner2" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesInner2__pf = { "SpeedbrakesInner2", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__SpeedbrakesInner2__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesInner2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesInner2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesInner1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Speedbrakes Inner 1" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "SpeedbrakesInner1" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesInner1__pf = { "SpeedbrakesInner1", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__SpeedbrakesInner1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesInner1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesInner1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainGearDoorBay__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Main Gear Door Bay" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "MainGearDoorBay" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainGearDoorBay__pf = { "MainGearDoorBay", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__MainGearDoorBay__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainGearDoorBay__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainGearDoorBay__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainWheelShocks__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Main Wheel Shocks" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "MainWheelShocks" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainWheelShocks__pf = { "MainWheelShocks", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__MainWheelShocks__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainWheelShocks__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainWheelShocks__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainGearRetract__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Main Gear Retract" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "MainGearRetract" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainGearRetract__pf = { "MainGearRetract", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__MainGearRetract__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainGearRetract__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainGearRetract__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelShocks__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Front Wheel Shocks" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "FrontWheelShocks" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelShocks__pf = { "FrontWheelShocks", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__FrontWheelShocks__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelShocks__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelShocks__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontGearRetract__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Front Gear Retract" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "FrontGearRetract" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontGearRetract__pf = { "FrontGearRetract", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__FrontGearRetract__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontGearRetract__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontGearRetract__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontGearDoors__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Front Gear Doors" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "FrontGearDoors" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontGearDoors__pf = { "FrontGearDoors", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__FrontGearDoors__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontGearDoors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontGearDoors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelTurn__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "45" },
		{ "ClampMin", "-45" },
		{ "DisplayName", "Front Wheel Turn" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "FrontWheelTurn" },
		{ "UIMax", "45" },
		{ "UIMin", "-45" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelTurn__pf = { "FrontWheelTurn", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__FrontWheelTurn__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelTurn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelTurn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__RightWheelSpin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "5" },
		{ "ClampMin", "-5" },
		{ "DisplayName", "Right Wheel Spin" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "RightWheelSpin" },
		{ "UIMax", "5" },
		{ "UIMin", "-5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__RightWheelSpin__pf = { "RightWheelSpin", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__RightWheelSpin__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__RightWheelSpin__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__RightWheelSpin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LeftWheelSpin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "5" },
		{ "ClampMin", "-5" },
		{ "DisplayName", "Left Wheel Spin" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "LeftWheelSpin" },
		{ "UIMax", "5" },
		{ "UIMin", "-5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LeftWheelSpin__pf = { "LeftWheelSpin", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__LeftWheelSpin__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LeftWheelSpin__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LeftWheelSpin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelSpin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "5" },
		{ "ClampMin", "-5" },
		{ "DisplayName", "Front Wheel Spin" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "FrontWheelSpin" },
		{ "UIMax", "5" },
		{ "UIMin", "-5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelSpin__pf = { "FrontWheelSpin", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__FrontWheelSpin__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelSpin__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelSpin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LeftEngineSpin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "2" },
		{ "ClampMin", "-2" },
		{ "DisplayName", "Left Engine Spin" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "LeftEngineSpin" },
		{ "UIMax", "2" },
		{ "UIMin", "-2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LeftEngineSpin__pf = { "LeftEngineSpin", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__LeftEngineSpin__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LeftEngineSpin__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LeftEngineSpin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__RightEngineSpin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "2" },
		{ "ClampMin", "-2" },
		{ "DisplayName", "Right Engine Spin" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "RightEngineSpin" },
		{ "UIMax", "2" },
		{ "UIMin", "-2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__RightEngineSpin__pf = { "RightEngineSpin", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__RightEngineSpin__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__RightEngineSpin__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__RightEngineSpin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Plane__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_CommercialPlane__pf3475422732.h" },
		{ "OverrideNativeName", "Plane" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Plane__pf = { "Plane", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_CommercialPlane_C__pf3475422732, bpv__Plane__pf), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Plane__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Plane__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_DynamicCast_AsCommercial_Plane_Anim_Blueprint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CustomColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CarrierLivery__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__CarrierLivery__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LiveryColor1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SlatsDeployOuter__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SlatsDeployInner__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__ThrustReverserDeploy__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Rudder__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Elevator__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__AileronRight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__AileronLeft__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FlapsOuter__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FlapsInner__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesOuter1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesInner2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__SpeedbrakesInner1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainGearDoorBay__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainWheelShocks__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__MainGearRetract__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelShocks__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontGearRetract__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontGearDoors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelTurn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__RightWheelSpin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LeftWheelSpin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__FrontWheelSpin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__LeftEngineSpin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__RightEngineSpin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::NewProp_bpv__Plane__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_CommercialPlane_C__pf3475422732>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::ClassParams = {
		&ABP_CommercialPlane_C__pf3475422732::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/CommercialPlane/Blueprints/BP_CommercialPlane"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_CommercialPlane_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_CommercialPlane_C__pf3475422732, TEXT("BP_CommercialPlane_C"), 2844050441);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_CommercialPlane_C__pf3475422732>()
	{
		return ABP_CommercialPlane_C__pf3475422732::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_CommercialPlane_C__pf3475422732(Z_Construct_UClass_ABP_CommercialPlane_C__pf3475422732, &ABP_CommercialPlane_C__pf3475422732::StaticClass, TEXT("/Game/CommercialPlane/Blueprints/BP_CommercialPlane"), TEXT("BP_CommercialPlane_C"), true, TEXT("/Game/CommercialPlane/Blueprints/BP_CommercialPlane"), TEXT("/Game/CommercialPlane/Blueprints/BP_CommercialPlane.BP_CommercialPlane_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_CommercialPlane_C__pf3475422732);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
