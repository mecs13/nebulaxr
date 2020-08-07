// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ItemStructure__pf1634840482.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemStructure__pf1634840482() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FItemStructure__pf1634840482();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FItemStructure__pf1634840482::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/SoftInventory/ItemStructure"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("ItemStructure")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStructure__pf1634840482, StructPackage, TEXT("ItemStructure"), sizeof(FItemStructure__pf1634840482), Get_Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FItemStructure__pf1634840482>()
{
	return FItemStructure__pf1634840482::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemStructure__pf1634840482(FItemStructure__pf1634840482::StaticStruct, TEXT("/Game/SoftInventory/ItemStructure"), TEXT("ItemStructure"), true, TEXT("/Game/SoftInventory/ItemStructure"), TEXT("/Game/SoftInventory/ItemStructure.ItemStructure"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFItemStructure__pf1634840482
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFItemStructure__pf1634840482()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemStructure")),new UScriptStruct::TCppStructOps<FItemStructure__pf1634840482>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFItemStructure__pf1634840482;
	struct Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Class_19_97A2145C46455AAAB992E3B2B3B641B7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__Class_19_97A2145C46455AAAB992E3B2B3B641B7__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf_MetaData[];
#endif
		static void NewProp_bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Thumbnail_8_22A527D2432BDD304913679CB31F9860__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Thumbnail_8_22A527D2432BDD304913679CB31F9860__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf_MetaData[];
#endif
		static void NewProp_bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Name_2_4B8FD9214036DB134EB00482AF219862__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__Name_2_4B8FD9214036DB134EB00482AF219862__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/SoftInventory/ItemStructure"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemStructure__pf1634840482.h" },
		{ "OverrideNativeName", "ItemStructure" },
		{ "ReplaceConverted", "/Game/SoftInventory/ItemStructure.ItemStructure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStructure__pf1634840482>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Class_19_97A2145C46455AAAB992E3B2B3B641B7__pf_MetaData[] = {
		{ "Category", "ItemStructure__pf1634840482" },
		{ "DisplayName", "Class" },
		{ "ModuleRelativePath", "Public/ItemStructure__pf1634840482.h" },
		{ "OverrideNativeName", "Class_19_97A2145C46455AAAB992E3B2B3B641B7" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Class_19_97A2145C46455AAAB992E3B2B3B641B7__pf = { "Class_19_97A2145C46455AAAB992E3B2B3B641B7", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemStructure__pf1634840482, bpv__Class_19_97A2145C46455AAAB992E3B2B3B641B7__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Class_19_97A2145C46455AAAB992E3B2B3B641B7__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Class_19_97A2145C46455AAAB992E3B2B3B641B7__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf_MetaData[] = {
		{ "Category", "ItemStructure__pf1634840482" },
		{ "DisplayName", "isConsumable" },
		{ "ModuleRelativePath", "Public/ItemStructure__pf1634840482.h" },
		{ "OverrideNativeName", "isConsumable_14_3961646C477A8890E90654BF579718FB" },
		{ "Tooltip", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf_SetBit(void* Obj)
	{
		((FItemStructure__pf1634840482*)Obj)->bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf = { "isConsumable_14_3961646C477A8890E90654BF579718FB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FItemStructure__pf1634840482), &Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9__pf_MetaData[] = {
		{ "Category", "ItemStructure__pf1634840482" },
		{ "DisplayName", "MaxStack" },
		{ "ModuleRelativePath", "Public/ItemStructure__pf1634840482.h" },
		{ "OverrideNativeName", "MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9__pf = { "MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemStructure__pf1634840482, bpv__MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Thumbnail_8_22A527D2432BDD304913679CB31F9860__pf_MetaData[] = {
		{ "Category", "ItemStructure__pf1634840482" },
		{ "DisplayName", "Thumbnail" },
		{ "ModuleRelativePath", "Public/ItemStructure__pf1634840482.h" },
		{ "OverrideNativeName", "Thumbnail_8_22A527D2432BDD304913679CB31F9860" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Thumbnail_8_22A527D2432BDD304913679CB31F9860__pf = { "Thumbnail_8_22A527D2432BDD304913679CB31F9860", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemStructure__pf1634840482, bpv__Thumbnail_8_22A527D2432BDD304913679CB31F9860__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Thumbnail_8_22A527D2432BDD304913679CB31F9860__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Thumbnail_8_22A527D2432BDD304913679CB31F9860__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf_MetaData[] = {
		{ "Category", "ItemStructure__pf1634840482" },
		{ "DisplayName", "isStackable" },
		{ "ModuleRelativePath", "Public/ItemStructure__pf1634840482.h" },
		{ "OverrideNativeName", "isStackable_5_BE43225446C8F93DA0EA27A1B68FED87" },
		{ "Tooltip", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf_SetBit(void* Obj)
	{
		((FItemStructure__pf1634840482*)Obj)->bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf = { "isStackable_5_BE43225446C8F93DA0EA27A1B68FED87", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FItemStructure__pf1634840482), &Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Name_2_4B8FD9214036DB134EB00482AF219862__pf_MetaData[] = {
		{ "Category", "ItemStructure__pf1634840482" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/ItemStructure__pf1634840482.h" },
		{ "OverrideNativeName", "Name_2_4B8FD9214036DB134EB00482AF219862" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Name_2_4B8FD9214036DB134EB00482AF219862__pf = { "Name_2_4B8FD9214036DB134EB00482AF219862", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemStructure__pf1634840482, bpv__Name_2_4B8FD9214036DB134EB00482AF219862__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Name_2_4B8FD9214036DB134EB00482AF219862__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Name_2_4B8FD9214036DB134EB00482AF219862__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Class_19_97A2145C46455AAAB992E3B2B3B641B7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Thumbnail_8_22A527D2432BDD304913679CB31F9860__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::NewProp_bpv__Name_2_4B8FD9214036DB134EB00482AF219862__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"ItemStructure",
		sizeof(FItemStructure__pf1634840482),
		alignof(FItemStructure__pf1634840482),
		Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemStructure__pf1634840482()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/SoftInventory/ItemStructure"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemStructure"), sizeof(FItemStructure__pf1634840482), Get_Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemStructure__pf1634840482_Hash() { return 4059928031U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
