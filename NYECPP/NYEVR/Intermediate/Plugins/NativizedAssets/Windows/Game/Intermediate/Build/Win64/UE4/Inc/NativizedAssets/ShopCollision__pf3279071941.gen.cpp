// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ShopCollision__pf3279071941.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopCollision__pf3279071941() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AShopCollision_C__pf3279071941_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AShopCollision_C__pf3279071941();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AShop_C__pf3279071941_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShopCollision_C__pf3279071941::execbpf__ReceiveActorBeginOverlap__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveActorBeginOverlap__pf(Z_Param_bpp__OtherActor__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShopCollision_C__pf3279071941::execbpf__ReceiveActorEndOverlap__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveActorEndOverlap__pf(Z_Param_bpp__OtherActor__pf);
		P_NATIVE_END;
	}
	static FName NAME_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf = FName(TEXT("ReceiveActorBeginOverlap"));
	void AShopCollision_C__pf3279071941::eventbpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
	{
		ShopCollision_C__pf3279071941_eventbpf__ReceiveActorBeginOverlap__pf_Parms Parms;
		Parms.bpp__OtherActor__pf=bpp__OtherActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf),&Parms);
	}
	static FName NAME_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf = FName(TEXT("ReceiveActorEndOverlap"));
	void AShopCollision_C__pf3279071941::eventbpf__ReceiveActorEndOverlap__pf(AActor* bpp__OtherActor__pf)
	{
		ShopCollision_C__pf3279071941_eventbpf__ReceiveActorEndOverlap__pf_Parms Parms;
		Parms.bpp__OtherActor__pf=bpp__OtherActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf),&Parms);
	}
	void AShopCollision_C__pf3279071941::StaticRegisterNativesAShopCollision_C__pf3279071941()
	{
		UClass* Class = AShopCollision_C__pf3279071941::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveActorBeginOverlap", &AShopCollision_C__pf3279071941::execbpf__ReceiveActorBeginOverlap__pf },
			{ "ReceiveActorEndOverlap", &AShopCollision_C__pf3279071941::execbpf__ReceiveActorEndOverlap__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ShopCollision_C__pf3279071941_eventbpf__ReceiveActorBeginOverlap__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf_Statics::NewProp_bpp__OtherActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** t *tEvent when this actor overlaps another actor, for example a player walking into a trigger.t *tFor events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.t *t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "ActorBeginOverlap" },
		{ "ModuleRelativePath", "Public/ShopCollision__pf3279071941.h" },
		{ "OverrideNativeName", "ReceiveActorBeginOverlap" },
		{ "ToolTip", "Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShopCollision_C__pf3279071941, nullptr, "ReceiveActorBeginOverlap", nullptr, nullptr, sizeof(ShopCollision_C__pf3279071941_eventbpf__ReceiveActorBeginOverlap__pf_Parms), Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf()
	{
		UObject* Outer = Z_Construct_UClass_AShopCollision_C__pf3279071941();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveActorBeginOverlap") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ShopCollision_C__pf3279071941_eventbpf__ReceiveActorEndOverlap__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf_Statics::NewProp_bpp__OtherActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** t *tEvent when an actor no longer overlaps another actor, and they have separated. t *t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "ActorEndOverlap" },
		{ "ModuleRelativePath", "Public/ShopCollision__pf3279071941.h" },
		{ "OverrideNativeName", "ReceiveActorEndOverlap" },
		{ "ToolTip", "Event when an actor no longer overlaps another actor, and they have separated.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShopCollision_C__pf3279071941, nullptr, "ReceiveActorEndOverlap", nullptr, nullptr, sizeof(ShopCollision_C__pf3279071941_eventbpf__ReceiveActorEndOverlap__pf_Parms), Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf()
	{
		UObject* Outer = Z_Construct_UClass_AShopCollision_C__pf3279071941();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveActorEndOverlap") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShopCollision_C__pf3279071941_NoRegister()
	{
		return AShopCollision_C__pf3279071941::StaticClass();
	}
	struct Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_OtherActor_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_OtherActor_1__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MotionController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MotionController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Shop__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Shop__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Box__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Box__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorBeginOverlap__pf, "ReceiveActorBeginOverlap" }, // 900980155
		{ &Z_Construct_UFunction_AShopCollision_C__pf3279071941_bpf__ReceiveActorEndOverlap__pf, "ReceiveActorEndOverlap" }, // 1292999319
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ShopCollision__pf3279071941.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ShopCollision__pf3279071941.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "ShopCollision_C" },
		{ "ReplaceConverted", "/Game/Score/Shop/ShopCollision.ShopCollision_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopCollision__pf3279071941.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AShopCollision_C__pf3279071941*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShopCollision_C__pf3279071941), &Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopCollision__pf3279071941.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMotion_Controller_Pawn_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf = { "K2Node_DynamicCast_AsMotion_Controller_Pawn_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShopCollision_C__pf3279071941, b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_Event_OtherActor_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopCollision__pf3279071941.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherActor_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_Event_OtherActor_1__pf = { "K2Node_Event_OtherActor_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShopCollision_C__pf3279071941, b0l__K2Node_Event_OtherActor_1__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_Event_OtherActor_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_Event_OtherActor_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopCollision__pf3279071941.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AShopCollision_C__pf3279071941*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShopCollision_C__pf3279071941), &Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopCollision__pf3279071941.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMotion_Controller_Pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = { "K2Node_DynamicCast_AsMotion_Controller_Pawn", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShopCollision_C__pf3279071941, b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopCollision__pf3279071941.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf = { "K2Node_Event_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShopCollision_C__pf3279071941, b0l__K2Node_Event_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__MotionController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Motion Controller" },
		{ "ModuleRelativePath", "Public/ShopCollision__pf3279071941.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MotionController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__MotionController__pf = { "MotionController", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShopCollision_C__pf3279071941, bpv__MotionController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__MotionController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__MotionController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__Shop__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Shop" },
		{ "ModuleRelativePath", "Public/ShopCollision__pf3279071941.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Shop" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__Shop__pf = { "Shop", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShopCollision_C__pf3279071941, bpv__Shop__pf), Z_Construct_UClass_AShop_C__pf3279071941_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__Shop__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__Shop__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__Box__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShopCollision__pf3279071941.h" },
		{ "OverrideNativeName", "Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__Box__pf = { "Box", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShopCollision_C__pf3279071941, bpv__Box__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__Box__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__Box__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_Event_OtherActor_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__MotionController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__Shop__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::NewProp_bpv__Box__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShopCollision_C__pf3279071941>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::ClassParams = {
		&AShopCollision_C__pf3279071941::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShopCollision_C__pf3279071941()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Score/Shop/ShopCollision"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ShopCollision_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShopCollision_C__pf3279071941_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AShopCollision_C__pf3279071941, TEXT("ShopCollision_C"), 2467322167);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AShopCollision_C__pf3279071941>()
	{
		return AShopCollision_C__pf3279071941::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShopCollision_C__pf3279071941(Z_Construct_UClass_AShopCollision_C__pf3279071941, &AShopCollision_C__pf3279071941::StaticClass, TEXT("/Game/Score/Shop/ShopCollision"), TEXT("ShopCollision_C"), true, TEXT("/Game/Score/Shop/ShopCollision"), TEXT("/Game/Score/Shop/ShopCollision.ShopCollision_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShopCollision_C__pf3279071941);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
