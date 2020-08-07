// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/VideoParams__pf2665521898.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoParams__pf2665521898() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FVideoParams__pf2665521898();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlaylist_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
// End Cross Module References
class UScriptStruct* FVideoParams__pf2665521898::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoParams"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("VideoParams")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVideoParams__pf2665521898, StructPackage, TEXT("VideoParams"), sizeof(FVideoParams__pf2665521898), Get_Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FVideoParams__pf2665521898>()
{
	return FVideoParams__pf2665521898::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVideoParams__pf2665521898(FVideoParams__pf2665521898::StaticStruct, TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoParams"), TEXT("VideoParams"), true, TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoParams"), TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoParams.VideoParams"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFVideoParams__pf2665521898
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFVideoParams__pf2665521898()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VideoParams")),new UScriptStruct::TCppStructOps<FVideoParams__pf2665521898>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFVideoParams__pf2665521898;
	struct Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoParams"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VideoParams__pf2665521898.h" },
		{ "OverrideNativeName", "VideoParams" },
		{ "ReplaceConverted", "/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoParams.VideoParams" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVideoParams__pf2665521898>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf_MetaData[] = {
		{ "Category", "VideoParams__pf2665521898" },
		{ "DisplayName", "Playlist" },
		{ "ModuleRelativePath", "Public/VideoParams__pf2665521898.h" },
		{ "OverrideNativeName", "Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf = { "Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoParams__pf2665521898, bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf), Z_Construct_UClass_UMediaPlaylist_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf_MetaData[] = {
		{ "Category", "VideoParams__pf2665521898" },
		{ "DisplayName", "Source" },
		{ "ModuleRelativePath", "Public/VideoParams__pf2665521898.h" },
		{ "OverrideNativeName", "Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf = { "Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoParams__pf2665521898, bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf_MetaData[] = {
		{ "Category", "VideoParams__pf2665521898" },
		{ "DisplayName", "MediaTexture" },
		{ "ModuleRelativePath", "Public/VideoParams__pf2665521898.h" },
		{ "OverrideNativeName", "MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf = { "MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoParams__pf2665521898, bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::NewProp_bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"VideoParams",
		sizeof(FVideoParams__pf2665521898),
		alignof(FVideoParams__pf2665521898),
		Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVideoParams__pf2665521898()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoParams"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VideoParams"), sizeof(FVideoParams__pf2665521898), Get_Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVideoParams__pf2665521898_Hash() { return 1962826153U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
