// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/S_MeshRScale__pf3332962890.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_MeshRScale__pf3332962890() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FS_MeshRScale__pf3332962890::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/SuspensionBridge/Blueprints/S_MeshRScale"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("S_MeshRScale")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890, StructPackage, TEXT("S_MeshRScale"), sizeof(FS_MeshRScale__pf3332962890), Get_Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FS_MeshRScale__pf3332962890>()
{
	return FS_MeshRScale__pf3332962890::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_MeshRScale__pf3332962890(FS_MeshRScale__pf3332962890::StaticStruct, TEXT("/Game/SuspensionBridge/Blueprints/S_MeshRScale"), TEXT("S_MeshRScale"), true, TEXT("/Game/SuspensionBridge/Blueprints/S_MeshRScale"), TEXT("/Game/SuspensionBridge/Blueprints/S_MeshRScale.S_MeshRScale"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFS_MeshRScale__pf3332962890
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFS_MeshRScale__pf3332962890()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_MeshRScale")),new UScriptStruct::TCppStructOps<FS_MeshRScale__pf3332962890>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFS_MeshRScale__pf3332962890;
	struct Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MaxScale_8_A830D4EB473AA064C574B982435043DB__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__MaxScale_8_A830D4EB473AA064C574B982435043DB__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MinScale_6_BD40D252462E38105718A9BC5CE3D0F2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__MinScale_6_BD40D252462E38105718A9BC5CE3D0F2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Mesh_2_B211811B40E65E5BAC21D2A96FA53F31__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Mesh_2_B211811B40E65E5BAC21D2A96FA53F31__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/SuspensionBridge/Blueprints/S_MeshRScale"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/S_MeshRScale__pf3332962890.h" },
		{ "OverrideNativeName", "S_MeshRScale" },
		{ "ReplaceConverted", "/Game/SuspensionBridge/Blueprints/S_MeshRScale.S_MeshRScale" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_MeshRScale__pf3332962890>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__MaxScale_8_A830D4EB473AA064C574B982435043DB__pf_MetaData[] = {
		{ "Category", "S_MeshRScale__pf3332962890" },
		{ "DisplayName", "MaxScale" },
		{ "ModuleRelativePath", "Public/S_MeshRScale__pf3332962890.h" },
		{ "OverrideNativeName", "MaxScale_8_A830D4EB473AA064C574B982435043DB" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__MaxScale_8_A830D4EB473AA064C574B982435043DB__pf = { "MaxScale_8_A830D4EB473AA064C574B982435043DB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_MeshRScale__pf3332962890, bpv__MaxScale_8_A830D4EB473AA064C574B982435043DB__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__MaxScale_8_A830D4EB473AA064C574B982435043DB__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__MaxScale_8_A830D4EB473AA064C574B982435043DB__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__MinScale_6_BD40D252462E38105718A9BC5CE3D0F2__pf_MetaData[] = {
		{ "Category", "S_MeshRScale__pf3332962890" },
		{ "DisplayName", "MinScale" },
		{ "ModuleRelativePath", "Public/S_MeshRScale__pf3332962890.h" },
		{ "OverrideNativeName", "MinScale_6_BD40D252462E38105718A9BC5CE3D0F2" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__MinScale_6_BD40D252462E38105718A9BC5CE3D0F2__pf = { "MinScale_6_BD40D252462E38105718A9BC5CE3D0F2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_MeshRScale__pf3332962890, bpv__MinScale_6_BD40D252462E38105718A9BC5CE3D0F2__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__MinScale_6_BD40D252462E38105718A9BC5CE3D0F2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__MinScale_6_BD40D252462E38105718A9BC5CE3D0F2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__Mesh_2_B211811B40E65E5BAC21D2A96FA53F31__pf_MetaData[] = {
		{ "Category", "S_MeshRScale__pf3332962890" },
		{ "DisplayName", "Mesh" },
		{ "ModuleRelativePath", "Public/S_MeshRScale__pf3332962890.h" },
		{ "OverrideNativeName", "Mesh_2_B211811B40E65E5BAC21D2A96FA53F31" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__Mesh_2_B211811B40E65E5BAC21D2A96FA53F31__pf = { "Mesh_2_B211811B40E65E5BAC21D2A96FA53F31", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_MeshRScale__pf3332962890, bpv__Mesh_2_B211811B40E65E5BAC21D2A96FA53F31__pf), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__Mesh_2_B211811B40E65E5BAC21D2A96FA53F31__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__Mesh_2_B211811B40E65E5BAC21D2A96FA53F31__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__MaxScale_8_A830D4EB473AA064C574B982435043DB__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__MinScale_6_BD40D252462E38105718A9BC5CE3D0F2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::NewProp_bpv__Mesh_2_B211811B40E65E5BAC21D2A96FA53F31__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"S_MeshRScale",
		sizeof(FS_MeshRScale__pf3332962890),
		alignof(FS_MeshRScale__pf3332962890),
		Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/SuspensionBridge/Blueprints/S_MeshRScale"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_MeshRScale"), sizeof(FS_MeshRScale__pf3332962890), Get_Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890_Hash() { return 1373982421U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
