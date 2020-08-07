// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/GlobalMediaBroadcast__pf2665521898.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalMediaBroadcast__pf2665521898() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FVideoParams__pf2665521898();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGlobalMediaBroadcast_C__pf2665521898::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_AGlobalMediaBroadcast_C__pf2665521898_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AGlobalMediaBroadcast_C__pf2665521898::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGlobalMediaBroadcast_C__pf2665521898_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void AGlobalMediaBroadcast_C__pf2665521898::StaticRegisterNativesAGlobalMediaBroadcast_C__pf2665521898()
	{
		UClass* Class = AGlobalMediaBroadcast_C__pf2665521898::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &AGlobalMediaBroadcast_C__pf2665521898::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGlobalMediaBroadcast_C__pf2665521898_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlobalMediaBroadcast_C__pf2665521898_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/GlobalMediaBroadcast__pf2665521898.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlobalMediaBroadcast_C__pf2665521898_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlobalMediaBroadcast_C__pf2665521898_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlobalMediaBroadcast_C__pf2665521898_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlobalMediaBroadcast_C__pf2665521898_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGlobalMediaBroadcast_C__pf2665521898_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_NoRegister()
	{
		return AGlobalMediaBroadcast_C__pf2665521898::StaticClass();
	}
	struct Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GlobalChannels__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__GlobalChannels__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__GlobalChannels__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NoSignalVideo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__NoSignalVideo__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Billboard__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Billboard__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGlobalMediaBroadcast_C__pf2665521898_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3451480042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GlobalMediaBroadcast__pf2665521898.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GlobalMediaBroadcast__pf2665521898.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "GlobalMediaBroadcast_C" },
		{ "ReplaceConverted", "/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/GlobalMediaBroadcast.GlobalMediaBroadcast_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GlobalMediaBroadcast__pf2665521898.h" },
		{ "OverrideNativeName", "CallFunc_GetDataTableRowFromName_OutRow" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf = { "CallFunc_GetDataTableRowFromName_OutRow", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlobalMediaBroadcast_C__pf2665521898, b0l__CallFunc_GetDataTableRowFromName_OutRow__pf), Z_Construct_UScriptStruct_FVideoParams__pf2665521898, METADATA_PARAMS(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GlobalMediaBroadcast__pf2665521898.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlobalMediaBroadcast_C__pf2665521898, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GlobalMediaBroadcast__pf2665521898.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf = { "Temp_int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlobalMediaBroadcast_C__pf2665521898, b0l__Temp_int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GlobalMediaBroadcast__pf2665521898.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf = { "Temp_int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlobalMediaBroadcast_C__pf2665521898, b0l__Temp_int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__GlobalChannels__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Global Channels" },
		{ "ModuleRelativePath", "Public/GlobalMediaBroadcast__pf2665521898.h" },
		{ "OverrideNativeName", "GlobalChannels" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__GlobalChannels__pf = { "GlobalChannels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlobalMediaBroadcast_C__pf2665521898, bpv__GlobalChannels__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__GlobalChannels__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__GlobalChannels__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__GlobalChannels__pf_Inner = { "bpv__GlobalChannels__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__NoSignalVideo__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "No Signal Video" },
		{ "ModuleRelativePath", "Public/GlobalMediaBroadcast__pf2665521898.h" },
		{ "OverrideNativeName", "NoSignalVideo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__NoSignalVideo__pf = { "NoSignalVideo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlobalMediaBroadcast_C__pf2665521898, bpv__NoSignalVideo__pf), Z_Construct_UScriptStruct_FVideoParams__pf2665521898, METADATA_PARAMS(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__NoSignalVideo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__NoSignalVideo__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__Billboard__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GlobalMediaBroadcast__pf2665521898.h" },
		{ "OverrideNativeName", "Billboard" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__Billboard__pf = { "Billboard", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlobalMediaBroadcast_C__pf2665521898, bpv__Billboard__pf), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__Billboard__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__Billboard__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__GlobalChannels__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__GlobalChannels__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__NoSignalVideo__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::NewProp_bpv__Billboard__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlobalMediaBroadcast_C__pf2665521898>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::ClassParams = {
		&AGlobalMediaBroadcast_C__pf2665521898::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/GlobalMediaBroadcast"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("GlobalMediaBroadcast_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AGlobalMediaBroadcast_C__pf2665521898, TEXT("GlobalMediaBroadcast_C"), 1816254767);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AGlobalMediaBroadcast_C__pf2665521898>()
	{
		return AGlobalMediaBroadcast_C__pf2665521898::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGlobalMediaBroadcast_C__pf2665521898(Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898, &AGlobalMediaBroadcast_C__pf2665521898::StaticClass, TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/GlobalMediaBroadcast"), TEXT("GlobalMediaBroadcast_C"), true, TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/GlobalMediaBroadcast"), TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/GlobalMediaBroadcast.GlobalMediaBroadcast_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGlobalMediaBroadcast_C__pf2665521898);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
