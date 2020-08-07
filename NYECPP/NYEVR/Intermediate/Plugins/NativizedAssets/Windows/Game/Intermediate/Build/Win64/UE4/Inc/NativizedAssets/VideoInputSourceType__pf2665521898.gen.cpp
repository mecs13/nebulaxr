// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/VideoInputSourceType__pf2665521898.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoInputSourceType__pf2665521898() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__VideoInputSourceType__pf();
// End Cross Module References
	static UEnum* E__VideoInputSourceType__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSourceType"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("VideoInputSourceType")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__VideoInputSourceType__pf, EnumPackage, TEXT("VideoInputSourceType"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__VideoInputSourceType__pf>()
	{
		return E__VideoInputSourceType__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__VideoInputSourceType__pf(E__VideoInputSourceType__pf_StaticEnum, TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSourceType"), TEXT("VideoInputSourceType"), true, TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSourceType"), TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSourceType.VideoInputSourceType"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__VideoInputSourceType__pf_Hash() { return 3047407842U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__VideoInputSourceType__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSourceType"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("VideoInputSourceType"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__VideoInputSourceType__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VideoInputSourceType::NewEnumerator1", (int64)E__VideoInputSourceType__pf::NewEnumerator1 },
				{ "VideoInputSourceType::NewEnumerator0", (int64)E__VideoInputSourceType__pf::NewEnumerator0 },
				{ "VideoInputSourceType::VideoInputSourceType_MAX", (int64)E__VideoInputSourceType__pf::E__VideoInputSourceType__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__VideoInputSourceType__pf_MAX.Name", "E__VideoInputSourceType__pf::E__VideoInputSourceType__pf_MAX" },
				{ "E__VideoInputSourceType__pf_MAX.OverrideName", "VideoInputSourceType::VideoInputSourceType_MAX" },
				{ "EnumDisplayNameFn", "E__VideoInputSourceType__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/VideoInputSourceType__pf2665521898.h" },
				{ "NewEnumerator0.Name", "E__VideoInputSourceType__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "VideoInputSourceType::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__VideoInputSourceType__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "VideoInputSourceType::NewEnumerator1" },
				{ "OverrideNativeName", "VideoInputSourceType" },
				{ "ReplaceConverted", "/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSourceType.VideoInputSourceType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSourceType")); },
				E__VideoInputSourceType__pf__GetUserFriendlyName,
				"VideoInputSourceType",
				"E__VideoInputSourceType__pf",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient,
				UE4CodeGen_Private::EDynamicType::Dynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
