// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_Particle_Leaves__pf321031355.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Particle_Leaves__pf321031355() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__P_Leaves_Enum__pf();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInterface_Wind_Particle_True_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_Particle_Leaves_C__pf321031355::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Particle_Leaves_C__pf321031355::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_Particle_Leaves_C__pf321031355_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_Particle_Leaves_C__pf321031355::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Particle_Leaves_C__pf321031355_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABP_Particle_Leaves_C__pf321031355_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Particle_Leaves_C__pf321031355::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Particle_Leaves_C__pf321031355_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Particle_Leaves_C__pf321031355::StaticRegisterNativesABP_Particle_Leaves_C__pf321031355()
	{
		UClass* Class = ABP_Particle_Leaves_C__pf321031355::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &ABP_Particle_Leaves_C__pf321031355::execbpf__ReceiveBeginPlay__pf },
			{ "UserConstructionScript", &ABP_Particle_Leaves_C__pf321031355::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_NoRegister()
	{
		return ABP_Particle_Leaves_C__pf321031355::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Leaves_Turbulence_Speed_Z__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Leaves_Turbulence_Speed_Z__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Leaves_Turbulence_Speed_Y__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Leaves_Turbulence_Speed_Y__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Leaves_Turbulence_Speed_X__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Leaves_Turbulence_Speed_X__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Leaves_Turbulence_Z__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Leaves_Turbulence_Z__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Leaves_Turbulence_Y__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Leaves_Turbulence_Y__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Leaves_Turbulence_X__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Leaves_Turbulence_X__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Leaves_Speed_Increase__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Leaves_Speed_Increase__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Leaves_size__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Leaves_size__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Leaves_Amount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Leaves_Amount__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnxRadius__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpawnxRadius__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CustomxMaterialxxAnyxofxyourxmaterialx__pfTTLTTTK_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CustomxMaterialxxAnyxofxyourxmaterialx__pfTTLTTTK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentxMaterial__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CurrentxMaterial__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeavesxType__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__LeavesxType__pfT;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__LeavesxType__pfT_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Sphere__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Sphere__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Billboard__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Billboard__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2264354333
		{ &Z_Construct_UFunction_ABP_Particle_Leaves_C__pf321031355_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 2220480273
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_Particle_Leaves__pf321031355.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_Particle_Leaves_C" },
		{ "ReplaceConverted", "/Game/Particles_Wind_Control_System/Blueprints/BP_Particle_Leaves.BP_Particle_Leaves_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf = { "CallFunc_Array_Get_Item_2", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, b0l__CallFunc_Array_Get_Item_2__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "CallFunc_K2_GetComponentsByClass_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = { "CallFunc_K2_GetComponentsByClass_ReturnValue", nullptr, (EPropertyFlags)0x0010008000202008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf_Inner = { "b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, b0l__CallFunc_Array_Get_Item_1__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable_2" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_2__pf = { "Temp_int_Array_Index_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, b0l__Temp_int_Array_Index_Variable_2__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Temp_bool_True_if_break_was_hit_Variable_2" },
	};
#endif
	void Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf_SetBit(void* Obj)
	{
		((ABP_Particle_Leaves_C__pf321031355*)Obj)->b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf = { "Temp_bool_True_if_break_was_hit_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Particle_Leaves_C__pf321031355), &Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "K2Node_SwitchEnum_CmpSuccess" },
	};
#endif
	void Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit(void* Obj)
	{
		((ABP_Particle_Leaves_C__pf321031355*)Obj)->b0l__K2Node_SwitchEnum_CmpSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf = { "K2Node_SwitchEnum_CmpSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Particle_Leaves_C__pf321031355), &Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_1__pf = { "Temp_int_Array_Index_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, b0l__Temp_int_Array_Index_Variable_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable_2" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_2__pf = { "Temp_int_Loop_Counter_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, b0l__Temp_int_Loop_Counter_Variable_2__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsWithInterface_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf = { "CallFunc_GetAllActorsWithInterface_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf = { "Temp_int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, b0l__Temp_int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf = { "Temp_int_Loop_Counter_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, b0l__Temp_int_Loop_Counter_Variable_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Temp_bool_True_if_break_was_hit_Variable_1" },
	};
#endif
	void Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf_SetBit(void* Obj)
	{
		((ABP_Particle_Leaves_C__pf321031355*)Obj)->b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf = { "Temp_bool_True_if_break_was_hit_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Particle_Leaves_C__pf321031355), &Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf = { "Temp_int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, b0l__Temp_int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Temp_bool_True_if_break_was_hit_Variable" },
	};
#endif
	void Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_SetBit(void* Obj)
	{
		((ABP_Particle_Leaves_C__pf321031355*)Obj)->b0l__Temp_bool_True_if_break_was_hit_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf = { "Temp_bool_True_if_break_was_hit_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Particle_Leaves_C__pf321031355), &Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_Z__pf_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Leaves Turbulence Speed Z" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Leaves_Turbulence_Speed_Z" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_Z__pf = { "Leaves_Turbulence_Speed_Z", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__Leaves_Turbulence_Speed_Z__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_Y__pf_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Leaves Turbulence Speed Y" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Leaves_Turbulence_Speed_Y" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_Y__pf = { "Leaves_Turbulence_Speed_Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__Leaves_Turbulence_Speed_Y__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_X__pf_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Leaves Turbulence Speed X" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Leaves_Turbulence_Speed_X" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_X__pf = { "Leaves_Turbulence_Speed_X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__Leaves_Turbulence_Speed_X__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Z__pf_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Leaves Turbulence Z" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Leaves_Turbulence_Z" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Z__pf = { "Leaves_Turbulence_Z", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__Leaves_Turbulence_Z__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Y__pf_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Leaves Turbulence Y" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Leaves_Turbulence_Y" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Y__pf = { "Leaves_Turbulence_Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__Leaves_Turbulence_Y__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_X__pf_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Leaves Turbulence X" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Leaves_Turbulence_X" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_X__pf = { "Leaves_Turbulence_X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__Leaves_Turbulence_X__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Speed_Increase__pf_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Leaves Speed Increase" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Leaves_Speed_Increase" },
		{ "UIMax", "8" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Speed_Increase__pf = { "Leaves_Speed_Increase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__Leaves_Speed_Increase__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Speed_Increase__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Speed_Increase__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_size__pf_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Leaves Size" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Leaves_size" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_size__pf = { "Leaves_size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__Leaves_size__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_size__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_size__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Amount__pf_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Leaves Amount" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Leaves_Amount" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Amount__pf = { "Leaves_Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__Leaves_Amount__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Amount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Amount__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__SpawnxRadius__pfT_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMin", "10" },
		{ "DisplayName", "Spawn Radius" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Spawn Radius" },
		{ "UIMin", "10" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__SpawnxRadius__pfT = { "Spawn Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__SpawnxRadius__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__SpawnxRadius__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__SpawnxRadius__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__CustomxMaterialxxAnyxofxyourxmaterialx__pfTTLTTTK_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "DisplayName", "Custom Material (Any Of Your Material)" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Custom Material (Any of your material)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__CustomxMaterialxxAnyxofxyourxmaterialx__pfTTLTTTK = { "Custom Material (Any of your material)", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__CustomxMaterialxxAnyxofxyourxmaterialx__pfTTLTTTK), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__CustomxMaterialxxAnyxofxyourxmaterialx__pfTTLTTTK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__CustomxMaterialxxAnyxofxyourxmaterialx__pfTTLTTTK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__CurrentxMaterial__pfT_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "DisplayName", "Current Material" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Current Material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__CurrentxMaterial__pfT = { "Current Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__CurrentxMaterial__pfT), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__CurrentxMaterial__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__CurrentxMaterial__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__LeavesxType__pfT_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "DisplayName", "Leaves Type" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Leaves Type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__LeavesxType__pfT = { "Leaves Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__LeavesxType__pfT), Z_Construct_UEnum_NativizedAssets_E__P_Leaves_Enum__pf, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__LeavesxType__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__LeavesxType__pfT_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__LeavesxType__pfT_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__ParticleSystem__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "ParticleSystem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__ParticleSystem__pf = { "ParticleSystem", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__ParticleSystem__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__ParticleSystem__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__ParticleSystem__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Sphere__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Sphere__pf = { "Sphere", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__Sphere__pf), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Sphere__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Sphere__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Billboard__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Particle_Leaves__pf321031355.h" },
		{ "OverrideNativeName", "Billboard" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Billboard__pf = { "Billboard", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Particle_Leaves_C__pf321031355, bpv__Billboard__pf), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Billboard__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Billboard__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Speed_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Turbulence_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Speed_Increase__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_size__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Leaves_Amount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__SpawnxRadius__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__CustomxMaterialxxAnyxofxyourxmaterialx__pfTTLTTTK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__CurrentxMaterial__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__LeavesxType__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__LeavesxType__pfT_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__ParticleSystem__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Sphere__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::NewProp_bpv__Billboard__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_Wind_Particle_True_C_NoRegister, (int32)VTABLE_OFFSET(ABP_Particle_Leaves_C__pf321031355, IInterface_Wind_Particle_True_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Particle_Leaves_C__pf321031355>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::ClassParams = {
		&ABP_Particle_Leaves_C__pf321031355::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Particles_Wind_Control_System/Blueprints/BP_Particle_Leaves"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Particle_Leaves_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Particle_Leaves_C__pf321031355, TEXT("BP_Particle_Leaves_C"), 3489653159);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_Particle_Leaves_C__pf321031355>()
	{
		return ABP_Particle_Leaves_C__pf321031355::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Particle_Leaves_C__pf321031355(Z_Construct_UClass_ABP_Particle_Leaves_C__pf321031355, &ABP_Particle_Leaves_C__pf321031355::StaticClass, TEXT("/Game/Particles_Wind_Control_System/Blueprints/BP_Particle_Leaves"), TEXT("BP_Particle_Leaves_C"), true, TEXT("/Game/Particles_Wind_Control_System/Blueprints/BP_Particle_Leaves"), TEXT("/Game/Particles_Wind_Control_System/Blueprints/BP_Particle_Leaves.BP_Particle_Leaves_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Particle_Leaves_C__pf321031355);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
