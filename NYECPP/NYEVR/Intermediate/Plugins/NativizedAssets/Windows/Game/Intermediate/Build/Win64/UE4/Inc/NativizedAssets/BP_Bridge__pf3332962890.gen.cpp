// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_Bridge__pf3332962890.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Bridge__pf3332962890() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Bridge_C__pf3332962890_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Bridge_C__pf3332962890();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_Bridge_C__pf3332962890::execbpf__PlacePoleWithOffset__pf)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__Location__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__PlacePoleWithOffset__pf(Z_Param_bpp__Location__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Bridge_C__pf3332962890::execbpf__PlaceRopeWithOffset__pf)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__Offset__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__PlaceRopeWithOffset__pf(Z_Param_bpp__Offset__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Bridge_C__pf3332962890::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_Bridge_C__pf3332962890_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Bridge_C__pf3332962890::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Bridge_C__pf3332962890_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Bridge_C__pf3332962890::StaticRegisterNativesABP_Bridge_C__pf3332962890()
	{
		UClass* Class = ABP_Bridge_C__pf3332962890::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlacePoleWithOffset", &ABP_Bridge_C__pf3332962890::execbpf__PlacePoleWithOffset__pf },
			{ "PlaceRopeWithOffset", &ABP_Bridge_C__pf3332962890::execbpf__PlaceRopeWithOffset__pf },
			{ "UserConstructionScript", &ABP_Bridge_C__pf3332962890::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf_Statics
	{
		struct BP_Bridge_C__pf3332962890_eventbpf__PlacePoleWithOffset__pf_Parms
		{
			FVector bpp__Location__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Location__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf_Statics::NewProp_bpp__Location__pf = { "bpp__Location__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Bridge_C__pf3332962890_eventbpf__PlacePoleWithOffset__pf_Parms, bpp__Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf_Statics::NewProp_bpp__Location__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "OverrideNativeName", "PlacePoleWithOffset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Bridge_C__pf3332962890, nullptr, "PlacePoleWithOffset", nullptr, nullptr, sizeof(BP_Bridge_C__pf3332962890_eventbpf__PlacePoleWithOffset__pf_Parms), Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Bridge_C__pf3332962890();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("PlacePoleWithOffset") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf_Statics
	{
		struct BP_Bridge_C__pf3332962890_eventbpf__PlaceRopeWithOffset__pf_Parms
		{
			FVector bpp__Offset__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Offset__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf_Statics::NewProp_bpp__Offset__pf = { "bpp__Offset__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Bridge_C__pf3332962890_eventbpf__PlaceRopeWithOffset__pf_Parms, bpp__Offset__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf_Statics::NewProp_bpp__Offset__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "OverrideNativeName", "PlaceRopeWithOffset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Bridge_C__pf3332962890, nullptr, "PlaceRopeWithOffset", nullptr, nullptr, sizeof(BP_Bridge_C__pf3332962890_eventbpf__PlaceRopeWithOffset__pf_Parms), Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Bridge_C__pf3332962890();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("PlaceRopeWithOffset") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Bridge_C__pf3332962890, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Bridge_C__pf3332962890();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Bridge_C__pf3332962890_NoRegister()
	{
		return ABP_Bridge_C__pf3332962890::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RopesCollision__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__RopesCollision__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RopeWidth__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RopeWidth__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RopesHeight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RopesHeight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Seed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Seed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PaddingEnd__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__PaddingEnd__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PaddingStart__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__PaddingStart__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MissingPlankChance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__MissingPlankChance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PolesRandomRotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PolesRandomRotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Poles__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Poles__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Poles__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlanksRandomRotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PlanksRandomRotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlanksGlobalScale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PlanksGlobalScale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Planks__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Planks__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Planks__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Width__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Width__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Gravity__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Gravity__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SegmentDist__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SegmentDist__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlankDist__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__PlankDist__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__End__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__End__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Spline__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Spline__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlacePoleWithOffset__pf, "PlacePoleWithOffset" }, // 3620713090
		{ &Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__PlaceRopeWithOffset__pf, "PlaceRopeWithOffset" }, // 3445583511
		{ &Z_Construct_UFunction_ABP_Bridge_C__pf3332962890_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 3266178355
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_Bridge__pf3332962890.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_Bridge_C" },
		{ "ReplaceConverted", "/Game/SuspensionBridge/Blueprints/BP_Bridge.BP_Bridge_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopesCollision__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Ropes Collision" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RopesCollision" },
		{ "tooltip", "Should the ropes collide" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopesCollision__pf = { "RopesCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__RopesCollision__pf), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopesCollision__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopesCollision__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopeWidth__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Rope Width" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RopeWidth" },
		{ "tooltip", "Width of the ropes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopeWidth__pf = { "RopeWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__RopeWidth__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopeWidth__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopeWidth__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopesHeight__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Ropes Height" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RopesHeight" },
		{ "tooltip", "Height of the upper ropes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopesHeight__pf = { "RopesHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__RopesHeight__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopesHeight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopesHeight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Seed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Seed" },
		{ "tooltip", "Seed for random" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Seed__pf = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__Seed__pf), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Seed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Seed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PaddingEnd__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Padding End" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PaddingEnd" },
		{ "tooltip", "How many planks should be left out from the end point" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PaddingEnd__pf = { "PaddingEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__PaddingEnd__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PaddingEnd__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PaddingEnd__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PaddingStart__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Padding Start" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PaddingStart" },
		{ "tooltip", "How many planks should be left out from the start point" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PaddingStart__pf = { "PaddingStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__PaddingStart__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PaddingStart__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PaddingStart__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__MissingPlankChance__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Missing Plank Chance" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MissingPlankChance" },
		{ "tooltip", "Chance for a certain plank to be missing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__MissingPlankChance__pf = { "MissingPlankChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__MissingPlankChance__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__MissingPlankChance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__MissingPlankChance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PolesRandomRotation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Poles Random Rotation" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PolesRandomRotation" },
		{ "tooltip", "Random rotation of poles (+/-)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PolesRandomRotation__pf = { "PolesRandomRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__PolesRandomRotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PolesRandomRotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PolesRandomRotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Poles__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Poles" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Poles" },
		{ "tooltip", "Pole models with scale" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Poles__pf = { "Poles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__Poles__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Poles__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Poles__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Poles__pf_Inner = { "bpv__Poles__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlanksRandomRotation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Planks Random Rotation" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PlanksRandomRotation" },
		{ "tooltip", "Random rotation for planks (+/-)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlanksRandomRotation__pf = { "PlanksRandomRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__PlanksRandomRotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlanksRandomRotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlanksRandomRotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlanksGlobalScale__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Planks Global Scale" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PlanksGlobalScale" },
		{ "tooltip", "Scales all of the planks" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlanksGlobalScale__pf = { "PlanksGlobalScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__PlanksGlobalScale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlanksGlobalScale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlanksGlobalScale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Planks__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Planks" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Planks" },
		{ "tooltip", "Plank models with custom scale" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Planks__pf = { "Planks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__Planks__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Planks__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Planks__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Planks__pf_Inner = { "bpv__Planks__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Width__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Width" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Width" },
		{ "tooltip", "Width of the bridge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Width__pf = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__Width__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Width__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Width__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Gravity__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Gravity" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Gravity" },
		{ "tooltip", "Simulated gravity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Gravity__pf = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__Gravity__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Gravity__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Gravity__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__SegmentDist__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Segment Dist" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SegmentDist" },
		{ "tooltip", "Distance between spline points" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__SegmentDist__pf = { "SegmentDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__SegmentDist__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__SegmentDist__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__SegmentDist__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlankDist__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Plank Dist" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PlankDist" },
		{ "tooltip", "Distance between planks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlankDist__pf = { "PlankDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__PlankDist__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlankDist__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlankDist__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__End__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "End" },
		{ "ExposeOnSpawn", "true" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "End" },
		{ "tooltip", "Other end of the bridge" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__End__pf = { "End", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__End__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__End__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__End__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Spline__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Bridge__pf3332962890.h" },
		{ "OverrideNativeName", "Spline" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Spline__pf = { "Spline", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Bridge_C__pf3332962890, bpv__Spline__pf), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Spline__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Spline__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopesCollision__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopeWidth__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__RopesHeight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Seed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PaddingEnd__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PaddingStart__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__MissingPlankChance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PolesRandomRotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Poles__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Poles__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlanksRandomRotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlanksGlobalScale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Planks__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Planks__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Width__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Gravity__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__SegmentDist__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__PlankDist__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__End__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::NewProp_bpv__Spline__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Bridge_C__pf3332962890>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::ClassParams = {
		&ABP_Bridge_C__pf3332962890::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_Bridge_C__pf3332962890()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/SuspensionBridge/Blueprints/BP_Bridge"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Bridge_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_Bridge_C__pf3332962890_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Bridge_C__pf3332962890, TEXT("BP_Bridge_C"), 1540481820);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_Bridge_C__pf3332962890>()
	{
		return ABP_Bridge_C__pf3332962890::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Bridge_C__pf3332962890(Z_Construct_UClass_ABP_Bridge_C__pf3332962890, &ABP_Bridge_C__pf3332962890::StaticClass, TEXT("/Game/SuspensionBridge/Blueprints/BP_Bridge"), TEXT("BP_Bridge_C"), true, TEXT("/Game/SuspensionBridge/Blueprints/BP_Bridge"), TEXT("/Game/SuspensionBridge/Blueprints/BP_Bridge.BP_Bridge_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Bridge_C__pf3332962890);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
