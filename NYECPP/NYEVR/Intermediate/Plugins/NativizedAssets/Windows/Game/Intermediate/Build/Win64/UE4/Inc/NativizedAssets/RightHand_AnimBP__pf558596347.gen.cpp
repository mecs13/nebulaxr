// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/RightHand_AnimBP__pf558596347.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRightHand_AnimBP__pf558596347() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_URightHand_AnimBP_C__pf558596347();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__GripEnum__pf();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
// End Cross Module References
	DEFINE_FUNCTION(URightHand_AnimBP_C__pf558596347::execbpf__AnimGraph__pf)
	{
		P_GET_STRUCT_REF(FPoseLink,Z_Param_Out_bpp__AnimGraph__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AnimGraph__pf(Z_Param_Out_bpp__AnimGraph__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URightHand_AnimBP_C__pf558596347::execbpf__BlueprintUpdateAnimation__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaTimeX__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BlueprintUpdateAnimation__pf(Z_Param_bpp__DeltaTimeX__pf);
		P_NATIVE_END;
	}
	static FName NAME_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf = FName(TEXT("BlueprintUpdateAnimation"));
	void URightHand_AnimBP_C__pf558596347::eventbpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
	{
		RightHand_AnimBP_C__pf558596347_eventbpf__BlueprintUpdateAnimation__pf_Parms Parms;
		Parms.bpp__DeltaTimeX__pf=bpp__DeltaTimeX__pf;
		ProcessEvent(FindFunctionChecked(NAME_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf),&Parms);
	}
	void URightHand_AnimBP_C__pf558596347::StaticRegisterNativesURightHand_AnimBP_C__pf558596347()
	{
		UClass* Class = URightHand_AnimBP_C__pf558596347::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimGraph", &URightHand_AnimBP_C__pf558596347::execbpf__AnimGraph__pf },
			{ "BlueprintUpdateAnimation", &URightHand_AnimBP_C__pf558596347::execbpf__BlueprintUpdateAnimation__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf_Statics
	{
		struct RightHand_AnimBP_C__pf558596347_eventbpf__AnimGraph__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf_Statics::NewProp_bpp__AnimGraph__pf = { "bpp__AnimGraph__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(RightHand_AnimBP_C__pf558596347_eventbpf__AnimGraph__pf_Parms, bpp__AnimGraph__pf), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf_Statics::NewProp_bpp__AnimGraph__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf_Statics::Function_MetaDataParams[] = {
		{ "AnimBlueprintFunction", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/RightHand_AnimBP__pf558596347.h" },
		{ "OverrideNativeName", "AnimGraph" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URightHand_AnimBP_C__pf558596347, nullptr, "AnimGraph", nullptr, nullptr, sizeof(RightHand_AnimBP_C__pf558596347_eventbpf__AnimGraph__pf_Parms), Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf()
	{
		UObject* Outer = Z_Construct_UClass_URightHand_AnimBP_C__pf558596347();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("AnimGraph") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaTimeX__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf_Statics::NewProp_bpp__DeltaTimeX__pf = { "bpp__DeltaTimeX__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(RightHand_AnimBP_C__pf558596347_eventbpf__BlueprintUpdateAnimation__pf_Parms, bpp__DeltaTimeX__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf_Statics::NewProp_bpp__DeltaTimeX__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the Animation is updated */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/RightHand_AnimBP__pf558596347.h" },
		{ "OverrideNativeName", "BlueprintUpdateAnimation" },
		{ "ToolTip", "Executed when the Animation is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URightHand_AnimBP_C__pf558596347, nullptr, "BlueprintUpdateAnimation", nullptr, nullptr, sizeof(RightHand_AnimBP_C__pf558596347_eventbpf__BlueprintUpdateAnimation__pf_Parms), Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf()
	{
		UObject* Outer = Z_Construct_UClass_URightHand_AnimBP_C__pf558596347();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BlueprintUpdateAnimation") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_NoRegister()
	{
		return URightHand_AnimBP_C__pf558596347::StaticClass();
	}
	struct Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaTimeX__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Grip__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Grip__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__InterpSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__InterpSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GripState__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__GripState__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__GripState__pf_Underlying;
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
	UObject* (*const Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__AnimGraph__pf, "AnimGraph" }, // 2345603686
		{ &Z_Construct_UFunction_URightHand_AnimBP_C__pf558596347_bpf__BlueprintUpdateAnimation__pf, "BlueprintUpdateAnimation" }, // 900141253
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "RightHand_AnimBP__pf558596347.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RightHand_AnimBP__pf558596347.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "RightHand_AnimBP_C" },
		{ "ReplaceConverted", "/Game/VirtualReality/Mannequin/Animations/RightHand_AnimBP.RightHand_AnimBP_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/RightHand_AnimBP__pf558596347.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaTimeX" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf = { "K2Node_Event_DeltaTimeX", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URightHand_AnimBP_C__pf558596347, b0l__K2Node_Event_DeltaTimeX__pf), METADATA_PARAMS(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__Grip__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Grip" },
		{ "ModuleRelativePath", "Public/RightHand_AnimBP__pf558596347.h" },
		{ "OverrideNativeName", "Grip" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__Grip__pf = { "Grip", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URightHand_AnimBP_C__pf558596347, bpv__Grip__pf), METADATA_PARAMS(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__Grip__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__Grip__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__InterpSpeed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Interp Speed" },
		{ "ModuleRelativePath", "Public/RightHand_AnimBP__pf558596347.h" },
		{ "OverrideNativeName", "InterpSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__InterpSpeed__pf = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URightHand_AnimBP_C__pf558596347, bpv__InterpSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__InterpSpeed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__InterpSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__GripState__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Grip State" },
		{ "ModuleRelativePath", "Public/RightHand_AnimBP__pf558596347.h" },
		{ "OverrideNativeName", "GripState" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__GripState__pf = { "GripState", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URightHand_AnimBP_C__pf558596347, bpv__GripState__pf), Z_Construct_UEnum_NativizedAssets_E__GripEnum__pf, METADATA_PARAMS(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__GripState__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__GripState__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__GripState__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/RightHand_AnimBP__pf558596347.h" },
		{ "OverrideNativeName", "AnimGraphNode_BlendSpacePlayer" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf = { "AnimGraphNode_BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URightHand_AnimBP_C__pf558596347, bpv__AnimGraphNode_BlendSpacePlayer__pf), Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer, METADATA_PARAMS(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/RightHand_AnimBP__pf558596347.h" },
		{ "OverrideNativeName", "AnimGraphNode_Root" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__AnimGraphNode_Root__pf = { "AnimGraphNode_Root", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URightHand_AnimBP_C__pf558596347, bpv__AnimGraphNode_Root__pf), Z_Construct_UScriptStruct_FAnimNode_Root, METADATA_PARAMS(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__Grip__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__InterpSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__GripState__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__GripState__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::NewProp_bpv__AnimGraphNode_Root__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URightHand_AnimBP_C__pf558596347>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::ClassParams = {
		&URightHand_AnimBP_C__pf558596347::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URightHand_AnimBP_C__pf558596347()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/VirtualReality/Mannequin/Animations/RightHand_AnimBP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("RightHand_AnimBP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URightHand_AnimBP_C__pf558596347_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(URightHand_AnimBP_C__pf558596347, TEXT("RightHand_AnimBP_C"), 1183480681);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<URightHand_AnimBP_C__pf558596347>()
	{
		return URightHand_AnimBP_C__pf558596347::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URightHand_AnimBP_C__pf558596347(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347, &URightHand_AnimBP_C__pf558596347::StaticClass, TEXT("/Game/VirtualReality/Mannequin/Animations/RightHand_AnimBP"), TEXT("RightHand_AnimBP_C"), true, TEXT("/Game/VirtualReality/Mannequin/Animations/RightHand_AnimBP"), TEXT("/Game/VirtualReality/Mannequin/Animations/RightHand_AnimBP.RightHand_AnimBP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URightHand_AnimBP_C__pf558596347);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
