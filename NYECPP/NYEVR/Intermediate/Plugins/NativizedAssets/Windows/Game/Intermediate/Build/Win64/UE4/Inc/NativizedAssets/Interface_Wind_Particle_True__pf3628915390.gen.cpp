// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Interface_Wind_Particle_True__pf3628915390.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_Wind_Particle_True__pf3628915390() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInterface_Wind_Particle_True_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInterface_Wind_Particle_True_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	void UInterface_Wind_Particle_True_C::StaticRegisterNativesUInterface_Wind_Particle_True_C()
	{
	}
	UClass* Z_Construct_UClass_UInterface_Wind_Particle_True_C_NoRegister()
	{
		return UInterface_Wind_Particle_True_C::StaticClass();
	}
	struct Z_Construct_UClass_UInterface_Wind_Particle_True_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterface_Wind_Particle_True_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterface_Wind_Particle_True_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interface_Wind_Particle_True__pf3628915390.h" },
		{ "OverrideNativeName", "Interface_Wind_Particle_True_C" },
		{ "ReplaceConverted", "/Game/Particles_Wind_Control_System/Blueprints/Components/Interface_Wind_Particle_True.Interface_Wind_Particle_True_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterface_Wind_Particle_True_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_Wind_Particle_True_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterface_Wind_Particle_True_C_Statics::ClassParams = {
		&UInterface_Wind_Particle_True_C::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterface_Wind_Particle_True_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_Wind_Particle_True_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterface_Wind_Particle_True_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Particles_Wind_Control_System/Blueprints/Components/Interface_Wind_Particle_True"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Interface_Wind_Particle_True_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterface_Wind_Particle_True_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UInterface_Wind_Particle_True_C, TEXT("Interface_Wind_Particle_True_C"), 1329996351);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UInterface_Wind_Particle_True_C>()
	{
		return UInterface_Wind_Particle_True_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterface_Wind_Particle_True_C(Z_Construct_UClass_UInterface_Wind_Particle_True_C, &UInterface_Wind_Particle_True_C::StaticClass, TEXT("/Game/Particles_Wind_Control_System/Blueprints/Components/Interface_Wind_Particle_True"), TEXT("Interface_Wind_Particle_True_C"), true, TEXT("/Game/Particles_Wind_Control_System/Blueprints/Components/Interface_Wind_Particle_True"), TEXT("/Game/Particles_Wind_Control_System/Blueprints/Components/Interface_Wind_Particle_True.Interface_Wind_Particle_True_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_Wind_Particle_True_C);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
