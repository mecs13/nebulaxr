// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_Clouds__pf346126169.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Clouds__pf346126169() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Clouds_C__pf346126169_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Clouds_C__pf346126169();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_Clouds_C__pf346126169::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_Clouds_C__pf346126169::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_Clouds_C__pf346126169_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf),&Parms);
	}
	void ABP_Clouds_C__pf346126169::StaticRegisterNativesABP_Clouds_C__pf346126169()
	{
		UClass* Class = ABP_Clouds_C__pf346126169::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveTick", &ABP_Clouds_C__pf346126169::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Clouds_C__pf346126169_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Clouds_C__pf346126169, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BP_Clouds_C__pf346126169_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Clouds_C__pf346126169();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Clouds_C__pf346126169_NoRegister()
	{
		return ABP_Clouds_C__pf346126169::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RotateSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RotateSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PS_Clouds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PS_Clouds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem7__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem8__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem9__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem9__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem10__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem10__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem11__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem11__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem12__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem12__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem13__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem13__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem14__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem14__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem15__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem15__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem16__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem16__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem17__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem17__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem18__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem18__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem19__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem19__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem20__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem20__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem21__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem21__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem22__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem22__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_Clouds_C__pf346126169_bpf__ReceiveTick__pf, "ReceiveTick" }, // 1412499091
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_Clouds__pf346126169.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_Clouds_C" },
		{ "ReplaceConverted", "/Game/FloatingIsland/Blueprints/BP_Clouds.BP_Clouds_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddWorldRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf = { "CallFunc_K2_AddWorldRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__RotateSpeed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Rotate Speed" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "RotateSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__RotateSpeed__pf = { "RotateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__RotateSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__RotateSpeed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__RotateSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__PS_Clouds__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "PS_Clouds" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__PS_Clouds__pf = { "PS_Clouds", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__PS_Clouds__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__PS_Clouds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__PS_Clouds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem__pf = { "ParticleSystem", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem1__pf = { "ParticleSystem1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem1__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem2__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem2__pf = { "ParticleSystem2", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem2__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem3__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem3__pf = { "ParticleSystem3", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem3__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem4__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem4" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem4__pf = { "ParticleSystem4", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem4__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem5__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem5" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem5__pf = { "ParticleSystem5", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem5__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem6__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem6__pf = { "ParticleSystem6", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem6__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem7__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem7" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem7__pf = { "ParticleSystem7", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem7__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem7__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem7__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem8__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem8__pf = { "ParticleSystem8", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem8__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem8__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem8__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem9__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem9" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem9__pf = { "ParticleSystem9", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem9__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem9__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem9__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem10__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem10" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem10__pf = { "ParticleSystem10", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem10__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem10__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem10__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem11__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem11" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem11__pf = { "ParticleSystem11", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem11__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem11__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem11__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem12__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem12" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem12__pf = { "ParticleSystem12", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem12__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem12__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem12__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem13__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem13" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem13__pf = { "ParticleSystem13", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem13__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem13__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem13__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem14__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem14" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem14__pf = { "ParticleSystem14", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem14__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem14__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem14__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem15__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem15" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem15__pf = { "ParticleSystem15", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem15__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem15__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem15__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem16__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem16" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem16__pf = { "ParticleSystem16", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem16__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem16__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem16__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem17__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem17" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem17__pf = { "ParticleSystem17", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem17__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem17__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem17__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem18__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem18" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem18__pf = { "ParticleSystem18", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem18__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem18__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem18__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem19__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem19" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem19__pf = { "ParticleSystem19", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem19__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem19__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem19__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem20__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem20" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem20__pf = { "ParticleSystem20", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem20__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem20__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem20__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem21__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem21" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem21__pf = { "ParticleSystem21", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem21__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem21__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem21__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem22__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Clouds__pf346126169.h" },
		{ "OverrideNativeName", "ParticleSystem22" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem22__pf = { "ParticleSystem22", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Clouds_C__pf346126169, bpv__ParticleSystem22__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem22__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem22__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__RotateSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__PS_Clouds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem8__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem9__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem10__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem11__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem12__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem13__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem14__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem15__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem16__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem17__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem18__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem19__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem20__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem21__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::NewProp_bpv__ParticleSystem22__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Clouds_C__pf346126169>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::ClassParams = {
		&ABP_Clouds_C__pf346126169::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_Clouds_C__pf346126169()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/FloatingIsland/Blueprints/BP_Clouds"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Clouds_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_Clouds_C__pf346126169_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Clouds_C__pf346126169, TEXT("BP_Clouds_C"), 698909822);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_Clouds_C__pf346126169>()
	{
		return ABP_Clouds_C__pf346126169::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Clouds_C__pf346126169(Z_Construct_UClass_ABP_Clouds_C__pf346126169, &ABP_Clouds_C__pf346126169::StaticClass, TEXT("/Game/FloatingIsland/Blueprints/BP_Clouds"), TEXT("BP_Clouds_C"), true, TEXT("/Game/FloatingIsland/Blueprints/BP_Clouds"), TEXT("/Game/FloatingIsland/Blueprints/BP_Clouds.BP_Clouds_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Clouds_C__pf346126169);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
