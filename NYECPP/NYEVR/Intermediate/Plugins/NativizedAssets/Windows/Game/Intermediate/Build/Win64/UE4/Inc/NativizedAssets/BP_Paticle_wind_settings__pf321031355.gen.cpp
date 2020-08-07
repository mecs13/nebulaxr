// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_Paticle_wind_settings__pf321031355.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Paticle_wind_settings__pf321031355() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AWindDirectionalSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_Paticle_wind_settings_C__pf321031355::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_Paticle_wind_settings_C__pf321031355_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Paticle_wind_settings_C__pf321031355::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Paticle_wind_settings_C__pf321031355_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Paticle_wind_settings_C__pf321031355::StaticRegisterNativesABP_Paticle_wind_settings_C__pf321031355()
	{
		UClass* Class = ABP_Paticle_wind_settings_C__pf321031355::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", &ABP_Paticle_wind_settings_C__pf321031355::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_Paticle_wind_settings_C__pf321031355_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Paticle_wind_settings_C__pf321031355_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_Paticle_wind_settings__pf321031355.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Paticle_wind_settings_C__pf321031355_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Paticle_wind_settings_C__pf321031355_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Paticle_wind_settings_C__pf321031355_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Paticle_wind_settings_C__pf321031355_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Paticle_wind_settings_C__pf321031355_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_NoRegister()
	{
		return ABP_Paticle_wind_settings_C__pf321031355::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentxAceleratexPaticle__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__CurrentxAceleratexPaticle__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Gravity__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Gravity__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__windxrotationxHorizontal__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__windxrotationxHorizontal__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__speedxwind__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__speedxwind__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IntansityxWindxMultiplay__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__IntansityxWindxMultiplay__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Windxinxscene__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Windxinxscene__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Update__pf_MetaData[];
#endif
		static void NewProp_bpv__Update__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Update__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Billboard__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Billboard__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arrow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arrow__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_Paticle_wind_settings_C__pf321031355_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 2599057830
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_Paticle_wind_settings__pf321031355.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_Paticle_wind_settings__pf321031355.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_Paticle_wind_settings_C" },
		{ "ReplaceConverted", "/Game/Particles_Wind_Control_System/Blueprints/BP_Paticle_wind_settings.BP_Paticle_wind_settings_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__CurrentxAceleratexPaticle__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Current Acelerate Paticle" },
		{ "ModuleRelativePath", "Public/BP_Paticle_wind_settings__pf321031355.h" },
		{ "OverrideNativeName", "Current Acelerate Paticle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__CurrentxAceleratexPaticle__pfTT = { "Current Acelerate Paticle", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Paticle_wind_settings_C__pf321031355, bpv__CurrentxAceleratexPaticle__pfTT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__CurrentxAceleratexPaticle__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__CurrentxAceleratexPaticle__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Gravity__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Gravity" },
		{ "ModuleRelativePath", "Public/BP_Paticle_wind_settings__pf321031355.h" },
		{ "OverrideNativeName", "Gravity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Gravity__pf = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Paticle_wind_settings_C__pf321031355, bpv__Gravity__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Gravity__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Gravity__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__windxrotationxHorizontal__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Wind Rotation Horizontal" },
		{ "ModuleRelativePath", "Public/BP_Paticle_wind_settings__pf321031355.h" },
		{ "OverrideNativeName", "wind rotation Horizontal" },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__windxrotationxHorizontal__pfTT = { "wind rotation Horizontal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Paticle_wind_settings_C__pf321031355, bpv__windxrotationxHorizontal__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__windxrotationxHorizontal__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__windxrotationxHorizontal__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__speedxwind__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0.05" },
		{ "DisplayName", "Speed Wind" },
		{ "ModuleRelativePath", "Public/BP_Paticle_wind_settings__pf321031355.h" },
		{ "OverrideNativeName", "speed wind" },
		{ "UIMax", "2" },
		{ "UIMin", "0.05" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__speedxwind__pfT = { "speed wind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Paticle_wind_settings_C__pf321031355, bpv__speedxwind__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__speedxwind__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__speedxwind__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__IntansityxWindxMultiplay__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Intansity Wind Multiplay" },
		{ "ModuleRelativePath", "Public/BP_Paticle_wind_settings__pf321031355.h" },
		{ "OverrideNativeName", "Intansity Wind Multiplay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__IntansityxWindxMultiplay__pfTT = { "Intansity Wind Multiplay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Paticle_wind_settings_C__pf321031355, bpv__IntansityxWindxMultiplay__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__IntansityxWindxMultiplay__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__IntansityxWindxMultiplay__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Windxinxscene__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Wind In Scene" },
		{ "ModuleRelativePath", "Public/BP_Paticle_wind_settings__pf321031355.h" },
		{ "OverrideNativeName", "Wind in scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Windxinxscene__pfTT = { "Wind in scene", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Paticle_wind_settings_C__pf321031355, bpv__Windxinxscene__pfTT), Z_Construct_UClass_AWindDirectionalSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Windxinxscene__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Windxinxscene__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Update__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/BP_Paticle_wind_settings__pf321031355.h" },
		{ "OverrideNativeName", "Update" },
	};
#endif
	void Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Update__pf_SetBit(void* Obj)
	{
		((ABP_Paticle_wind_settings_C__pf321031355*)Obj)->bpv__Update__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Update__pf = { "Update", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Paticle_wind_settings_C__pf321031355), &Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Update__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Update__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Update__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Billboard__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Paticle_wind_settings__pf321031355.h" },
		{ "OverrideNativeName", "Billboard" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Billboard__pf = { "Billboard", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Paticle_wind_settings_C__pf321031355, bpv__Billboard__pf), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Billboard__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Billboard__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Arrow__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Paticle_wind_settings__pf321031355.h" },
		{ "OverrideNativeName", "Arrow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Arrow__pf = { "Arrow", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Paticle_wind_settings_C__pf321031355, bpv__Arrow__pf), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Arrow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Arrow__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__CurrentxAceleratexPaticle__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Gravity__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__windxrotationxHorizontal__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__speedxwind__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__IntansityxWindxMultiplay__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Windxinxscene__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Update__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Billboard__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::NewProp_bpv__Arrow__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Paticle_wind_settings_C__pf321031355>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::ClassParams = {
		&ABP_Paticle_wind_settings_C__pf321031355::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Particles_Wind_Control_System/Blueprints/BP_Paticle_wind_settings"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Paticle_wind_settings_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Paticle_wind_settings_C__pf321031355, TEXT("BP_Paticle_wind_settings_C"), 2522028885);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_Paticle_wind_settings_C__pf321031355>()
	{
		return ABP_Paticle_wind_settings_C__pf321031355::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Paticle_wind_settings_C__pf321031355(Z_Construct_UClass_ABP_Paticle_wind_settings_C__pf321031355, &ABP_Paticle_wind_settings_C__pf321031355::StaticClass, TEXT("/Game/Particles_Wind_Control_System/Blueprints/BP_Paticle_wind_settings"), TEXT("BP_Paticle_wind_settings_C"), true, TEXT("/Game/Particles_Wind_Control_System/Blueprints/BP_Paticle_wind_settings"), TEXT("/Game/Particles_Wind_Control_System/Blueprints/BP_Paticle_wind_settings.BP_Paticle_wind_settings_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Paticle_wind_settings_C__pf321031355);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
