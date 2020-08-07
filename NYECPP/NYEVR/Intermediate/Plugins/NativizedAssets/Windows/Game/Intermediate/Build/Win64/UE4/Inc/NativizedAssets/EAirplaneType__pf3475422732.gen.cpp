// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/EAirplaneType__pf3475422732.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAirplaneType__pf3475422732() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__EAirplaneType__pf();
// End Cross Module References
	static UEnum* E__EAirplaneType__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/CommercialPlane/Blueprints/EAirplaneType"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("EAirplaneType")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__EAirplaneType__pf, EnumPackage, TEXT("EAirplaneType"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__EAirplaneType__pf>()
	{
		return E__EAirplaneType__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__EAirplaneType__pf(E__EAirplaneType__pf_StaticEnum, TEXT("/Game/CommercialPlane/Blueprints/EAirplaneType"), TEXT("EAirplaneType"), true, TEXT("/Game/CommercialPlane/Blueprints/EAirplaneType"), TEXT("/Game/CommercialPlane/Blueprints/EAirplaneType.EAirplaneType"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__EAirplaneType__pf_Hash() { return 3905894692U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__EAirplaneType__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/CommercialPlane/Blueprints/EAirplaneType"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAirplaneType"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__EAirplaneType__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAirplaneType::NewEnumerator4", (int64)E__EAirplaneType__pf::NewEnumerator4 },
				{ "EAirplaneType::NewEnumerator0", (int64)E__EAirplaneType__pf::NewEnumerator0 },
				{ "EAirplaneType::NewEnumerator3", (int64)E__EAirplaneType__pf::NewEnumerator3 },
				{ "EAirplaneType::NewEnumerator2", (int64)E__EAirplaneType__pf::NewEnumerator2 },
				{ "EAirplaneType::EAirplaneType_MAX", (int64)E__EAirplaneType__pf::E__EAirplaneType__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__EAirplaneType__pf_MAX.Name", "E__EAirplaneType__pf::E__EAirplaneType__pf_MAX" },
				{ "E__EAirplaneType__pf_MAX.OverrideName", "EAirplaneType::EAirplaneType_MAX" },
				{ "EnumDisplayNameFn", "E__EAirplaneType__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/EAirplaneType__pf3475422732.h" },
				{ "NewEnumerator0.Name", "E__EAirplaneType__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "EAirplaneType::NewEnumerator0" },
				{ "NewEnumerator2.Name", "E__EAirplaneType__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "EAirplaneType::NewEnumerator2" },
				{ "NewEnumerator3.Name", "E__EAirplaneType__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "EAirplaneType::NewEnumerator3" },
				{ "NewEnumerator4.Name", "E__EAirplaneType__pf::NewEnumerator4" },
				{ "NewEnumerator4.OverrideName", "EAirplaneType::NewEnumerator4" },
				{ "OverrideNativeName", "EAirplaneType" },
				{ "ReplaceConverted", "/Game/CommercialPlane/Blueprints/EAirplaneType.EAirplaneType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/CommercialPlane/Blueprints/EAirplaneType")); },
				E__EAirplaneType__pf__GetUserFriendlyName,
				"EAirplaneType",
				"E__EAirplaneType__pf",
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
