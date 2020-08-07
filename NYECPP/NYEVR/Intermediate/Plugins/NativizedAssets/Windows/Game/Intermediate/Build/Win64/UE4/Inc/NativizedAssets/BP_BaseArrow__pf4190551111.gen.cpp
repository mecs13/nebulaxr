// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_BaseArrow__pf4190551111.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_BaseArrow__pf4190551111() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATargetFloat_C__pf1010915279_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_BaseArrow_C__pf4190551111::execbpf__ReceiveHit__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__MyComp__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__Other__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_UBOOL(Z_Param_bpp__bSelfMoved__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__HitLocation__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__HitNormal__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__NormalImpulse__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__Hit__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveHit__pf(Z_Param_bpp__MyComp__pf,Z_Param_bpp__Other__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__bSelfMoved__pf,Z_Param_bpp__HitLocation__pf,Z_Param_bpp__HitNormal__pf,Z_Param_bpp__NormalImpulse__pf,Z_Param_Out_bpp__Hit__pf__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_BaseArrow_C__pf4190551111::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_BaseArrow_C__pf4190551111::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf = FName(TEXT("ReceiveHit"));
	void ABP_BaseArrow_C__pf4190551111::eventbpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const)
	{
		BP_BaseArrow_C__pf4190551111_eventbpf__ReceiveHit__pf_Parms Parms;
		Parms.bpp__MyComp__pf=bpp__MyComp__pf;
		Parms.bpp__Other__pf=bpp__Other__pf;
		Parms.bpp__OtherComp__pf=bpp__OtherComp__pf;
		Parms.bpp__bSelfMoved__pf=bpp__bSelfMoved__pf ? true : false;
		Parms.bpp__HitLocation__pf=bpp__HitLocation__pf;
		Parms.bpp__HitNormal__pf=bpp__HitNormal__pf;
		Parms.bpp__NormalImpulse__pf=bpp__NormalImpulse__pf;
		Parms.bpp__Hit__pf__const=bpp__Hit__pf__const;
		ProcessEvent(FindFunctionChecked(NAME_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf),&Parms);
	}
	void ABP_BaseArrow_C__pf4190551111::StaticRegisterNativesABP_BaseArrow_C__pf4190551111()
	{
		UClass* Class = ABP_BaseArrow_C__pf4190551111::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &ABP_BaseArrow_C__pf4190551111::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveHit", &ABP_BaseArrow_C__pf4190551111::execbpf__ReceiveHit__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Hit__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Hit__pf__const;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__NormalImpulse__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__HitNormal__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__HitLocation__pf;
		static void NewProp_bpp__bSelfMoved__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bSelfMoved__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Other__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__MyComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__MyComp__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const = { "bpp__Hit__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_BaseArrow_C__pf4190551111_eventbpf__ReceiveHit__pf_Parms, bpp__Hit__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__NormalImpulse__pf = { "bpp__NormalImpulse__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_BaseArrow_C__pf4190551111_eventbpf__ReceiveHit__pf_Parms, bpp__NormalImpulse__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__HitNormal__pf = { "bpp__HitNormal__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_BaseArrow_C__pf4190551111_eventbpf__ReceiveHit__pf_Parms, bpp__HitNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__HitLocation__pf = { "bpp__HitLocation__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_BaseArrow_C__pf4190551111_eventbpf__ReceiveHit__pf_Parms, bpp__HitLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__bSelfMoved__pf_SetBit(void* Obj)
	{
		((BP_BaseArrow_C__pf4190551111_eventbpf__ReceiveHit__pf_Parms*)Obj)->bpp__bSelfMoved__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__bSelfMoved__pf = { "bpp__bSelfMoved__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BP_BaseArrow_C__pf4190551111_eventbpf__ReceiveHit__pf_Parms), &Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__bSelfMoved__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_BaseArrow_C__pf4190551111_eventbpf__ReceiveHit__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Other__pf = { "bpp__Other__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_BaseArrow_C__pf4190551111_eventbpf__ReceiveHit__pf_Parms, bpp__Other__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf = { "bpp__MyComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_BaseArrow_C__pf4190551111_eventbpf__ReceiveHit__pf_Parms, bpp__MyComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__NormalImpulse__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__HitNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__HitLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__bSelfMoved__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Other__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** t * Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.t * This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.t * For events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.t *t * @note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled.t * @note When receiving a hit from another object's movement (bSelfMoved is false), the directions of 'Hit.Normal' and 'Hit.ImpactNormal't * will be adjusted to indicate force from the other object against this object.t * @note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions.t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Hit" },
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "ReceiveHit" },
		{ "ToolTip", "Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.For events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.@note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled.@note When receiving a hit from another object's movement (bSelfMoved is false), the directions of 'Hit.Normal' and 'Hit.ImpactNormal'will be adjusted to indicate force from the other object against this object.@note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111, nullptr, "ReceiveHit", nullptr, nullptr, sizeof(BP_BaseArrow_C__pf4190551111_eventbpf__ReceiveHit__pf_Parms), Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveHit") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_NoRegister()
	{
		return ABP_BaseArrow_C__pf4190551111::StaticClass();
	}
	struct Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsTarget_Float__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsTarget_Float__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Normal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Location__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Distance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Time__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Hit__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_Hit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_NormalImpulse__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_NormalImpulse__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_HitNormal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_HitNormal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_HitLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_HitLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_bSelfMoved__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_Event_bSelfMoved__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_Event_bSelfMoved__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Other__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Other__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_MyComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_MyComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HitVelocityLength__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__HitVelocityLength__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ProjectileMovement__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ProjectileMovement__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3891528077
		{ &Z_Construct_UFunction_ABP_BaseArrow_C__pf4190551111_bpf__ReceiveHit__pf, "ReceiveHit" }, // 455078509
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_BaseArrow__pf4190551111.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_BaseArrow_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Bow/BP_BaseArrow.BP_BaseArrow_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((ABP_BaseArrow_C__pf4190551111*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_BaseArrow_C__pf4190551111), &Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMotion_Controller_Pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = { "K2Node_DynamicCast_AsMotion_Controller_Pawn", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ABP_BaseArrow_C__pf4190551111*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_BaseArrow_C__pf4190551111), &Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsTarget_Float__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTarget_Float" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsTarget_Float__pf = { "K2Node_DynamicCast_AsTarget_Float", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__K2Node_DynamicCast_AsTarget_Float__pf), Z_Construct_UClass_ATargetFloat_C__pf1010915279_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsTarget_Float__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsTarget_Float__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddActorLocalOffset_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf = { "CallFunc_K2_AddActorLocalOffset_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceEnd" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf = { "CallFunc_BreakHitResult_TraceEnd", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_TraceEnd__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceStart" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf = { "CallFunc_BreakHitResult_TraceStart", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_TraceStart__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_FaceIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf = { "CallFunc_BreakHitResult_FaceIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_FaceIndex__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitItem" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf = { "CallFunc_BreakHitResult_HitItem", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_HitItem__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitBoneName" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf = { "CallFunc_BreakHitResult_HitBoneName", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_HitBoneName__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf = { "CallFunc_BreakHitResult_HitComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_HitComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf = { "CallFunc_BreakHitResult_HitActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_HitActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_PhysMat" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf = { "CallFunc_BreakHitResult_PhysMat", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_PhysMat__pf), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactNormal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf = { "CallFunc_BreakHitResult_ImpactNormal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_ImpactNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Normal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf = { "CallFunc_BreakHitResult_Normal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_Normal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactPoint" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf = { "CallFunc_BreakHitResult_ImpactPoint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_ImpactPoint__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf = { "CallFunc_BreakHitResult_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf = { "CallFunc_BreakHitResult_Distance", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_Distance__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf = { "CallFunc_BreakHitResult_Time", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__CallFunc_BreakHitResult_Time__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bInitialOverlap" },
	};
#endif
	void Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit(void* Obj)
	{
		((ABP_BaseArrow_C__pf4190551111*)Obj)->b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = { "CallFunc_BreakHitResult_bInitialOverlap", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_BaseArrow_C__pf4190551111), &Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bBlockingHit" },
	};
#endif
	void Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit(void* Obj)
	{
		((ABP_BaseArrow_C__pf4190551111*)Obj)->b0l__CallFunc_BreakHitResult_bBlockingHit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf = { "CallFunc_BreakHitResult_bBlockingHit", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_BaseArrow_C__pf4190551111), &Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_Hit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_Event_Hit" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_Hit__pf = { "K2Node_Event_Hit", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__K2Node_Event_Hit__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_Hit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_Hit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_Event_NormalImpulse" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf = { "K2Node_Event_NormalImpulse", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__K2Node_Event_NormalImpulse__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_Event_HitNormal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf = { "K2Node_Event_HitNormal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__K2Node_Event_HitNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_Event_HitLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf = { "K2Node_Event_HitLocation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__K2Node_Event_HitLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_Event_bSelfMoved" },
	};
#endif
	void Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_SetBit(void* Obj)
	{
		((ABP_BaseArrow_C__pf4190551111*)Obj)->b0l__K2Node_Event_bSelfMoved__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf = { "K2Node_Event_bSelfMoved", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_BaseArrow_C__pf4190551111), &Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf = { "K2Node_Event_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__K2Node_Event_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_Other__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_Event_Other" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_Other__pf = { "K2Node_Event_Other", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__K2Node_Event_Other__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_Other__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_Other__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_MyComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "K2Node_Event_MyComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_MyComp__pf = { "K2Node_Event_MyComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, b0l__K2Node_Event_MyComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_MyComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_MyComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__HitVelocityLength__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Hit Velocity Length" },
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HitVelocityLength" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__HitVelocityLength__pf = { "HitVelocityLength", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, bpv__HitVelocityLength__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__HitVelocityLength__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__HitVelocityLength__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__StaticMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "StaticMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__StaticMesh__pf = { "StaticMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, bpv__StaticMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__StaticMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__StaticMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__ProjectileMovement__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BaseArrow__pf4190551111.h" },
		{ "OverrideNativeName", "ProjectileMovement" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__ProjectileMovement__pf = { "ProjectileMovement", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BaseArrow_C__pf4190551111, bpv__ProjectileMovement__pf), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__ProjectileMovement__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__ProjectileMovement__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_DynamicCast_AsTarget_Float__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_Hit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_Other__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_b0l__K2Node_Event_MyComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__HitVelocityLength__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__StaticMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::NewProp_bpv__ProjectileMovement__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_BaseArrow_C__pf4190551111>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::ClassParams = {
		&ABP_BaseArrow_C__pf4190551111::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Bow/BP_BaseArrow"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_BaseArrow_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_BaseArrow_C__pf4190551111, TEXT("BP_BaseArrow_C"), 554575240);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_BaseArrow_C__pf4190551111>()
	{
		return ABP_BaseArrow_C__pf4190551111::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_BaseArrow_C__pf4190551111(Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111, &ABP_BaseArrow_C__pf4190551111::StaticClass, TEXT("/Game/Blueprints/Bow/BP_BaseArrow"), TEXT("BP_BaseArrow_C"), true, TEXT("/Game/Blueprints/Bow/BP_BaseArrow"), TEXT("/Game/Blueprints/Bow/BP_BaseArrow.BP_BaseArrow_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_BaseArrow_C__pf4190551111);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
