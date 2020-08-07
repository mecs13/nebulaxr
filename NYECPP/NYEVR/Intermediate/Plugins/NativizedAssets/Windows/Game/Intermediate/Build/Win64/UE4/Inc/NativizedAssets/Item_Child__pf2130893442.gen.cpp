// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Item_Child__pf2130893442.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem_Child__pf2130893442() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AItem_Child_C__pf2130893442_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AItem_Child_C__pf2130893442();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AItem_C__pf2130893442();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
// End Cross Module References
	void AItem_Child_C__pf2130893442::StaticRegisterNativesAItem_Child_C__pf2130893442()
	{
	}
	UClass* Z_Construct_UClass_AItem_Child_C__pf2130893442_NoRegister()
	{
		return AItem_Child_C__pf2130893442::StaticClass();
	}
	struct Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RotatingMovement__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RotatingMovement__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem_C__pf2130893442,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Item_Child__pf2130893442.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item_Child__pf2130893442.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Item_Child_C" },
		{ "ReplaceConverted", "/Game/SoftInventory/Items/Item_Child.Item_Child_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::NewProp_bpv__RotatingMovement__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item_Child__pf2130893442.h" },
		{ "OverrideNativeName", "RotatingMovement" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::NewProp_bpv__RotatingMovement__pf = { "RotatingMovement", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Child_C__pf2130893442, bpv__RotatingMovement__pf), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::NewProp_bpv__RotatingMovement__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::NewProp_bpv__RotatingMovement__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::NewProp_bpv__RotatingMovement__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem_Child_C__pf2130893442>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::ClassParams = {
		&AItem_Child_C__pf2130893442::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem_Child_C__pf2130893442()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/SoftInventory/Items/Item_Child"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Item_Child_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItem_Child_C__pf2130893442_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AItem_Child_C__pf2130893442, TEXT("Item_Child_C"), 2622097465);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AItem_Child_C__pf2130893442>()
	{
		return AItem_Child_C__pf2130893442::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItem_Child_C__pf2130893442(Z_Construct_UClass_AItem_Child_C__pf2130893442, &AItem_Child_C__pf2130893442::StaticClass, TEXT("/Game/SoftInventory/Items/Item_Child"), TEXT("Item_Child_C"), true, TEXT("/Game/SoftInventory/Items/Item_Child"), TEXT("/Game/SoftInventory/Items/Item_Child.Item_Child_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem_Child_C__pf2130893442);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
