// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Enum_GoodSky_Effects__pf194322682.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnum_GoodSky_Effects__pf194322682() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__Enum_GoodSky_Effects__pf();
// End Cross Module References
	static UEnum* E__Enum_GoodSky_Effects__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Effects"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("Enum_GoodSky_Effects")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__Enum_GoodSky_Effects__pf, EnumPackage, TEXT("Enum_GoodSky_Effects"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__Enum_GoodSky_Effects__pf>()
	{
		return E__Enum_GoodSky_Effects__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__Enum_GoodSky_Effects__pf(E__Enum_GoodSky_Effects__pf_StaticEnum, TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Effects"), TEXT("Enum_GoodSky_Effects"), true, TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Effects"), TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Effects.Enum_GoodSky_Effects"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__Enum_GoodSky_Effects__pf_Hash() { return 533024678U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__Enum_GoodSky_Effects__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Effects"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Enum_GoodSky_Effects"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__Enum_GoodSky_Effects__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Enum_GoodSky_Effects::NewEnumerator0", (int64)E__Enum_GoodSky_Effects__pf::NewEnumerator0 },
				{ "Enum_GoodSky_Effects::NewEnumerator3", (int64)E__Enum_GoodSky_Effects__pf::NewEnumerator3 },
				{ "Enum_GoodSky_Effects::NewEnumerator5", (int64)E__Enum_GoodSky_Effects__pf::NewEnumerator5 },
				{ "Enum_GoodSky_Effects::NewEnumerator1", (int64)E__Enum_GoodSky_Effects__pf::NewEnumerator1 },
				{ "Enum_GoodSky_Effects::NewEnumerator2", (int64)E__Enum_GoodSky_Effects__pf::NewEnumerator2 },
				{ "Enum_GoodSky_Effects::Enum_GoodSky_MAX", (int64)E__Enum_GoodSky_Effects__pf::E__Enum_GoodSky_Effects__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__Enum_GoodSky_Effects__pf_MAX.Name", "E__Enum_GoodSky_Effects__pf::E__Enum_GoodSky_Effects__pf_MAX" },
				{ "E__Enum_GoodSky_Effects__pf_MAX.OverrideName", "Enum_GoodSky_Effects::Enum_GoodSky_MAX" },
				{ "EnumDisplayNameFn", "E__Enum_GoodSky_Effects__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/Enum_GoodSky_Effects__pf194322682.h" },
				{ "NewEnumerator0.Name", "E__Enum_GoodSky_Effects__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "Enum_GoodSky_Effects::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__Enum_GoodSky_Effects__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "Enum_GoodSky_Effects::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__Enum_GoodSky_Effects__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "Enum_GoodSky_Effects::NewEnumerator2" },
				{ "NewEnumerator3.Name", "E__Enum_GoodSky_Effects__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "Enum_GoodSky_Effects::NewEnumerator3" },
				{ "NewEnumerator5.Name", "E__Enum_GoodSky_Effects__pf::NewEnumerator5" },
				{ "NewEnumerator5.OverrideName", "Enum_GoodSky_Effects::NewEnumerator5" },
				{ "OverrideNativeName", "Enum_GoodSky_Effects" },
				{ "ReplaceConverted", "/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Effects.Enum_GoodSky_Effects" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Effects")); },
				E__Enum_GoodSky_Effects__pf__GetUserFriendlyName,
				"Enum_GoodSky_Effects",
				"E__Enum_GoodSky_Effects__pf",
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
