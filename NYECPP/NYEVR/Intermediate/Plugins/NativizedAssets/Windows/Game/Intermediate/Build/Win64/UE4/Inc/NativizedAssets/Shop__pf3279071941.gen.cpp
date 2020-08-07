// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Shop__pf3279071941.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShop__pf3279071941() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AShop_C__pf3279071941_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AShop_C__pf3279071941();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	void AShop_C__pf3279071941::StaticRegisterNativesAShop_C__pf3279071941()
	{
	}
	UClass* Z_Construct_UClass_AShop_C__pf3279071941_NoRegister()
	{
		return AShop_C__pf3279071941::StaticClass();
	}
	struct Z_Construct_UClass_AShop_C__pf3279071941_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Widget__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Widget__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShop_C__pf3279071941_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShop_C__pf3279071941_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Shop__pf3279071941.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Shop__pf3279071941.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Shop_C" },
		{ "ReplaceConverted", "/Game/Score/Shop/Shop.Shop_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShop_C__pf3279071941_Statics::NewProp_bpv__Widget__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Shop__pf3279071941.h" },
		{ "OverrideNativeName", "Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShop_C__pf3279071941_Statics::NewProp_bpv__Widget__pf = { "Widget", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShop_C__pf3279071941, bpv__Widget__pf), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShop_C__pf3279071941_Statics::NewProp_bpv__Widget__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShop_C__pf3279071941_Statics::NewProp_bpv__Widget__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShop_C__pf3279071941_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShop_C__pf3279071941_Statics::NewProp_bpv__Widget__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShop_C__pf3279071941_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShop_C__pf3279071941>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShop_C__pf3279071941_Statics::ClassParams = {
		&AShop_C__pf3279071941::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShop_C__pf3279071941_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShop_C__pf3279071941_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShop_C__pf3279071941_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShop_C__pf3279071941_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShop_C__pf3279071941()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Score/Shop/Shop"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Shop_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShop_C__pf3279071941_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AShop_C__pf3279071941, TEXT("Shop_C"), 3437115498);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AShop_C__pf3279071941>()
	{
		return AShop_C__pf3279071941::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShop_C__pf3279071941(Z_Construct_UClass_AShop_C__pf3279071941, &AShop_C__pf3279071941::StaticClass, TEXT("/Game/Score/Shop/Shop"), TEXT("Shop_C"), true, TEXT("/Game/Score/Shop/Shop"), TEXT("/Game/Score/Shop/Shop.Shop_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShop_C__pf3279071941);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
