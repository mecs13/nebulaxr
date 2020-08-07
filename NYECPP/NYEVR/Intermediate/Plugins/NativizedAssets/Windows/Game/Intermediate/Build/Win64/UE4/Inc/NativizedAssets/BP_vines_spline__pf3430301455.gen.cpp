// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_vines_spline__pf3430301455.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_vines_spline__pf3430301455() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_vines_spline_C__pf3430301455();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_vines_spline_C__pf3430301455::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_vines_spline_C__pf3430301455_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_vines_spline_C__pf3430301455::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_vines_spline_C__pf3430301455_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_vines_spline_C__pf3430301455::StaticRegisterNativesABP_vines_spline_C__pf3430301455()
	{
		UClass* Class = ABP_vines_spline_C__pf3430301455::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", &ABP_vines_spline_C__pf3430301455::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_vines_spline_C__pf3430301455_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_vines_spline_C__pf3430301455_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_vines_spline__pf3430301455.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_vines_spline_C__pf3430301455_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_vines_spline_C__pf3430301455, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_vines_spline_C__pf3430301455_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_vines_spline_C__pf3430301455_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_vines_spline_C__pf3430301455_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_vines_spline_C__pf3430301455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_vines_spline_C__pf3430301455_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_NoRegister()
	{
		return ABP_vines_spline_C__pf3430301455::StaticClass();
	}
	struct Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_vines_spline_C__pf3430301455_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 448864359
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_vines_spline__pf3430301455.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_vines_spline__pf3430301455.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_vines_spline_C" },
		{ "ReplaceConverted", "/Game/Stylized_Landscape/blueprints/BP_vines_spline.BP_vines_spline_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_vines_spline__pf3430301455.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_vines_spline_C__pf3430301455, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::NewProp_bpv__Spline__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_vines_spline__pf3430301455.h" },
		{ "OverrideNativeName", "Spline" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::NewProp_bpv__Spline__pf = { "Spline", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_vines_spline_C__pf3430301455, bpv__Spline__pf), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::NewProp_bpv__Spline__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::NewProp_bpv__Spline__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::NewProp_bpv__Spline__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_vines_spline_C__pf3430301455>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::ClassParams = {
		&ABP_vines_spline_C__pf3430301455::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_vines_spline_C__pf3430301455()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stylized_Landscape/blueprints/BP_vines_spline"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_vines_spline_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_vines_spline_C__pf3430301455_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_vines_spline_C__pf3430301455, TEXT("BP_vines_spline_C"), 1728580548);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_vines_spline_C__pf3430301455>()
	{
		return ABP_vines_spline_C__pf3430301455::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_vines_spline_C__pf3430301455(Z_Construct_UClass_ABP_vines_spline_C__pf3430301455, &ABP_vines_spline_C__pf3430301455::StaticClass, TEXT("/Game/Stylized_Landscape/blueprints/BP_vines_spline"), TEXT("BP_vines_spline_C"), true, TEXT("/Game/Stylized_Landscape/blueprints/BP_vines_spline"), TEXT("/Game/Stylized_Landscape/blueprints/BP_vines_spline.BP_vines_spline_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_vines_spline_C__pf3430301455);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
