// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Enum_GoodSky_Style_Clouds__pf194322682.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnum_GoodSky_Style_Clouds__pf194322682() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__Enum_GoodSky_Style_Clouds__pf();
// End Cross Module References
	static UEnum* E__Enum_GoodSky_Style_Clouds__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Style_Clouds"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("Enum_GoodSky_Style_Clouds")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__Enum_GoodSky_Style_Clouds__pf, EnumPackage, TEXT("Enum_GoodSky_Style_Clouds"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__Enum_GoodSky_Style_Clouds__pf>()
	{
		return E__Enum_GoodSky_Style_Clouds__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__Enum_GoodSky_Style_Clouds__pf(E__Enum_GoodSky_Style_Clouds__pf_StaticEnum, TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Style_Clouds"), TEXT("Enum_GoodSky_Style_Clouds"), true, TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Style_Clouds"), TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Style_Clouds.Enum_GoodSky_Style_Clouds"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__Enum_GoodSky_Style_Clouds__pf_Hash() { return 739078293U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__Enum_GoodSky_Style_Clouds__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Style_Clouds"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Enum_GoodSky_Style_Clouds"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__Enum_GoodSky_Style_Clouds__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Enum_GoodSky_Style_Clouds::NewEnumerator0", (int64)E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator0 },
				{ "Enum_GoodSky_Style_Clouds::NewEnumerator3", (int64)E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator3 },
				{ "Enum_GoodSky_Style_Clouds::NewEnumerator1", (int64)E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator1 },
				{ "Enum_GoodSky_Style_Clouds::NewEnumerator2", (int64)E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator2 },
				{ "Enum_GoodSky_Style_Clouds::Enum_GoodSky_Style_MAX", (int64)E__Enum_GoodSky_Style_Clouds__pf::E__Enum_GoodSky_Style_Clouds__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__Enum_GoodSky_Style_Clouds__pf_MAX.Name", "E__Enum_GoodSky_Style_Clouds__pf::E__Enum_GoodSky_Style_Clouds__pf_MAX" },
				{ "E__Enum_GoodSky_Style_Clouds__pf_MAX.OverrideName", "Enum_GoodSky_Style_Clouds::Enum_GoodSky_Style_MAX" },
				{ "EnumDisplayNameFn", "E__Enum_GoodSky_Style_Clouds__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/Enum_GoodSky_Style_Clouds__pf194322682.h" },
				{ "NewEnumerator0.Name", "E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "Enum_GoodSky_Style_Clouds::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "Enum_GoodSky_Style_Clouds::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "Enum_GoodSky_Style_Clouds::NewEnumerator2" },
				{ "NewEnumerator3.Name", "E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "Enum_GoodSky_Style_Clouds::NewEnumerator3" },
				{ "OverrideNativeName", "Enum_GoodSky_Style_Clouds" },
				{ "ReplaceConverted", "/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Style_Clouds.Enum_GoodSky_Style_Clouds" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Style_Clouds")); },
				E__Enum_GoodSky_Style_Clouds__pf__GetUserFriendlyName,
				"Enum_GoodSky_Style_Clouds",
				"E__Enum_GoodSky_Style_Clouds__pf",
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
