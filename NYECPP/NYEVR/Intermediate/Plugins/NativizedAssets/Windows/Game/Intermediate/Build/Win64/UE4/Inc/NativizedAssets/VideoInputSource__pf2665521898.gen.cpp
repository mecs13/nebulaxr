// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/VideoInputSource__pf2665521898.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoInputSource__pf2665521898() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__VideoInputSourceType__pf();
// End Cross Module References
class UScriptStruct* FVideoInputSource__pf2665521898::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSource"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("VideoInputSource")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898, StructPackage, TEXT("VideoInputSource"), sizeof(FVideoInputSource__pf2665521898), Get_Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FVideoInputSource__pf2665521898>()
{
	return FVideoInputSource__pf2665521898::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVideoInputSource__pf2665521898(FVideoInputSource__pf2665521898::StaticStruct, TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSource"), TEXT("VideoInputSource"), true, TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSource"), TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSource.VideoInputSource"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFVideoInputSource__pf2665521898
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFVideoInputSource__pf2665521898()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VideoInputSource")),new UScriptStruct::TCppStructOps<FVideoInputSource__pf2665521898>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFVideoInputSource__pf2665521898;
	struct Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSource"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VideoInputSource__pf2665521898.h" },
		{ "OverrideNativeName", "VideoInputSource" },
		{ "ReplaceConverted", "/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSource.VideoInputSource" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVideoInputSource__pf2665521898>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf_MetaData[] = {
		{ "Category", "VideoInputSource__pf2665521898" },
		{ "DisplayName", "GlobalMediaBroadcast" },
		{ "ModuleRelativePath", "Public/VideoInputSource__pf2665521898.h" },
		{ "OverrideNativeName", "GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf = { "GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInputSource__pf2665521898, bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf), Z_Construct_UClass_AGlobalMediaBroadcast_C__pf2665521898_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf_MetaData[] = {
		{ "Category", "VideoInputSource__pf2665521898" },
		{ "DisplayName", "LocalSourceData" },
		{ "ModuleRelativePath", "Public/VideoInputSource__pf2665521898.h" },
		{ "OverrideNativeName", "LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf = { "LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInputSource__pf2665521898, bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf_MetaData[] = {
		{ "Category", "VideoInputSource__pf2665521898" },
		{ "DisplayName", "SourceTypeToUse" },
		{ "ModuleRelativePath", "Public/VideoInputSource__pf2665521898.h" },
		{ "OverrideNativeName", "SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf = { "SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInputSource__pf2665521898, bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf), Z_Construct_UEnum_NativizedAssets_E__VideoInputSourceType__pf, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::NewProp_bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"VideoInputSource",
		sizeof(FVideoInputSource__pf2665521898),
		alignof(FVideoInputSource__pf2665521898),
		Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSource"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VideoInputSource"), sizeof(FVideoInputSource__pf2665521898), Get_Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898_Hash() { return 2051563835U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
