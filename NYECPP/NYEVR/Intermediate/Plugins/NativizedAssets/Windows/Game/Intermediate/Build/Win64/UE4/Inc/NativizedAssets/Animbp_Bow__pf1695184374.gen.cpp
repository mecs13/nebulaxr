// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Animbp_Bow__pf1695184374.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimbp_Bow__pf1695184374() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
// End Cross Module References
	DEFINE_FUNCTION(UAnimbp_Bow_C__pf1695184374::execbpf__AnimGraph__pf)
	{
		P_GET_STRUCT_REF(FPoseLink,Z_Param_Out_bpp__AnimGraph__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AnimGraph__pf(Z_Param_Out_bpp__AnimGraph__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimbp_Bow_C__pf1695184374::execbpf__BlueprintUpdateAnimation__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaTimeX__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BlueprintUpdateAnimation__pf(Z_Param_bpp__DeltaTimeX__pf);
		P_NATIVE_END;
	}
	static FName NAME_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf = FName(TEXT("BlueprintUpdateAnimation"));
	void UAnimbp_Bow_C__pf1695184374::eventbpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
	{
		Animbp_Bow_C__pf1695184374_eventbpf__BlueprintUpdateAnimation__pf_Parms Parms;
		Parms.bpp__DeltaTimeX__pf=bpp__DeltaTimeX__pf;
		ProcessEvent(FindFunctionChecked(NAME_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf),&Parms);
	}
	void UAnimbp_Bow_C__pf1695184374::StaticRegisterNativesUAnimbp_Bow_C__pf1695184374()
	{
		UClass* Class = UAnimbp_Bow_C__pf1695184374::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimGraph", &UAnimbp_Bow_C__pf1695184374::execbpf__AnimGraph__pf },
			{ "BlueprintUpdateAnimation", &UAnimbp_Bow_C__pf1695184374::execbpf__BlueprintUpdateAnimation__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf_Statics
	{
		struct Animbp_Bow_C__pf1695184374_eventbpf__AnimGraph__pf_Parms
		{
			FPoseLink bpp__AnimGraph__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__AnimGraph__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf_Statics::NewProp_bpp__AnimGraph__pf = { "bpp__AnimGraph__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Animbp_Bow_C__pf1695184374_eventbpf__AnimGraph__pf_Parms, bpp__AnimGraph__pf), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf_Statics::NewProp_bpp__AnimGraph__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf_Statics::Function_MetaDataParams[] = {
		{ "AnimBlueprintFunction", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/Animbp_Bow__pf1695184374.h" },
		{ "OverrideNativeName", "AnimGraph" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374, nullptr, "AnimGraph", nullptr, nullptr, sizeof(Animbp_Bow_C__pf1695184374_eventbpf__AnimGraph__pf_Parms), Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf()
	{
		UObject* Outer = Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("AnimGraph") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaTimeX__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf_Statics::NewProp_bpp__DeltaTimeX__pf = { "bpp__DeltaTimeX__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Animbp_Bow_C__pf1695184374_eventbpf__BlueprintUpdateAnimation__pf_Parms, bpp__DeltaTimeX__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf_Statics::NewProp_bpp__DeltaTimeX__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the Animation is updated */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/Animbp_Bow__pf1695184374.h" },
		{ "OverrideNativeName", "BlueprintUpdateAnimation" },
		{ "ToolTip", "Executed when the Animation is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374, nullptr, "BlueprintUpdateAnimation", nullptr, nullptr, sizeof(Animbp_Bow_C__pf1695184374_eventbpf__BlueprintUpdateAnimation__pf_Parms), Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf()
	{
		UObject* Outer = Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BlueprintUpdateAnimation") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_NoRegister()
	{
		return UAnimbp_Bow_C__pf1695184374::StaticClass();
	}
	struct Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBP_Base_Bow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBP_Base_Bow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaTimeX__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Bow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Bow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Charge__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Charge__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_Root__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_Root__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__AnimGraph__pf, "AnimGraph" }, // 898509887
		{ &Z_Construct_UFunction_UAnimbp_Bow_C__pf1695184374_bpf__BlueprintUpdateAnimation__pf, "BlueprintUpdateAnimation" }, // 2394154259
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animbp_Bow__pf1695184374.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Animbp_Bow__pf1695184374.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Animbp_Bow_C" },
		{ "ReplaceConverted", "/Game/Meshes/SyntyBow/Animbp_Bow.Animbp_Bow_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animbp_Bow__pf1695184374.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((UAnimbp_Bow_C__pf1695184374*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimbp_Bow_C__pf1695184374), &Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Base_Bow__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animbp_Bow__pf1695184374.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBP_Base_Bow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Base_Bow__pf = { "K2Node_DynamicCast_AsBP_Base_Bow", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimbp_Bow_C__pf1695184374, b0l__K2Node_DynamicCast_AsBP_Base_Bow__pf), Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Base_Bow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Base_Bow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animbp_Bow__pf1695184374.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaTimeX" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf = { "K2Node_Event_DeltaTimeX", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimbp_Bow_C__pf1695184374, b0l__K2Node_Event_DeltaTimeX__pf), METADATA_PARAMS(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__Bow__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Bow" },
		{ "ModuleRelativePath", "Public/Animbp_Bow__pf1695184374.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Bow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__Bow__pf = { "Bow", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimbp_Bow_C__pf1695184374, bpv__Bow__pf), Z_Construct_UClass_ABP_BaseBow_C__pf4190551111_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__Bow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__Bow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__Charge__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Charge" },
		{ "ModuleRelativePath", "Public/Animbp_Bow__pf1695184374.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Charge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__Charge__pf = { "Charge", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimbp_Bow_C__pf1695184374, bpv__Charge__pf), METADATA_PARAMS(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__Charge__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__Charge__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animbp_Bow__pf1695184374.h" },
		{ "OverrideNativeName", "AnimGraphNode_BlendSpacePlayer" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf = { "AnimGraphNode_BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimbp_Bow_C__pf1695184374, bpv__AnimGraphNode_BlendSpacePlayer__pf), Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer, METADATA_PARAMS(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animbp_Bow__pf1695184374.h" },
		{ "OverrideNativeName", "AnimGraphNode_Root" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__AnimGraphNode_Root__pf = { "AnimGraphNode_Root", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimbp_Bow_C__pf1695184374, bpv__AnimGraphNode_Root__pf), Z_Construct_UScriptStruct_FAnimNode_Root, METADATA_PARAMS(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Base_Bow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__Bow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__Charge__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::NewProp_bpv__AnimGraphNode_Root__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimbp_Bow_C__pf1695184374>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::ClassParams = {
		&UAnimbp_Bow_C__pf1695184374::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Meshes/SyntyBow/Animbp_Bow"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Animbp_Bow_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UAnimbp_Bow_C__pf1695184374, TEXT("Animbp_Bow_C"), 3255929161);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UAnimbp_Bow_C__pf1695184374>()
	{
		return UAnimbp_Bow_C__pf1695184374::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimbp_Bow_C__pf1695184374(Z_Construct_UClass_UAnimbp_Bow_C__pf1695184374, &UAnimbp_Bow_C__pf1695184374::StaticClass, TEXT("/Game/Meshes/SyntyBow/Animbp_Bow"), TEXT("Animbp_Bow_C"), true, TEXT("/Game/Meshes/SyntyBow/Animbp_Bow"), TEXT("/Game/Meshes/SyntyBow/Animbp_Bow.Animbp_Bow_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimbp_Bow_C__pf1695184374);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
