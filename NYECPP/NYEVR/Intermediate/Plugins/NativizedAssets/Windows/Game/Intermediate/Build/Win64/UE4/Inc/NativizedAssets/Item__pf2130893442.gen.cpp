// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Item__pf2130893442.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem__pf2130893442() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AItem_C__pf2130893442_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AItem_C__pf2130893442();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPlayerSaveGameInfo_C__pf205484891_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FItemStructure__pf1634840482();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInteractInterface_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AItem_C__pf2130893442::execbpf__Interact__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Interact__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem_C__pf2130893442::execbpf__ReceiveActorBeginOverlap__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveActorBeginOverlap__pf(Z_Param_bpp__OtherActor__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem_C__pf2130893442::execbpf__OverlapItem__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OverlapItem__pf_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AItem_C__pf2130893442_bpf__Interact__pf = FName(TEXT("Interact"));
	void AItem_C__pf2130893442::eventbpf__Interact__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AItem_C__pf2130893442_bpf__Interact__pf),NULL);
	}
	static FName NAME_AItem_C__pf2130893442_bpf__OverlapItem__pf = FName(TEXT("OverlapItem"));
	void AItem_C__pf2130893442::bpf__OverlapItem__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AItem_C__pf2130893442_bpf__OverlapItem__pf),NULL);
	}
	static FName NAME_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf = FName(TEXT("ReceiveActorBeginOverlap"));
	void AItem_C__pf2130893442::eventbpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
	{
		Item_C__pf2130893442_eventbpf__ReceiveActorBeginOverlap__pf_Parms Parms;
		Parms.bpp__OtherActor__pf=bpp__OtherActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf),&Parms);
	}
	void AItem_C__pf2130893442::StaticRegisterNativesAItem_C__pf2130893442()
	{
		UClass* Class = AItem_C__pf2130893442::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &AItem_C__pf2130893442::execbpf__Interact__pf },
			{ "OverlapItem", &AItem_C__pf2130893442::execbpf__OverlapItem__pf },
			{ "ReceiveActorBeginOverlap", &AItem_C__pf2130893442::execbpf__ReceiveActorBeginOverlap__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItem_C__pf2130893442_bpf__Interact__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_C__pf2130893442_bpf__Interact__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "Interact" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_C__pf2130893442_bpf__Interact__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem_C__pf2130893442, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_C__pf2130893442_bpf__Interact__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_C__pf2130893442_bpf__Interact__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_C__pf2130893442_bpf__Interact__pf()
	{
		UObject* Outer = Z_Construct_UClass_AItem_C__pf2130893442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Interact") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_C__pf2130893442_bpf__Interact__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_C__pf2130893442_bpf__OverlapItem__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_C__pf2130893442_bpf__OverlapItem__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "OverlapItem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_C__pf2130893442_bpf__OverlapItem__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem_C__pf2130893442, nullptr, "OverlapItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_C__pf2130893442_bpf__OverlapItem__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_C__pf2130893442_bpf__OverlapItem__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_C__pf2130893442_bpf__OverlapItem__pf()
	{
		UObject* Outer = Z_Construct_UClass_AItem_C__pf2130893442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("OverlapItem") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_C__pf2130893442_bpf__OverlapItem__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Item_C__pf2130893442_eventbpf__ReceiveActorBeginOverlap__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf_Statics::NewProp_bpp__OtherActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** t *tEvent when this actor overlaps another actor, for example a player walking into a trigger.t *tFor events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.t *t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "ActorBeginOverlap" },
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "ReceiveActorBeginOverlap" },
		{ "ToolTip", "Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem_C__pf2130893442, nullptr, "ReceiveActorBeginOverlap", nullptr, nullptr, sizeof(Item_C__pf2130893442_eventbpf__ReceiveActorBeginOverlap__pf_Parms), Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf()
	{
		UObject* Outer = Z_Construct_UClass_AItem_C__pf2130893442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveActorBeginOverlap") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItem_C__pf2130893442_NoRegister()
	{
		return AItem_C__pf2130893442::StaticClass();
	}
	struct Z_Construct_UClass_AItem_C__pf2130893442_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Points__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Points__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ItemStructure__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__ItemStructure__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Sphere__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Sphere__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PointLight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PointLight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_C__pf2130893442_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItem_C__pf2130893442_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_C__pf2130893442_bpf__Interact__pf, "Interact" }, // 1673194877
		{ &Z_Construct_UFunction_AItem_C__pf2130893442_bpf__OverlapItem__pf, "OverlapItem" }, // 300899315
		{ &Z_Construct_UFunction_AItem_C__pf2130893442_bpf__ReceiveActorBeginOverlap__pf, "ReceiveActorBeginOverlap" }, // 2142151905
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Item__pf2130893442.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Item_C" },
		{ "ReplaceConverted", "/Game/SoftInventory/Items/Item.Item_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AItem_C__pf2130893442*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItem_C__pf2130893442), &Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_Save_Game_Info" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf = { "K2Node_DynamicCast_AsPlayer_Save_Game_Info", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_C__pf2130893442, b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf), Z_Construct_UClass_UPlayerSaveGameInfo_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AItem_C__pf2130893442*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItem_C__pf2130893442), &Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMotion_Controller_Pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = { "K2Node_DynamicCast_AsMotion_Controller_Pawn", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_C__pf2130893442, b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf = { "K2Node_Event_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_C__pf2130893442, b0l__K2Node_Event_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "Temp_int_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__Temp_int_Variable_1__pf = { "Temp_int_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_C__pf2130893442, b0l__Temp_int_Variable_1__pf), METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_C__pf2130893442, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__Points__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Points" },
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Points" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__Points__pf = { "Points", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_C__pf2130893442, bpv__Points__pf), METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__Points__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__Points__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__ItemStructure__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Item Structure" },
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ItemStructure" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__ItemStructure__pf = { "ItemStructure", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_C__pf2130893442, bpv__ItemStructure__pf), Z_Construct_UScriptStruct_FItemStructure__pf1634840482, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__ItemStructure__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__ItemStructure__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__Sphere__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "Sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__Sphere__pf = { "Sphere", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_C__pf2130893442, bpv__Sphere__pf), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__Sphere__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__Sphere__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__PointLight__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "PointLight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__PointLight__pf = { "PointLight", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_C__pf2130893442, bpv__PointLight__pf), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__PointLight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__PointLight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__StaticMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item__pf2130893442.h" },
		{ "OverrideNativeName", "StaticMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__StaticMesh__pf = { "StaticMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_C__pf2130893442, bpv__StaticMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__StaticMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__StaticMesh__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_C__pf2130893442_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__Temp_int_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_b0l__Temp_int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__Points__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__ItemStructure__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__Sphere__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__PointLight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf2130893442_Statics::NewProp_bpv__StaticMesh__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_C_NoRegister, (int32)VTABLE_OFFSET(AItem_C__pf2130893442, IInteractInterface_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_C__pf2130893442_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem_C__pf2130893442>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItem_C__pf2130893442_Statics::ClassParams = {
		&AItem_C__pf2130893442::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItem_C__pf2130893442_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf2130893442_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf2130893442_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem_C__pf2130893442()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/SoftInventory/Items/Item"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Item_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItem_C__pf2130893442_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AItem_C__pf2130893442, TEXT("Item_C"), 3099815491);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AItem_C__pf2130893442>()
	{
		return AItem_C__pf2130893442::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItem_C__pf2130893442(Z_Construct_UClass_AItem_C__pf2130893442, &AItem_C__pf2130893442::StaticClass, TEXT("/Game/SoftInventory/Items/Item"), TEXT("Item_C"), true, TEXT("/Game/SoftInventory/Items/Item"), TEXT("/Game/SoftInventory/Items/Item.Item_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem_C__pf2130893442);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
