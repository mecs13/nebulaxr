// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/P_Leaves_Enum__pf897159640.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_Leaves_Enum__pf897159640() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__P_Leaves_Enum__pf();
// End Cross Module References
	static UEnum* E__P_Leaves_Enum__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Particles_Wind_Control_System/Blueprints/Enumerations/P_Leaves_Enum"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("P_Leaves_Enum")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__P_Leaves_Enum__pf, EnumPackage, TEXT("P_Leaves_Enum"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__P_Leaves_Enum__pf>()
	{
		return E__P_Leaves_Enum__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__P_Leaves_Enum__pf(E__P_Leaves_Enum__pf_StaticEnum, TEXT("/Game/Particles_Wind_Control_System/Blueprints/Enumerations/P_Leaves_Enum"), TEXT("P_Leaves_Enum"), true, TEXT("/Game/Particles_Wind_Control_System/Blueprints/Enumerations/P_Leaves_Enum"), TEXT("/Game/Particles_Wind_Control_System/Blueprints/Enumerations/P_Leaves_Enum.P_Leaves_Enum"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__P_Leaves_Enum__pf_Hash() { return 1655185927U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__P_Leaves_Enum__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Particles_Wind_Control_System/Blueprints/Enumerations/P_Leaves_Enum"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("P_Leaves_Enum"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__P_Leaves_Enum__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "P_Leaves_Enum::NewEnumerator0", (int64)E__P_Leaves_Enum__pf::NewEnumerator0 },
				{ "P_Leaves_Enum::NewEnumerator1", (int64)E__P_Leaves_Enum__pf::NewEnumerator1 },
				{ "P_Leaves_Enum::NewEnumerator3", (int64)E__P_Leaves_Enum__pf::NewEnumerator3 },
				{ "P_Leaves_Enum::NewEnumerator4", (int64)E__P_Leaves_Enum__pf::NewEnumerator4 },
				{ "P_Leaves_Enum::NewEnumerator5", (int64)E__P_Leaves_Enum__pf::NewEnumerator5 },
				{ "P_Leaves_Enum::NewEnumerator6", (int64)E__P_Leaves_Enum__pf::NewEnumerator6 },
				{ "P_Leaves_Enum::NewEnumerator7", (int64)E__P_Leaves_Enum__pf::NewEnumerator7 },
				{ "P_Leaves_Enum::NewEnumerator8", (int64)E__P_Leaves_Enum__pf::NewEnumerator8 },
				{ "P_Leaves_Enum::NewEnumerator9", (int64)E__P_Leaves_Enum__pf::NewEnumerator9 },
				{ "P_Leaves_Enum::NewEnumerator10", (int64)E__P_Leaves_Enum__pf::NewEnumerator10 },
				{ "P_Leaves_Enum::NewEnumerator11", (int64)E__P_Leaves_Enum__pf::NewEnumerator11 },
				{ "P_Leaves_Enum::NewEnumerator12", (int64)E__P_Leaves_Enum__pf::NewEnumerator12 },
				{ "P_Leaves_Enum::NewEnumerator13", (int64)E__P_Leaves_Enum__pf::NewEnumerator13 },
				{ "P_Leaves_Enum::NewEnumerator14", (int64)E__P_Leaves_Enum__pf::NewEnumerator14 },
				{ "P_Leaves_Enum::NewEnumerator20", (int64)E__P_Leaves_Enum__pf::NewEnumerator20 },
				{ "P_Leaves_Enum::P_Leaves_MAX", (int64)E__P_Leaves_Enum__pf::E__P_Leaves_Enum__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__P_Leaves_Enum__pf_MAX.Name", "E__P_Leaves_Enum__pf::E__P_Leaves_Enum__pf_MAX" },
				{ "E__P_Leaves_Enum__pf_MAX.OverrideName", "P_Leaves_Enum::P_Leaves_MAX" },
				{ "EnumDisplayNameFn", "E__P_Leaves_Enum__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/P_Leaves_Enum__pf897159640.h" },
				{ "NewEnumerator0.DisplayName", "Acer" },
				{ "NewEnumerator0.Name", "E__P_Leaves_Enum__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "P_Leaves_Enum::NewEnumerator0" },
				{ "NewEnumerator1.DisplayName", "Apple" },
				{ "NewEnumerator1.Name", "E__P_Leaves_Enum__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "P_Leaves_Enum::NewEnumerator1" },
				{ "NewEnumerator10.DisplayName", "Plum" },
				{ "NewEnumerator10.Name", "E__P_Leaves_Enum__pf::NewEnumerator10" },
				{ "NewEnumerator10.OverrideName", "P_Leaves_Enum::NewEnumerator10" },
				{ "NewEnumerator11.DisplayName", "Pussy Willow" },
				{ "NewEnumerator11.Name", "E__P_Leaves_Enum__pf::NewEnumerator11" },
				{ "NewEnumerator11.OverrideName", "P_Leaves_Enum::NewEnumerator11" },
				{ "NewEnumerator12.DisplayName", "Rowan" },
				{ "NewEnumerator12.Name", "E__P_Leaves_Enum__pf::NewEnumerator12" },
				{ "NewEnumerator12.OverrideName", "P_Leaves_Enum::NewEnumerator12" },
				{ "NewEnumerator13.DisplayName", "Sea buckthorn" },
				{ "NewEnumerator13.Name", "E__P_Leaves_Enum__pf::NewEnumerator13" },
				{ "NewEnumerator13.OverrideName", "P_Leaves_Enum::NewEnumerator13" },
				{ "NewEnumerator14.DisplayName", "Willow" },
				{ "NewEnumerator14.Name", "E__P_Leaves_Enum__pf::NewEnumerator14" },
				{ "NewEnumerator14.OverrideName", "P_Leaves_Enum::NewEnumerator14" },
				{ "NewEnumerator20.DisplayName", "Custom Material" },
				{ "NewEnumerator20.Name", "E__P_Leaves_Enum__pf::NewEnumerator20" },
				{ "NewEnumerator20.OverrideName", "P_Leaves_Enum::NewEnumerator20" },
				{ "NewEnumerator3.DisplayName", "Aspen" },
				{ "NewEnumerator3.Name", "E__P_Leaves_Enum__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "P_Leaves_Enum::NewEnumerator3" },
				{ "NewEnumerator4.DisplayName", "Birch" },
				{ "NewEnumerator4.Name", "E__P_Leaves_Enum__pf::NewEnumerator4" },
				{ "NewEnumerator4.OverrideName", "P_Leaves_Enum::NewEnumerator4" },
				{ "NewEnumerator5.DisplayName", "Bird Cherry" },
				{ "NewEnumerator5.Name", "E__P_Leaves_Enum__pf::NewEnumerator5" },
				{ "NewEnumerator5.OverrideName", "P_Leaves_Enum::NewEnumerator5" },
				{ "NewEnumerator6.DisplayName", "Cherry" },
				{ "NewEnumerator6.Name", "E__P_Leaves_Enum__pf::NewEnumerator6" },
				{ "NewEnumerator6.OverrideName", "P_Leaves_Enum::NewEnumerator6" },
				{ "NewEnumerator7.DisplayName", "Elm" },
				{ "NewEnumerator7.Name", "E__P_Leaves_Enum__pf::NewEnumerator7" },
				{ "NewEnumerator7.OverrideName", "P_Leaves_Enum::NewEnumerator7" },
				{ "NewEnumerator8.DisplayName", "Maple" },
				{ "NewEnumerator8.Name", "E__P_Leaves_Enum__pf::NewEnumerator8" },
				{ "NewEnumerator8.OverrideName", "P_Leaves_Enum::NewEnumerator8" },
				{ "NewEnumerator9.DisplayName", "Oak" },
				{ "NewEnumerator9.Name", "E__P_Leaves_Enum__pf::NewEnumerator9" },
				{ "NewEnumerator9.OverrideName", "P_Leaves_Enum::NewEnumerator9" },
				{ "OverrideNativeName", "P_Leaves_Enum" },
				{ "ReplaceConverted", "/Game/Particles_Wind_Control_System/Blueprints/Enumerations/P_Leaves_Enum.P_Leaves_Enum" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Particles_Wind_Control_System/Blueprints/Enumerations/P_Leaves_Enum")); },
				E__P_Leaves_Enum__pf__GetUserFriendlyName,
				"P_Leaves_Enum",
				"E__P_Leaves_Enum__pf",
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
