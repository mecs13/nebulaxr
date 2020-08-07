// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_Stars__pf2036008057.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Stars__pf2036008057() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Stars_C__pf2036008057_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Stars_C__pf2036008057();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(ABP_Stars_C__pf2036008057::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_Stars_C__pf2036008057::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_Stars_C__pf2036008057_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf),&Parms);
	}
	void ABP_Stars_C__pf2036008057::StaticRegisterNativesABP_Stars_C__pf2036008057()
	{
		UClass* Class = ABP_Stars_C__pf2036008057::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveTick", &ABP_Stars_C__pf2036008057::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Stars_C__pf2036008057_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BP_Stars__pf2036008057.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Stars_C__pf2036008057, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BP_Stars_C__pf2036008057_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Stars_C__pf2036008057();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Stars_C__pf2036008057_NoRegister()
	{
		return ABP_Stars_C__pf2036008057::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_Stars_C__pf2036008057_bpf__ReceiveTick__pf, "ReceiveTick" }, // 1275324970
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "BP_Stars__pf2036008057.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_Stars__pf2036008057.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_Stars_C" },
		{ "ReplaceConverted", "/Game/Earth32/Blueprint/BP_Stars.BP_Stars_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Stars__pf2036008057.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddActorWorldRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf = { "CallFunc_K2_AddActorWorldRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Stars_C__pf2036008057, b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Stars__pf2036008057.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Stars_C__pf2036008057, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Stars_C__pf2036008057>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::ClassParams = {
		&ABP_Stars_C__pf2036008057::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_Stars_C__pf2036008057()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Earth32/Blueprint/BP_Stars"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Stars_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_Stars_C__pf2036008057_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Stars_C__pf2036008057, TEXT("BP_Stars_C"), 3724624217);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_Stars_C__pf2036008057>()
	{
		return ABP_Stars_C__pf2036008057::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Stars_C__pf2036008057(Z_Construct_UClass_ABP_Stars_C__pf2036008057, &ABP_Stars_C__pf2036008057::StaticClass, TEXT("/Game/Earth32/Blueprint/BP_Stars"), TEXT("BP_Stars_C"), true, TEXT("/Game/Earth32/Blueprint/BP_Stars"), TEXT("/Game/Earth32/Blueprint/BP_Stars.BP_Stars_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Stars_C__pf2036008057);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
