// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Teleport__pf643803050.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleport__pf643803050() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATeleport_C__pf643803050_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATeleport_C__pf643803050();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	void ATeleport_C__pf643803050::StaticRegisterNativesATeleport_C__pf643803050()
	{
	}
	UClass* Z_Construct_UClass_ATeleport_C__pf643803050_NoRegister()
	{
		return ATeleport_C__pf643803050::StaticClass();
	}
	struct Z_Construct_UClass_ATeleport_C__pf643803050_Statics
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
	UObject* (*const Z_Construct_UClass_ATeleport_C__pf643803050_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleport_C__pf643803050_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Teleport__pf643803050.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Teleport__pf643803050.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Teleport_C" },
		{ "ReplaceConverted", "/Game/MapData/Teleport.Teleport_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleport_C__pf643803050_Statics::NewProp_bpv__Widget__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Teleport__pf643803050.h" },
		{ "OverrideNativeName", "Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleport_C__pf643803050_Statics::NewProp_bpv__Widget__pf = { "Widget", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleport_C__pf643803050, bpv__Widget__pf), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeleport_C__pf643803050_Statics::NewProp_bpv__Widget__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleport_C__pf643803050_Statics::NewProp_bpv__Widget__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeleport_C__pf643803050_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleport_C__pf643803050_Statics::NewProp_bpv__Widget__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeleport_C__pf643803050_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeleport_C__pf643803050>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeleport_C__pf643803050_Statics::ClassParams = {
		&ATeleport_C__pf643803050::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATeleport_C__pf643803050_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeleport_C__pf643803050_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeleport_C__pf643803050_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleport_C__pf643803050_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeleport_C__pf643803050()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/MapData/Teleport"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Teleport_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeleport_C__pf643803050_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ATeleport_C__pf643803050, TEXT("Teleport_C"), 958637471);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ATeleport_C__pf643803050>()
	{
		return ATeleport_C__pf643803050::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeleport_C__pf643803050(Z_Construct_UClass_ATeleport_C__pf643803050, &ATeleport_C__pf643803050::StaticClass, TEXT("/Game/MapData/Teleport"), TEXT("Teleport_C"), true, TEXT("/Game/MapData/Teleport"), TEXT("/Game/MapData/Teleport.Teleport_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeleport_C__pf643803050);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
