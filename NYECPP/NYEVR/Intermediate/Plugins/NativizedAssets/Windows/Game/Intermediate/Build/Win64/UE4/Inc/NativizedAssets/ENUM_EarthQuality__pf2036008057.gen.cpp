// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENUM_EarthQuality__pf2036008057.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENUM_EarthQuality__pf2036008057() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENUM_EarthQuality__pf();
// End Cross Module References
	static UEnum* E__ENUM_EarthQuality__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Earth32/Blueprint/ENUM_EarthQuality"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENUM_EarthQuality")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENUM_EarthQuality__pf, EnumPackage, TEXT("ENUM_EarthQuality"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENUM_EarthQuality__pf>()
	{
		return E__ENUM_EarthQuality__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENUM_EarthQuality__pf(E__ENUM_EarthQuality__pf_StaticEnum, TEXT("/Game/Earth32/Blueprint/ENUM_EarthQuality"), TEXT("ENUM_EarthQuality"), true, TEXT("/Game/Earth32/Blueprint/ENUM_EarthQuality"), TEXT("/Game/Earth32/Blueprint/ENUM_EarthQuality.ENUM_EarthQuality"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENUM_EarthQuality__pf_Hash() { return 2355353953U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENUM_EarthQuality__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Earth32/Blueprint/ENUM_EarthQuality"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENUM_EarthQuality"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENUM_EarthQuality__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENUM_EarthQuality::NewEnumerator0", (int64)E__ENUM_EarthQuality__pf::NewEnumerator0 },
				{ "ENUM_EarthQuality::NewEnumerator1", (int64)E__ENUM_EarthQuality__pf::NewEnumerator1 },
				{ "ENUM_EarthQuality::NewEnumerator2", (int64)E__ENUM_EarthQuality__pf::NewEnumerator2 },
				{ "ENUM_EarthQuality::NewEnumerator3", (int64)E__ENUM_EarthQuality__pf::NewEnumerator3 },
				{ "ENUM_EarthQuality::NewEnumerator4", (int64)E__ENUM_EarthQuality__pf::NewEnumerator4 },
				{ "ENUM_EarthQuality::NewEnumerator5", (int64)E__ENUM_EarthQuality__pf::NewEnumerator5 },
				{ "ENUM_EarthQuality::ENUM_MAX", (int64)E__ENUM_EarthQuality__pf::E__ENUM_EarthQuality__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENUM_EarthQuality__pf_MAX.Name", "E__ENUM_EarthQuality__pf::E__ENUM_EarthQuality__pf_MAX" },
				{ "E__ENUM_EarthQuality__pf_MAX.OverrideName", "ENUM_EarthQuality::ENUM_MAX" },
				{ "EnumDisplayNameFn", "E__ENUM_EarthQuality__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENUM_EarthQuality__pf2036008057.h" },
				{ "NewEnumerator0.Name", "E__ENUM_EarthQuality__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENUM_EarthQuality::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENUM_EarthQuality__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENUM_EarthQuality::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__ENUM_EarthQuality__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENUM_EarthQuality::NewEnumerator2" },
				{ "NewEnumerator3.Name", "E__ENUM_EarthQuality__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "ENUM_EarthQuality::NewEnumerator3" },
				{ "NewEnumerator4.Name", "E__ENUM_EarthQuality__pf::NewEnumerator4" },
				{ "NewEnumerator4.OverrideName", "ENUM_EarthQuality::NewEnumerator4" },
				{ "NewEnumerator5.Name", "E__ENUM_EarthQuality__pf::NewEnumerator5" },
				{ "NewEnumerator5.OverrideName", "ENUM_EarthQuality::NewEnumerator5" },
				{ "OverrideNativeName", "ENUM_EarthQuality" },
				{ "ReplaceConverted", "/Game/Earth32/Blueprint/ENUM_EarthQuality.ENUM_EarthQuality" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Earth32/Blueprint/ENUM_EarthQuality")); },
				E__ENUM_EarthQuality__pf__GetUserFriendlyName,
				"ENUM_EarthQuality",
				"E__ENUM_EarthQuality__pf",
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