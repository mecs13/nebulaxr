// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_Earth__pf2036008057.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Earth__pf2036008057() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Earth_C__pf2036008057_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Earth_C__pf2036008057();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENUM_EarthQuality__pf();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_Earth_C__pf2036008057::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_Earth_C__pf2036008057_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Earth_C__pf2036008057::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Earth_C__pf2036008057_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Earth_C__pf2036008057::StaticRegisterNativesABP_Earth_C__pf2036008057()
	{
		UClass* Class = ABP_Earth_C__pf2036008057::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", &ABP_Earth_C__pf2036008057::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_Earth_C__pf2036008057_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Earth_C__pf2036008057_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_Earth__pf2036008057.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Earth_C__pf2036008057_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Earth_C__pf2036008057, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Earth_C__pf2036008057_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Earth_C__pf2036008057_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Earth_C__pf2036008057_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Earth_C__pf2036008057();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Earth_C__pf2036008057_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Earth_C__pf2036008057_NoRegister()
	{
		return ABP_Earth_C__pf2036008057::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Quality__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__Quality__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__Quality__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MoonMaterial__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MoonMaterial__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StarsMaterial__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StarsMaterial__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AtmosphereMaterial__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AtmosphereMaterial__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EarthMaterial__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__EarthMaterial__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RefreshxMaterials__pfT_MetaData[];
#endif
		static void NewProp_bpv__RefreshxMaterials__pfT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__RefreshxMaterials__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Atmosphere__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Atmosphere__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_Earth_C__pf2036008057_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 3897000407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "BP_Earth__pf2036008057.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_Earth__pf2036008057.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_Earth_C" },
		{ "ReplaceConverted", "/Game/Earth32/Blueprint/BP_Earth.BP_Earth_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__Quality__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Quality" },
		{ "ModuleRelativePath", "Public/BP_Earth__pf2036008057.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Quality" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__Quality__pf = { "Quality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Earth_C__pf2036008057, bpv__Quality__pf), Z_Construct_UEnum_NativizedAssets_E__ENUM_EarthQuality__pf, METADATA_PARAMS(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__Quality__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__Quality__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__Quality__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__MoonMaterial__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Moon Material" },
		{ "ModuleRelativePath", "Public/BP_Earth__pf2036008057.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MoonMaterial" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__MoonMaterial__pf = { "MoonMaterial", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Earth_C__pf2036008057, bpv__MoonMaterial__pf), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__MoonMaterial__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__MoonMaterial__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__StarsMaterial__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Stars Material" },
		{ "ModuleRelativePath", "Public/BP_Earth__pf2036008057.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "StarsMaterial" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__StarsMaterial__pf = { "StarsMaterial", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Earth_C__pf2036008057, bpv__StarsMaterial__pf), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__StarsMaterial__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__StarsMaterial__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__AtmosphereMaterial__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Atmosphere Material" },
		{ "ModuleRelativePath", "Public/BP_Earth__pf2036008057.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "AtmosphereMaterial" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__AtmosphereMaterial__pf = { "AtmosphereMaterial", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Earth_C__pf2036008057, bpv__AtmosphereMaterial__pf), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__AtmosphereMaterial__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__AtmosphereMaterial__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__EarthMaterial__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Earth Material" },
		{ "ModuleRelativePath", "Public/BP_Earth__pf2036008057.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "EarthMaterial" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__EarthMaterial__pf = { "EarthMaterial", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Earth_C__pf2036008057, bpv__EarthMaterial__pf), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__EarthMaterial__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__EarthMaterial__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__RefreshxMaterials__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Refresh Materials" },
		{ "ModuleRelativePath", "Public/BP_Earth__pf2036008057.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Refresh Materials" },
	};
#endif
	void Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__RefreshxMaterials__pfT_SetBit(void* Obj)
	{
		((ABP_Earth_C__pf2036008057*)Obj)->bpv__RefreshxMaterials__pfT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__RefreshxMaterials__pfT = { "Refresh Materials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Earth_C__pf2036008057), &Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__RefreshxMaterials__pfT_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__RefreshxMaterials__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__RefreshxMaterials__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__Atmosphere__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Earth__pf2036008057.h" },
		{ "OverrideNativeName", "Atmosphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__Atmosphere__pf = { "Atmosphere", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Earth_C__pf2036008057, bpv__Atmosphere__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__Atmosphere__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__Atmosphere__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__Quality__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__Quality__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__MoonMaterial__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__StarsMaterial__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__AtmosphereMaterial__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__EarthMaterial__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__RefreshxMaterials__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::NewProp_bpv__Atmosphere__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Earth_C__pf2036008057>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::ClassParams = {
		&ABP_Earth_C__pf2036008057::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_Earth_C__pf2036008057()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Earth32/Blueprint/BP_Earth"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Earth_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_Earth_C__pf2036008057_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Earth_C__pf2036008057, TEXT("BP_Earth_C"), 1768298964);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_Earth_C__pf2036008057>()
	{
		return ABP_Earth_C__pf2036008057::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Earth_C__pf2036008057(Z_Construct_UClass_ABP_Earth_C__pf2036008057, &ABP_Earth_C__pf2036008057::StaticClass, TEXT("/Game/Earth32/Blueprint/BP_Earth"), TEXT("BP_Earth_C"), true, TEXT("/Game/Earth32/Blueprint/BP_Earth"), TEXT("/Game/Earth32/Blueprint/BP_Earth.BP_Earth_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Earth_C__pf2036008057);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
