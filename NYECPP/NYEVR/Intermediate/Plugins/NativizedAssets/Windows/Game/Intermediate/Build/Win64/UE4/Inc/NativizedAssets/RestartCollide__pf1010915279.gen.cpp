// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/RestartCollide__pf1010915279.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRestartCollide__pf1010915279() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ARestartCollide_C__pf1010915279_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ARestartCollide_C__pf1010915279();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARestartCollide_C__pf1010915279::execbpf__ReceiveActorBeginOverlap__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveActorBeginOverlap__pf(Z_Param_bpp__OtherActor__pf);
		P_NATIVE_END;
	}
	static FName NAME_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf = FName(TEXT("ReceiveActorBeginOverlap"));
	void ARestartCollide_C__pf1010915279::eventbpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
	{
		RestartCollide_C__pf1010915279_eventbpf__ReceiveActorBeginOverlap__pf_Parms Parms;
		Parms.bpp__OtherActor__pf=bpp__OtherActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf),&Parms);
	}
	void ARestartCollide_C__pf1010915279::StaticRegisterNativesARestartCollide_C__pf1010915279()
	{
		UClass* Class = ARestartCollide_C__pf1010915279::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveActorBeginOverlap", &ARestartCollide_C__pf1010915279::execbpf__ReceiveActorBeginOverlap__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(RestartCollide_C__pf1010915279_eventbpf__ReceiveActorBeginOverlap__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf_Statics::NewProp_bpp__OtherActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** t *tEvent when this actor overlaps another actor, for example a player walking into a trigger.t *tFor events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.t *t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "ActorBeginOverlap" },
		{ "ModuleRelativePath", "Public/RestartCollide__pf1010915279.h" },
		{ "OverrideNativeName", "ReceiveActorBeginOverlap" },
		{ "ToolTip", "Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARestartCollide_C__pf1010915279, nullptr, "ReceiveActorBeginOverlap", nullptr, nullptr, sizeof(RestartCollide_C__pf1010915279_eventbpf__ReceiveActorBeginOverlap__pf_Parms), Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf()
	{
		UObject* Outer = Z_Construct_UClass_ARestartCollide_C__pf1010915279();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveActorBeginOverlap") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARestartCollide_C__pf1010915279_NoRegister()
	{
		return ARestartCollide_C__pf1010915279::StaticClass();
	}
	struct Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Box__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Box__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARestartCollide_C__pf1010915279_bpf__ReceiveActorBeginOverlap__pf, "ReceiveActorBeginOverlap" }, // 807276261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RestartCollide__pf1010915279.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RestartCollide__pf1010915279.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "RestartCollide_C" },
		{ "ReplaceConverted", "/Game/RestartCollide.RestartCollide_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/RestartCollide__pf1010915279.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf = { "CallFunc_K2_SetActorLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARestartCollide_C__pf1010915279, b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/RestartCollide__pf1010915279.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ARestartCollide_C__pf1010915279*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARestartCollide_C__pf1010915279), &Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/RestartCollide__pf1010915279.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMotion_Controller_Pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = { "K2Node_DynamicCast_AsMotion_Controller_Pawn", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARestartCollide_C__pf1010915279, b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/RestartCollide__pf1010915279.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf = { "K2Node_Event_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARestartCollide_C__pf1010915279, b0l__K2Node_Event_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_bpv__Box__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RestartCollide__pf1010915279.h" },
		{ "OverrideNativeName", "Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_bpv__Box__pf = { "Box", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARestartCollide_C__pf1010915279, bpv__Box__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_bpv__Box__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_bpv__Box__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::NewProp_bpv__Box__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARestartCollide_C__pf1010915279>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::ClassParams = {
		&ARestartCollide_C__pf1010915279::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARestartCollide_C__pf1010915279()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/RestartCollide"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("RestartCollide_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARestartCollide_C__pf1010915279_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ARestartCollide_C__pf1010915279, TEXT("RestartCollide_C"), 2227645638);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ARestartCollide_C__pf1010915279>()
	{
		return ARestartCollide_C__pf1010915279::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARestartCollide_C__pf1010915279(Z_Construct_UClass_ARestartCollide_C__pf1010915279, &ARestartCollide_C__pf1010915279::StaticClass, TEXT("/Game/RestartCollide"), TEXT("RestartCollide_C"), true, TEXT("/Game/RestartCollide"), TEXT("/Game/RestartCollide.RestartCollide_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARestartCollide_C__pf1010915279);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
