// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/MotionControllerPawn__pf563933975.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionControllerPawn__pf563933975() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPlayerSaveGameInfo_C__pf205484891_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__TraceStop__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TraceStop__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__TraceStart__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__NewActor__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OldActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TraceStart__pf(Z_Param_bpp__NewActor__pf,Z_Param_bpp__OldActor__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__MoveGrappledPlayer__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__MoveGrappledPlayer__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__MoveRope__pf)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bpp__ReachedLocation__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__MoveRope__pf(Z_Param_Out_bpp__ReachedLocation__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__GetRotationFromInput__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__UpAxis__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__RightAxis__pf);
		P_GET_OBJECT(ABP_MotionController_C__pf563933975,Z_Param_bpp__Controller__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->bpf__GetRotationFromInput__pf(Z_Param_bpp__UpAxis__pf,Z_Param_bpp__RightAxis__pf,Z_Param_bpp__Controller__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__ExecuteTeleportation__pf)
	{
		P_GET_OBJECT(ABP_MotionController_C__pf563933975,Z_Param_bpp__MotionController__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteTeleportation__pf(Z_Param_bpp__MotionController__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__StopGrapple__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__StopGrapple__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__Firework__pf)
	{
		P_GET_STRUCT(FTransform,Z_Param_bpp__SpawnTransform__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Firework__pf_Implementation(Z_Param_bpp__SpawnTransform__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__DesertTP__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__DesertTP__pf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__LoungeTP__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__LoungeTP__pf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__SnowTP__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SnowTP__pf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__PavilionTP__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__PavilionTP__pf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__OrientTP__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OrientTP__pf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__SpringTP__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpringTP__pf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__TropicalTP__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TropicalTP__pf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__HomeTP__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__HomeTP__pf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__AddJump__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddJump__pf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__AddAmmo__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddAmmo__pf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__ExecuteUbergraph_MotionControllerPawn__pf_24)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_MotionControllerPawn__pf_24(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__AddAmmo__pf = FName(TEXT("AddAmmo"));
	void AMotionControllerPawn_C__pf563933975::bpf__AddAmmo__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__AddAmmo__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__AddJump__pf = FName(TEXT("AddJump"));
	void AMotionControllerPawn_C__pf563933975::bpf__AddJump__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__AddJump__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__DesertTP__pf = FName(TEXT("DesertTP"));
	void AMotionControllerPawn_C__pf563933975::bpf__DesertTP__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__DesertTP__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf = FName(TEXT("Firework"));
	void AMotionControllerPawn_C__pf563933975::bpf__Firework__pf(FTransform bpp__SpawnTransform__pf)
	{
		MotionControllerPawn_C__pf563933975_eventbpf__Firework__pf_Parms Parms;
		Parms.bpp__SpawnTransform__pf=bpp__SpawnTransform__pf;
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf),&Parms);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__HomeTP__pf = FName(TEXT("HomeTP"));
	void AMotionControllerPawn_C__pf563933975::bpf__HomeTP__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__HomeTP__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__LoungeTP__pf = FName(TEXT("LoungeTP"));
	void AMotionControllerPawn_C__pf563933975::bpf__LoungeTP__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__LoungeTP__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__OrientTP__pf = FName(TEXT("OrientTP"));
	void AMotionControllerPawn_C__pf563933975::bpf__OrientTP__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__OrientTP__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__PavilionTP__pf = FName(TEXT("PavilionTP"));
	void AMotionControllerPawn_C__pf563933975::bpf__PavilionTP__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__PavilionTP__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AMotionControllerPawn_C__pf563933975::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AMotionControllerPawn_C__pf563933975::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		MotionControllerPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__SnowTP__pf = FName(TEXT("SnowTP"));
	void AMotionControllerPawn_C__pf563933975::bpf__SnowTP__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__SnowTP__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__SpringTP__pf = FName(TEXT("SpringTP"));
	void AMotionControllerPawn_C__pf563933975::bpf__SpringTP__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__SpringTP__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__TropicalTP__pf = FName(TEXT("TropicalTP"));
	void AMotionControllerPawn_C__pf563933975::bpf__TropicalTP__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__TropicalTP__pf),NULL);
	}
	void AMotionControllerPawn_C__pf563933975::StaticRegisterNativesAMotionControllerPawn_C__pf563933975()
	{
		UClass* Class = AMotionControllerPawn_C__pf563933975::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAmmo", &AMotionControllerPawn_C__pf563933975::execbpf__AddAmmo__pf },
			{ "AddJump", &AMotionControllerPawn_C__pf563933975::execbpf__AddJump__pf },
			{ "DesertTP", &AMotionControllerPawn_C__pf563933975::execbpf__DesertTP__pf },
			{ "ExecuteTeleportation", &AMotionControllerPawn_C__pf563933975::execbpf__ExecuteTeleportation__pf },
			{ "ExecuteUbergraph_MotionControllerPawn_24", &AMotionControllerPawn_C__pf563933975::execbpf__ExecuteUbergraph_MotionControllerPawn__pf_24 },
			{ "Firework", &AMotionControllerPawn_C__pf563933975::execbpf__Firework__pf },
			{ "GetRotationFromInput", &AMotionControllerPawn_C__pf563933975::execbpf__GetRotationFromInput__pf },
			{ "HomeTP", &AMotionControllerPawn_C__pf563933975::execbpf__HomeTP__pf },
			{ "InpActEvt_E_K2Node_InputKeyEvent_1", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf },
			{ "InpActEvt_GrabLeft_K2Node_InputActionEvent_5", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf },
			{ "InpActEvt_GrabLeft_K2Node_InputActionEvent_6", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf },
			{ "InpActEvt_GrabRight_K2Node_InputActionEvent_3", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf },
			{ "InpActEvt_GrabRight_K2Node_InputActionEvent_4", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf },
			{ "InpActEvt_Jump_K2Node_InputActionEvent_1", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf },
			{ "InpActEvt_Jump_K2Node_InputActionEvent_2", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf },
			{ "InpActEvt_Menu_K2Node_InputActionEvent_0", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf },
			{ "InpActEvt_Z_K2Node_InputKeyEvent_0", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf },
			{ "InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2", &AMotionControllerPawn_C__pf563933975::execbpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf },
			{ "InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3", &AMotionControllerPawn_C__pf563933975::execbpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf },
			{ "InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1", &AMotionControllerPawn_C__pf563933975::execbpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf },
			{ "LoungeTP", &AMotionControllerPawn_C__pf563933975::execbpf__LoungeTP__pf },
			{ "MoveGrappledPlayer", &AMotionControllerPawn_C__pf563933975::execbpf__MoveGrappledPlayer__pf },
			{ "MoveRope", &AMotionControllerPawn_C__pf563933975::execbpf__MoveRope__pf },
			{ "OrientTP", &AMotionControllerPawn_C__pf563933975::execbpf__OrientTP__pf },
			{ "PavilionTP", &AMotionControllerPawn_C__pf563933975::execbpf__PavilionTP__pf },
			{ "ReceiveBeginPlay", &AMotionControllerPawn_C__pf563933975::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AMotionControllerPawn_C__pf563933975::execbpf__ReceiveTick__pf },
			{ "SnowTP", &AMotionControllerPawn_C__pf563933975::execbpf__SnowTP__pf },
			{ "SpringTP", &AMotionControllerPawn_C__pf563933975::execbpf__SpringTP__pf },
			{ "StopGrapple", &AMotionControllerPawn_C__pf563933975::execbpf__StopGrapple__pf },
			{ "TraceStart", &AMotionControllerPawn_C__pf563933975::execbpf__TraceStart__pf },
			{ "TraceStop", &AMotionControllerPawn_C__pf563933975::execbpf__TraceStop__pf },
			{ "TropicalTP", &AMotionControllerPawn_C__pf563933975::execbpf__TropicalTP__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddAmmo__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddAmmo__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "AddAmmo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddAmmo__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "AddAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddAmmo__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddAmmo__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddAmmo__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("AddAmmo") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddAmmo__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddJump__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddJump__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "AddJump" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddJump__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "AddJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddJump__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddJump__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddJump__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("AddJump") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddJump__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__DesertTP__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__DesertTP__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "DesertTP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__DesertTP__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "DesertTP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__DesertTP__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__DesertTP__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__DesertTP__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("DesertTP") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__DesertTP__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__ExecuteTeleportation__pf_Parms
		{
			ABP_MotionController_C__pf563933975* bpp__MotionController__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__MotionController__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::NewProp_bpp__MotionController__pf = { "bpp__MotionController__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__ExecuteTeleportation__pf_Parms, bpp__MotionController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::NewProp_bpp__MotionController__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ExecuteTeleportation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "ExecuteTeleportation", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__ExecuteTeleportation__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteTeleportation") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_MotionControllerPawn_24" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "ExecuteUbergraph_MotionControllerPawn_24", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_MotionControllerPawn_24") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__SpawnTransform__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf_Statics::NewProp_bpp__SpawnTransform__pf = { "bpp__SpawnTransform__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__Firework__pf_Parms, bpp__SpawnTransform__pf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf_Statics::NewProp_bpp__SpawnTransform__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Firework" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "Firework", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__Firework__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Firework") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms
		{
			float bpp__UpAxis__pf;
			float bpp__RightAxis__pf;
			ABP_MotionController_C__pf563933975* bpp__Controller__pf;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Controller__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__RightAxis__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__UpAxis__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__Controller__pf = { "bpp__Controller__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms, bpp__Controller__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__RightAxis__pf = { "bpp__RightAxis__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms, bpp__RightAxis__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__UpAxis__pf = { "bpp__UpAxis__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms, bpp__UpAxis__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__Controller__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__RightAxis__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__UpAxis__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "GetRotationFromInput" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "GetRotationFromInput", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("GetRotationFromInput") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__HomeTP__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__HomeTP__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "HomeTP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__HomeTP__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "HomeTP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__HomeTP__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__HomeTP__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__HomeTP__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("HomeTP") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__HomeTP__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_E_K2Node_InputKeyEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_E_K2Node_InputKeyEvent_1", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_E_K2Node_InputKeyEvent_1") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_GrabLeft_K2Node_InputActionEvent_5" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_GrabLeft_K2Node_InputActionEvent_5", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_5") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_GrabLeft_K2Node_InputActionEvent_6" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_GrabLeft_K2Node_InputActionEvent_6", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_6") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_GrabRight_K2Node_InputActionEvent_3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_GrabRight_K2Node_InputActionEvent_3", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_3") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_GrabRight_K2Node_InputActionEvent_4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_GrabRight_K2Node_InputActionEvent_4", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_4") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_Jump_K2Node_InputActionEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_Jump_K2Node_InputActionEvent_1", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Jump_K2Node_InputActionEvent_1") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_Jump_K2Node_InputActionEvent_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_Jump_K2Node_InputActionEvent_2", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Jump_K2Node_InputActionEvent_2") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_Menu_K2Node_InputActionEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_Menu_K2Node_InputActionEvent_0", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Menu_K2Node_InputActionEvent_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_Z_K2Node_InputKeyEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_Z_K2Node_InputKeyEvent_0", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Z_K2Node_InputKeyEvent_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LoungeTP__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LoungeTP__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "LoungeTP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LoungeTP__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "LoungeTP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LoungeTP__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LoungeTP__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LoungeTP__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("LoungeTP") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LoungeTP__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveGrappledPlayer__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveGrappledPlayer__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "MoveGrappledPlayer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveGrappledPlayer__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "MoveGrappledPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveGrappledPlayer__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveGrappledPlayer__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveGrappledPlayer__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("MoveGrappledPlayer") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveGrappledPlayer__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__MoveRope__pf_Parms
		{
			bool bpp__ReachedLocation__pf;
		};
		static void NewProp_bpp__ReachedLocation__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__ReachedLocation__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics::NewProp_bpp__ReachedLocation__pf_SetBit(void* Obj)
	{
		((MotionControllerPawn_C__pf563933975_eventbpf__MoveRope__pf_Parms*)Obj)->bpp__ReachedLocation__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics::NewProp_bpp__ReachedLocation__pf = { "bpp__ReachedLocation__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(MotionControllerPawn_C__pf563933975_eventbpf__MoveRope__pf_Parms), &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics::NewProp_bpp__ReachedLocation__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics::NewProp_bpp__ReachedLocation__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "MoveRope" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "MoveRope", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__MoveRope__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("MoveRope") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__OrientTP__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__OrientTP__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "OrientTP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__OrientTP__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "OrientTP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__OrientTP__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__OrientTP__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__OrientTP__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("OrientTP") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__OrientTP__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__PavilionTP__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__PavilionTP__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "PavilionTP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__PavilionTP__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "PavilionTP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__PavilionTP__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__PavilionTP__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__PavilionTP__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("PavilionTP") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__PavilionTP__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SnowTP__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SnowTP__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "SnowTP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SnowTP__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "SnowTP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SnowTP__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SnowTP__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SnowTP__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SnowTP") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SnowTP__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SpringTP__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SpringTP__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "SpringTP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SpringTP__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "SpringTP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SpringTP__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SpringTP__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SpringTP__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SpringTP") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SpringTP__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__StopGrapple__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__StopGrapple__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "StopGrapple" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__StopGrapple__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "StopGrapple", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__StopGrapple__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__StopGrapple__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__StopGrapple__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("StopGrapple") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__StopGrapple__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__TraceStart__pf_Parms
		{
			AActor* bpp__NewActor__pf;
			AActor* bpp__OldActor__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OldActor__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__NewActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics::NewProp_bpp__OldActor__pf = { "bpp__OldActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__TraceStart__pf_Parms, bpp__OldActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics::NewProp_bpp__NewActor__pf = { "bpp__NewActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__TraceStart__pf_Parms, bpp__NewActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics::NewProp_bpp__OldActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics::NewProp_bpp__NewActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "TraceStart" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "TraceStart", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__TraceStart__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("TraceStart") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStop__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStop__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "TraceStop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStop__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "TraceStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStop__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStop__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStop__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("TraceStop") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStop__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TropicalTP__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TropicalTP__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "TropicalTP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TropicalTP__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "TropicalTP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TropicalTP__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TropicalTP__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TropicalTP__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("TropicalTP") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TropicalTP__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister()
	{
		return AMotionControllerPawn_C__pf563933975::StaticClass();
	}
	struct Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceStart_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceStart_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitItem_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitItem_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitComponent_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitComponent_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitActor_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitActor_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_PhysMat_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_PhysMat_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Normal_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Normal_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Location_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Location_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Distance_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Distance_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Time_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Time_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceStart_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceStart_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitItem_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitItem_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitComponent_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitComponent_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitActor_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitActor_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_PhysMat_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_PhysMat_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Normal_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Normal_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Location_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Location_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Distance_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Distance_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Time_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Time_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__Temp_object_Variable_1__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_1__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__Temp_object_Variable__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_SpawnTransform__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_CustomEvent_SpawnTransform__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeArray_Array_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__K2Node_MakeArray_Array_1__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__K2Node_MakeArray_Array_1__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_MoveRope_ReachedLocation__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_MoveRope_ReachedLocation__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_MoveRope_ReachedLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Normal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Location__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Distance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Time__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__K2Node_MakeArray_Array__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__K2Node_MakeArray_Array__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_MotionController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_MotionController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_IsClosed_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Purchased__pf_MetaData[];
#endif
		static void NewProp_bpv__Purchased__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Purchased__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SaverSubClass__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SaverSubClass__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OutlineRange__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__OutlineRange__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WorldDynamic__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__WorldDynamic__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HookMoveFinished__pf_MetaData[];
#endif
		static void NewProp_bpv__HookMoveFinished__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__HookMoveFinished__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HookAttached__pf_MetaData[];
#endif
		static void NewProp_bpv__HookAttached__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__HookAttached__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HookLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__HookLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GameCurrency__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__GameCurrency__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Score__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Score__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Jumps__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Jumps__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AmmoCount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__AmmoCount__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__JumpCount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__JumpCount__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MovementSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__MovementSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RotationSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RotationSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UseControllerRollToRotate__pf_MetaData[];
#endif
		static void NewProp_bpv__UseControllerRollToRotate__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__UseControllerRollToRotate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultPlayerHeight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__DefaultPlayerHeight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftStickDown__pf_MetaData[];
#endif
		static void NewProp_bpv__LeftStickDown__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__LeftStickDown__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightStickDown__pf_MetaData[];
#endif
		static void NewProp_bpv__RightStickDown__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__RightStickDown__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ThumbDeadzone__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ThumbDeadzone__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TeleportFadeColor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__TeleportFadeColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsTeleporting__pf_MetaData[];
#endif
		static void NewProp_bpv__IsTeleporting__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsTeleporting__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FadeInDuration__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FadeInDuration__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FadeOutDuration__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FadeOutDuration__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RightController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LeftController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bShowChaperone__pf_MetaData[];
#endif
		static void NewProp_bpv__bShowChaperone__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bShowChaperone__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__VROrigin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__VROrigin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Camera__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Camera__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Grapple__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Grapple__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScoreHUD__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ScoreHUD__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TeleportMenu__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TeleportMenu__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddAmmo__pf, "AddAmmo" }, // 3635083557
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__AddJump__pf, "AddJump" }, // 2469699736
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__DesertTP__pf, "DesertTP" }, // 3692577497
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf, "ExecuteTeleportation" }, // 3571254310
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_24, "ExecuteUbergraph_MotionControllerPawn_24" }, // 3215043198
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__Firework__pf, "Firework" }, // 2941749857
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf, "GetRotationFromInput" }, // 3174774719
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__HomeTP__pf, "HomeTP" }, // 3124157263
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf, "InpActEvt_E_K2Node_InputKeyEvent_1" }, // 142536084
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf, "InpActEvt_GrabLeft_K2Node_InputActionEvent_5" }, // 295653803
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf, "InpActEvt_GrabLeft_K2Node_InputActionEvent_6" }, // 1898057929
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf, "InpActEvt_GrabRight_K2Node_InputActionEvent_3" }, // 1589035865
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf, "InpActEvt_GrabRight_K2Node_InputActionEvent_4" }, // 4188256646
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf, "InpActEvt_Jump_K2Node_InputActionEvent_1" }, // 3034850328
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf, "InpActEvt_Jump_K2Node_InputActionEvent_2" }, // 3757604464
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf, "InpActEvt_Menu_K2Node_InputActionEvent_0" }, // 2680974162
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf, "InpActEvt_Z_K2Node_InputKeyEvent_0" }, // 1239999343
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf, "InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2" }, // 2592049796
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf, "InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3" }, // 3985653537
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf, "InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1" }, // 1062043473
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LoungeTP__pf, "LoungeTP" }, // 3237174779
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveGrappledPlayer__pf, "MoveGrappledPlayer" }, // 286464904
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__MoveRope__pf, "MoveRope" }, // 3735005416
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__OrientTP__pf, "OrientTP" }, // 992893045
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__PavilionTP__pf, "PavilionTP" }, // 3213522705
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 1619016345
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf, "ReceiveTick" }, // 1594759766
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SnowTP__pf, "SnowTP" }, // 3725188193
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__SpringTP__pf, "SpringTP" }, // 3515660071
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__StopGrapple__pf, "StopGrapple" }, // 3344548636
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStart__pf, "TraceStart" }, // 3316465419
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TraceStop__pf, "TraceStop" }, // 1822362585
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__TropicalTP__pf, "TropicalTP" }, // 2431692933
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MotionControllerPawn__pf563933975.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "MotionControllerPawn_C" },
		{ "ReplaceConverted", "/Game/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf = { "CallFunc_BreakVector_Z", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf = { "CallFunc_BreakVector_Y", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf = { "CallFunc_BreakVector_X", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_6" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__K2Node_DynamicCast_bSuccess_6__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf = { "K2Node_DynamicCast_bSuccess_6", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_Save_Game_Info_5" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf = { "K2Node_DynamicCast_AsPlayer_Save_Game_Info_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf), Z_Construct_UClass_UPlayerSaveGameInfo_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_5" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__K2Node_DynamicCast_bSuccess_5__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf = { "K2Node_DynamicCast_bSuccess_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_Save_Game_Info_4" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf = { "K2Node_DynamicCast_AsPlayer_Save_Game_Info_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf), Z_Construct_UClass_UPlayerSaveGameInfo_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf = { "Temp_struct_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_struct_Variable_2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf = { "CallFunc_K2_SetActorLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_int_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable_1__pf = { "Temp_int_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_int_Variable_1__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceEnd_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_2__pf = { "CallFunc_BreakHitResult_TraceEnd_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_TraceEnd_2__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceStart_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart_2__pf = { "CallFunc_BreakHitResult_TraceStart_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_TraceStart_2__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_FaceIndex_2" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_2__pf = { "CallFunc_BreakHitResult_FaceIndex_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_FaceIndex_2__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitItem_2" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem_2__pf = { "CallFunc_BreakHitResult_HitItem_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_HitItem_2__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitBoneName_2" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_2__pf = { "CallFunc_BreakHitResult_HitBoneName_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_HitBoneName_2__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent_2__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitComponent_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent_2__pf = { "CallFunc_BreakHitResult_HitComponent_2", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_HitComponent_2__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitActor_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor_2__pf = { "CallFunc_BreakHitResult_HitActor_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_HitActor_2__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_PhysMat_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat_2__pf = { "CallFunc_BreakHitResult_PhysMat_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_PhysMat_2__pf), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactNormal_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_2__pf = { "CallFunc_BreakHitResult_ImpactNormal_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_ImpactNormal_2__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Normal_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal_2__pf = { "CallFunc_BreakHitResult_Normal_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_Normal_2__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactPoint_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_2__pf = { "CallFunc_BreakHitResult_ImpactPoint_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_ImpactPoint_2__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Location_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location_2__pf = { "CallFunc_BreakHitResult_Location_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_Location_2__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Distance_2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance_2__pf = { "CallFunc_BreakHitResult_Distance_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_Distance_2__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Time_2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time_2__pf = { "CallFunc_BreakHitResult_Time_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_Time_2__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bInitialOverlap_2" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf = { "CallFunc_BreakHitResult_bInitialOverlap_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bBlockingHit_2" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf = { "CallFunc_BreakHitResult_bBlockingHit_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceEnd_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_1__pf = { "CallFunc_BreakHitResult_TraceEnd_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_TraceEnd_1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceStart_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart_1__pf = { "CallFunc_BreakHitResult_TraceStart_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_TraceStart_1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_FaceIndex_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_1__pf = { "CallFunc_BreakHitResult_FaceIndex_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_FaceIndex_1__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitItem_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem_1__pf = { "CallFunc_BreakHitResult_HitItem_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_HitItem_1__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitBoneName_1" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_1__pf = { "CallFunc_BreakHitResult_HitBoneName_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_HitBoneName_1__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent_1__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitComponent_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent_1__pf = { "CallFunc_BreakHitResult_HitComponent_1", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_HitComponent_1__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitActor_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor_1__pf = { "CallFunc_BreakHitResult_HitActor_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_HitActor_1__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_PhysMat_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat_1__pf = { "CallFunc_BreakHitResult_PhysMat_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_PhysMat_1__pf), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactNormal_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf = { "CallFunc_BreakHitResult_ImpactNormal_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Normal_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal_1__pf = { "CallFunc_BreakHitResult_Normal_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_Normal_1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactPoint_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf = { "CallFunc_BreakHitResult_ImpactPoint_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Location_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location_1__pf = { "CallFunc_BreakHitResult_Location_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_Location_1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Distance_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance_1__pf = { "CallFunc_BreakHitResult_Distance_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_Distance_1__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Time_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time_1__pf = { "CallFunc_BreakHitResult_Time_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_Time_1__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bInitialOverlap_1" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf = { "CallFunc_BreakHitResult_bInitialOverlap_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bBlockingHit_1" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf = { "CallFunc_BreakHitResult_bBlockingHit_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_LineTraceSingleForObjects_OutHit_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf = { "CallFunc_LineTraceSingleForObjects_OutHit_1", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_LineTraceSingleForObjects_OutHit" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf = { "CallFunc_LineTraceSingleForObjects_OutHit", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_object_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable_1__pf = { "Temp_object_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_object_Variable_1__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable_1__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable_1__pf_Inner = { "b0l__Temp_object_Variable_1__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_object_Variable" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf = { "Temp_object_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_object_Variable__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf_Inner = { "b0l__Temp_object_Variable__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_6" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf = { "K2Node_InputActionEvent_Key_6", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_6__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_SpawnTransform__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_SpawnTransform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_SpawnTransform__pf = { "K2Node_CustomEvent_SpawnTransform", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_CustomEvent_SpawnTransform__pf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_SpawnTransform__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_SpawnTransform__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_4" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__K2Node_DynamicCast_bSuccess_4__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf = { "K2Node_DynamicCast_bSuccess_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_Save_Game_Info_3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf = { "K2Node_DynamicCast_AsPlayer_Save_Game_Info_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf), Z_Construct_UClass_UPlayerSaveGameInfo_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_3" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__K2Node_DynamicCast_bSuccess_3__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf = { "K2Node_DynamicCast_bSuccess_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMotion_Controller_Pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = { "K2Node_DynamicCast_AsMotion_Controller_Pawn", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf = { "K2Node_InputKeyEvent_Key_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputKeyEvent_Key_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_5" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf = { "K2Node_InputActionEvent_Key_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_5__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetWorldLocation_SweepHitResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf = { "CallFunc_K2_SetWorldLocation_SweepHitResult_1", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf = { "Temp_struct_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_struct_Variable_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_MakeArray_Array_1" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf = { "K2Node_MakeArray_Array_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_MakeArray_Array_1__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf_Inner = { "b0l__K2Node_MakeArray_Array_1__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetWorldLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf = { "CallFunc_K2_SetWorldLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_MoveRope_ReachedLocation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_MoveRope_ReachedLocation" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_MoveRope_ReachedLocation__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__CallFunc_MoveRope_ReachedLocation__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_MoveRope_ReachedLocation__pf = { "CallFunc_MoveRope_ReachedLocation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_MoveRope_ReachedLocation__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_MoveRope_ReachedLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_MoveRope_ReachedLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf = { "K2Node_InputActionEvent_Key_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_bool_Has_Been_Initd_Variable" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__Temp_bool_Has_Been_Initd_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf = { "Temp_bool_Has_Been_Initd_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf = { "K2Node_InputActionEvent_Key_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceEnd" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf = { "CallFunc_BreakHitResult_TraceEnd", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_TraceEnd__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceStart" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf = { "CallFunc_BreakHitResult_TraceStart", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_TraceStart__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_FaceIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf = { "CallFunc_BreakHitResult_FaceIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_FaceIndex__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitItem" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf = { "CallFunc_BreakHitResult_HitItem", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_HitItem__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitBoneName" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf = { "CallFunc_BreakHitResult_HitBoneName", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_HitBoneName__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf = { "CallFunc_BreakHitResult_HitComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_HitComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf = { "CallFunc_BreakHitResult_HitActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_HitActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_PhysMat" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf = { "CallFunc_BreakHitResult_PhysMat", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_PhysMat__pf), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactNormal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf = { "CallFunc_BreakHitResult_ImpactNormal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_ImpactNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Normal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf = { "CallFunc_BreakHitResult_Normal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_Normal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactPoint" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf = { "CallFunc_BreakHitResult_ImpactPoint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_ImpactPoint__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf = { "CallFunc_BreakHitResult_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf = { "CallFunc_BreakHitResult_Distance", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_Distance__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf = { "CallFunc_BreakHitResult_Time", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_BreakHitResult_Time__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bInitialOverlap" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = { "CallFunc_BreakHitResult_bInitialOverlap", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bBlockingHit" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__CallFunc_BreakHitResult_bBlockingHit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf = { "CallFunc_BreakHitResult_bBlockingHit", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddActorWorldOffset_SweepHitResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult_1__pf = { "CallFunc_K2_AddActorWorldOffset_SweepHitResult_1", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult_1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_MakeArray_Array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf = { "K2Node_MakeArray_Array", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_MakeArray_Array__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_Inner = { "b0l__K2Node_MakeArray_Array__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddActorWorldOffset_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf = { "CallFunc_K2_AddActorWorldOffset_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddActorWorldRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf = { "CallFunc_K2_AddActorWorldRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf = { "K2Node_InputAxisEvent_AxisValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputAxisEvent_AxisValue__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf = { "K2Node_InputAxisEvent_AxisValue_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputAxisEvent_AxisValue_1__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_SwitchName_CmpSuccess" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__K2Node_SwitchName_CmpSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf = { "K2Node_SwitchName_CmpSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue_2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf = { "K2Node_InputAxisEvent_AxisValue_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputAxisEvent_AxisValue_2__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddLocalOffset_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf = { "CallFunc_K2_AddLocalOffset_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_Save_Game_Info_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf = { "K2Node_DynamicCast_AsPlayer_Save_Game_Info_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf), Z_Construct_UClass_UPlayerSaveGameInfo_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_struct_Variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf = { "Temp_struct_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_struct_Variable__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_Save_Game_Info_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf = { "K2Node_DynamicCast_AsPlayer_Save_Game_Info_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf), Z_Construct_UClass_UPlayerSaveGameInfo_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorTransform_SweepHitResult_6" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_6__pf = { "CallFunc_K2_SetActorTransform_SweepHitResult_6", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_SetActorTransform_SweepHitResult_6__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorTransform_SweepHitResult_5" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_5__pf = { "CallFunc_K2_SetActorTransform_SweepHitResult_5", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_SetActorTransform_SweepHitResult_5__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorTransform_SweepHitResult_4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_4__pf = { "CallFunc_K2_SetActorTransform_SweepHitResult_4", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_SetActorTransform_SweepHitResult_4__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorTransform_SweepHitResult_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_3__pf = { "CallFunc_K2_SetActorTransform_SweepHitResult_3", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_SetActorTransform_SweepHitResult_3__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorTransform_SweepHitResult_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_2__pf = { "CallFunc_K2_SetActorTransform_SweepHitResult_2", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_SetActorTransform_SweepHitResult_2__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorTransform_SweepHitResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_1__pf = { "CallFunc_K2_SetActorTransform_SweepHitResult_1", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_SetActorTransform_SweepHitResult_1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_FinishSpawningActor_ReturnValue_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf = { "CallFunc_FinishSpawningActor_ReturnValue_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetTeleportDestination_Rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf = { "CallFunc_GetTeleportDestination_Rotation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_GetTeleportDestination_Rotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetTeleportDestination_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf = { "CallFunc_GetTeleportDestination_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_GetTeleportDestination_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_MotionController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf = { "K2Node_CustomEvent_MotionController", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_CustomEvent_MotionController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorTransform_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf = { "CallFunc_K2_SetActorTransform_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_bool_Variable" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__Temp_bool_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf = { "Temp_bool_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf = { "K2Node_InputActionEvent_Key_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_4__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_bool_IsClosed_Variable" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__Temp_bool_IsClosed_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf = { "Temp_bool_IsClosed_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf = { "K2Node_InputActionEvent_Key_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_3__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf = { "K2Node_InputKeyEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputKeyEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf = { "K2Node_InputActionEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_Save_Game_Info" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf = { "K2Node_DynamicCast_AsPlayer_Save_Game_Info", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf), Z_Construct_UClass_UPlayerSaveGameInfo_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Purchased__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Purchased" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Purchased" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Purchased__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__Purchased__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Purchased__pf = { "Purchased", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Purchased__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Purchased__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Purchased__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__SaverSubClass__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Saver Sub Class" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SaverSubClass" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__SaverSubClass__pf = { "SaverSubClass", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__SaverSubClass__pf), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__SaverSubClass__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__SaverSubClass__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__OutlineRange__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Outline Range" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "OutlineRange" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__OutlineRange__pf = { "OutlineRange", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__OutlineRange__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__OutlineRange__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__OutlineRange__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__WorldDynamic__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "World Dynamic" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "WorldDynamic" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__WorldDynamic__pf = { "WorldDynamic", nullptr, (EPropertyFlags)0x0010008000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__WorldDynamic__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__WorldDynamic__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__WorldDynamic__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookMoveFinished__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Hook Move Finished" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HookMoveFinished" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookMoveFinished__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__HookMoveFinished__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookMoveFinished__pf = { "HookMoveFinished", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookMoveFinished__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookMoveFinished__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookMoveFinished__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookAttached__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Hook Attached" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HookAttached" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookAttached__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__HookAttached__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookAttached__pf = { "HookAttached", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookAttached__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookAttached__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookAttached__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookLocation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Hook Location" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HookLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookLocation__pf = { "HookLocation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__HookLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__GameCurrency__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Game Currency" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "GameCurrency" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__GameCurrency__pf = { "GameCurrency", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__GameCurrency__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__GameCurrency__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__GameCurrency__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Score__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Score" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Score" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Score__pf = { "Score", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__Score__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Score__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Score__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Jumps__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Jumps" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Jumps" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Jumps__pf = { "Jumps", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__Jumps__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Jumps__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Jumps__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__AmmoCount__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Ammo Count" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "AmmoCount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__AmmoCount__pf = { "AmmoCount", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__AmmoCount__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__AmmoCount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__AmmoCount__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__JumpCount__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Jump Count" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "JumpCount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__JumpCount__pf = { "JumpCount", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__JumpCount__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__JumpCount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__JumpCount__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__MovementSpeed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Movement Speed" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MovementSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__MovementSpeed__pf = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__MovementSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__MovementSpeed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__MovementSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RotationSpeed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Rotation Speed" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RotationSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RotationSpeed__pf = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__RotationSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RotationSpeed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RotationSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Use Controller Roll to Rotate" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "UseControllerRollToRotate" },
		{ "tooltip", "Forced to True for PSVR Platform. PS Move controller has no thumbstick axis input so we must force enable this option." },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__UseControllerRollToRotate__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf = { "UseControllerRollToRotate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Default Player Height" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "DefaultPlayerHeight" },
		{ "tooltip", "Player height used on the PS4." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf = { "DefaultPlayerHeight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__DefaultPlayerHeight__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Stick Down" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "LeftStickDown" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__LeftStickDown__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf = { "LeftStickDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Stick Down" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "RightStickDown" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__RightStickDown__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf = { "RightStickDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Thumb Deadzone" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ThumbDeadzone" },
		{ "tooltip", "Deadzone for adjusting rotation using the thumbs during teleportation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf = { "ThumbDeadzone", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__ThumbDeadzone__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Teleport Fade Color" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "TeleportFadeColor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf = { "TeleportFadeColor", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__TeleportFadeColor__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Teleporting" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "IsTeleporting" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__IsTeleporting__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf = { "IsTeleporting", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fade in Duration" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "FadeInDuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__FadeInDuration__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fade Out Duration" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "FadeOutDuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__FadeOutDuration__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Controller" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "RightController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf = { "RightController", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__RightController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Controller" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "LeftController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf = { "LeftController", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__LeftController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_MetaData[] = {
		{ "Category", "Chaperone" },
		{ "DisplayName", "Show Chaperone" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "bShowChaperone" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__bShowChaperone__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf = { "bShowChaperone", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "VROrigin" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf = { "VROrigin", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__VROrigin__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf = { "Camera", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__Camera__pf), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Grapple__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Grapple" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Grapple__pf = { "Grapple", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__Grapple__pf), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Grapple__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Grapple__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ScoreHUD__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ScoreHUD" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ScoreHUD__pf = { "ScoreHUD", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__ScoreHUD__pf), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ScoreHUD__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ScoreHUD__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportMenu__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "TeleportMenu" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportMenu__pf = { "TeleportMenu", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__TeleportMenu__pf), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportMenu__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportMenu__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable_1__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_SpawnTransform__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_MoveRope_ReachedLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Purchased__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__SaverSubClass__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__OutlineRange__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__WorldDynamic__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookMoveFinished__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookAttached__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__HookLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__GameCurrency__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Score__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Jumps__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__AmmoCount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__JumpCount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__MovementSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RotationSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Grapple__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ScoreHUD__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportMenu__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotionControllerPawn_C__pf563933975>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::ClassParams = {
		&AMotionControllerPawn_C__pf563933975::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MotionControllerPawn_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AMotionControllerPawn_C__pf563933975, TEXT("MotionControllerPawn_C"), 818874171);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AMotionControllerPawn_C__pf563933975>()
	{
		return AMotionControllerPawn_C__pf563933975::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotionControllerPawn_C__pf563933975(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, &AMotionControllerPawn_C__pf563933975::StaticClass, TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"), TEXT("MotionControllerPawn_C"), true, TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"), TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotionControllerPawn_C__pf563933975);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
