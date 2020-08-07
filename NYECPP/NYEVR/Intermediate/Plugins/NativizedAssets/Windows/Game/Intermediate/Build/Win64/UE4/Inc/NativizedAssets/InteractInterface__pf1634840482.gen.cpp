// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/InteractInterface__pf1634840482.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractInterface__pf1634840482() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInteractInterface_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInteractInterface_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	void IInteractInterface_C::bpf__Interact__pf()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__Interact__pf instead.");
	}
	void UInteractInterface_C::StaticRegisterNativesUInteractInterface_C()
	{
	}
	struct Z_Construct_UFunction_UInteractInterface_C_bpf__Interact__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractInterface_C_bpf__Interact__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/InteractInterface__pf1634840482.h" },
		{ "OverrideNativeName", "Interact" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractInterface_C_bpf__Interact__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractInterface_C, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractInterface_C_bpf__Interact__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_C_bpf__Interact__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractInterface_C_bpf__Interact__pf()
	{
		UObject* Outer = Z_Construct_UClass_UInteractInterface_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Interact") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractInterface_C_bpf__Interact__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractInterface_C_NoRegister()
	{
		return UInteractInterface_C::StaticClass();
	}
	struct Z_Construct_UClass_UInteractInterface_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractInterface_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractInterface_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractInterface_C_bpf__Interact__pf, "Interact" }, // 663988927
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractInterface_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractInterface__pf1634840482.h" },
		{ "OverrideNativeName", "InteractInterface_C" },
		{ "ReplaceConverted", "/Game/SoftInventory/InteractInterface.InteractInterface_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractInterface_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractInterface_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractInterface_C_Statics::ClassParams = {
		&UInteractInterface_C::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractInterface_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractInterface_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/SoftInventory/InteractInterface"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("InteractInterface_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractInterface_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UInteractInterface_C, TEXT("InteractInterface_C"), 3269376524);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UInteractInterface_C>()
	{
		return UInteractInterface_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractInterface_C(Z_Construct_UClass_UInteractInterface_C, &UInteractInterface_C::StaticClass, TEXT("/Game/SoftInventory/InteractInterface"), TEXT("InteractInterface_C"), true, TEXT("/Game/SoftInventory/InteractInterface"), TEXT("/Game/SoftInventory/InteractInterface.InteractInterface_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractInterface_C);
	static FName NAME_UInteractInterface_C_bpf__Interact__pf = FName(TEXT("Interact"));
	void IInteractInterface_C::Execute_bpf__Interact__pf(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractInterface_C::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractInterface_C_bpf__Interact__pf);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
