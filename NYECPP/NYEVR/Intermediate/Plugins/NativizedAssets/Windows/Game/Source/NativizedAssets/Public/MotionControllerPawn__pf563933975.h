#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class UChildActorComponent;
class UWidgetComponent;
class UCableComponent;
class UCameraComponent;
class USceneComponent;
class ABP_MotionController_C__pf563933975;
class USaveGame;
class UPlayerSaveGameInfo_C__pf205484891;
class UPhysicalMaterial;
class AActor;
class UPrimitiveComponent;
class AMotionControllerPawn_C__pf563933975;
#include "MotionControllerPawn__pf563933975.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C", OverrideNativeName="MotionControllerPawn_C"))
class AMotionControllerPawn_C__pf563933975 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TeleportMenu"))
	UChildActorComponent* bpv__TeleportMenu__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ScoreHUD"))
	UWidgetComponent* bpv__ScoreHUD__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Grapple"))
	UCableComponent* bpv__Grapple__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="VROrigin"))
	USceneComponent* bpv__VROrigin__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Show Chaperone", Category="Chaperone", OverrideNativeName="bShowChaperone"))
	bool bpv__bShowChaperone__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left Controller", Category="Default", OverrideNativeName="LeftController"))
	ABP_MotionController_C__pf563933975* bpv__LeftController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Controller", Category="Default", OverrideNativeName="RightController"))
	ABP_MotionController_C__pf563933975* bpv__RightController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fade Out Duration", Category="Default", OverrideNativeName="FadeOutDuration"))
	float bpv__FadeOutDuration__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fade in Duration", Category="Default", OverrideNativeName="FadeInDuration"))
	float bpv__FadeInDuration__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Teleporting", Category="Default", OverrideNativeName="IsTeleporting"))
	bool bpv__IsTeleporting__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Teleport Fade Color", Category="Default", OverrideNativeName="TeleportFadeColor"))
	FLinearColor bpv__TeleportFadeColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Thumb Deadzone", Category="Default", tooltip="Deadzone for adjusting rotation using the thumbs during teleportation", OverrideNativeName="ThumbDeadzone"))
	float bpv__ThumbDeadzone__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Stick Down", Category="Default", OverrideNativeName="RightStickDown"))
	bool bpv__RightStickDown__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left Stick Down", Category="Default", OverrideNativeName="LeftStickDown"))
	bool bpv__LeftStickDown__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Player Height", Category="Default", tooltip="Player height used on the PS4.", OverrideNativeName="DefaultPlayerHeight"))
	float bpv__DefaultPlayerHeight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Use Controller Roll to Rotate", Category="Default", tooltip="Forced to True for PSVR Platform. PS Move controller has no thumbstick axis input so we must force enable this option.", OverrideNativeName="UseControllerRollToRotate"))
	bool bpv__UseControllerRollToRotate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation Speed", Category="Default", MultiLine="true", OverrideNativeName="RotationSpeed"))
	float bpv__RotationSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Movement Speed", Category="Default", MultiLine="true", OverrideNativeName="MovementSpeed"))
	float bpv__MovementSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Jump Count", Category="Default", MultiLine="true", OverrideNativeName="JumpCount"))
	int32 bpv__JumpCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ammo Count", Category="Default", MultiLine="true", OverrideNativeName="AmmoCount"))
	int32 bpv__AmmoCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Jumps", Category="Default", MultiLine="true", OverrideNativeName="Jumps"))
	int32 bpv__Jumps__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Score", Category="Default", MultiLine="true", OverrideNativeName="Score"))
	int32 bpv__Score__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Currency", Category="Default", MultiLine="true", OverrideNativeName="GameCurrency"))
	int32 bpv__GameCurrency__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hook Location", Category="Default", MultiLine="true", OverrideNativeName="HookLocation"))
	FVector bpv__HookLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hook Attached", Category="Default", MultiLine="true", OverrideNativeName="HookAttached"))
	bool bpv__HookAttached__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hook Move Finished", Category="Default", MultiLine="true", OverrideNativeName="HookMoveFinished"))
	bool bpv__HookMoveFinished__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="World Dynamic", Category="Default", MultiLine="true", OverrideNativeName="WorldDynamic"))
	FHitResult bpv__WorldDynamic__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Outline Range", Category="Default", MultiLine="true", OverrideNativeName="OutlineRange"))
	float bpv__OutlineRange__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Saver Sub Class", Category="Default", MultiLine="true", OverrideNativeName="SaverSubClass"))
	USaveGame* bpv__SaverSubClass__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Purchased", Category="Default", MultiLine="true", OverrideNativeName="Purchased"))
	bool bpv__Purchased__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Save_Game_Info"))
	UPlayerSaveGameInfo_C__pf205484891* b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b0l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_4"))
	FKey b0l__K2Node_InputActionEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorTransform_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MotionController"))
	ABP_MotionController_C__pf563933975* b0l__K2Node_CustomEvent_MotionController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTeleportDestination_Location"))
	FVector b0l__CallFunc_GetTeleportDestination_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTeleportDestination_Rotation"))
	FRotator b0l__CallFunc_GetTeleportDestination_Rotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FinishSpawningActor_ReturnValue_1"))
	ABP_MotionController_C__pf563933975* b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorTransform_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetActorTransform_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorTransform_SweepHitResult_2"))
	FHitResult b0l__CallFunc_K2_SetActorTransform_SweepHitResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorTransform_SweepHitResult_3"))
	FHitResult b0l__CallFunc_K2_SetActorTransform_SweepHitResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorTransform_SweepHitResult_4"))
	FHitResult b0l__CallFunc_K2_SetActorTransform_SweepHitResult_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorTransform_SweepHitResult_5"))
	FHitResult b0l__CallFunc_K2_SetActorTransform_SweepHitResult_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorTransform_SweepHitResult_6"))
	FHitResult b0l__CallFunc_K2_SetActorTransform_SweepHitResult_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Save_Game_Info_1"))
	UPlayerSaveGameInfo_C__pf205484891* b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Save_Game_Info_2"))
	UPlayerSaveGameInfo_C__pf205484891* b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddLocalOffset_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_2"))
	float b0l__K2Node_InputAxisEvent_AxisValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchName_CmpSuccess"))
	bool b0l__K2Node_SwitchName_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_1"))
	float b0l__K2Node_InputAxisEvent_AxisValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddActorWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddActorWorldOffset_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddActorWorldOffset_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance"))
	float b0l__CallFunc_BreakHitResult_Distance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b0l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b0l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_MoveRope_ReachedLocation"))
	bool b0l__CallFunc_MoveRope_ReachedLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_1"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b0l__K2Node_MakeArray_Array_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_1"))
	FKey b0l__Temp_struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_5"))
	FKey b0l__K2Node_InputActionEvent_Key_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_1"))
	FKey b0l__K2Node_InputKeyEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMotion_Controller_Pawn"))
	AMotionControllerPawn_C__pf563933975* b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Save_Game_Info_3"))
	UPlayerSaveGameInfo_C__pf205484891* b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SpawnTransform"))
	FTransform b0l__K2Node_CustomEvent_SpawnTransform__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_6"))
	FKey b0l__K2Node_InputActionEvent_Key_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	TArray<AActor*> b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_1"))
	TArray<AActor*> b0l__Temp_object_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingleForObjects_OutHit"))
	FHitResult b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingleForObjects_OutHit_1"))
	FHitResult b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_1"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_1"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_1"))
	float b0l__CallFunc_BreakHitResult_Time_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_1"))
	float b0l__CallFunc_BreakHitResult_Distance_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_1"))
	FVector b0l__CallFunc_BreakHitResult_Location_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_1"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_1"))
	FVector b0l__CallFunc_BreakHitResult_Normal_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_1"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_1"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_1"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_1"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_1"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_1"))
	int32 b0l__CallFunc_BreakHitResult_HitItem_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_1"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_1"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_1"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_2"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_2"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_2"))
	float b0l__CallFunc_BreakHitResult_Time_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_2"))
	float b0l__CallFunc_BreakHitResult_Distance_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_2"))
	FVector b0l__CallFunc_BreakHitResult_Location_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_2"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_2"))
	FVector b0l__CallFunc_BreakHitResult_Normal_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_2"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_2"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_2"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_2"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_2"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_2"))
	int32 b0l__CallFunc_BreakHitResult_HitItem_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_2"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_2"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_2"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_2"))
	FKey b0l__Temp_struct_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Save_Game_Info_4"))
	UPlayerSaveGameInfo_C__pf205484891* b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Save_Game_Info_5"))
	UPlayerSaveGameInfo_C__pf205484891* b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	AMotionControllerPawn_C__pf563933975(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_21(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_22(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_23(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MotionControllerPawn_24"))
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_24(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_25(int32 bpp__EntryPoint__pf);
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="AddAmmo"))
	virtual void bpf__AddAmmo__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="AddJump"))
	virtual void bpf__AddJump__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="HomeTP"))
	virtual void bpf__HomeTP__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="TropicalTP"))
	virtual void bpf__TropicalTP__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="SpringTP"))
	virtual void bpf__SpringTP__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="OrientTP"))
	virtual void bpf__OrientTP__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="PavilionTP"))
	virtual void bpf__PavilionTP__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="SnowTP"))
	virtual void bpf__SnowTP__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="LoungeTP"))
	virtual void bpf__LoungeTP__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="DesertTP"))
	virtual void bpf__DesertTP__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="Firework"))
	virtual void bpf__Firework__pf(FTransform bpp__SpawnTransform__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StopGrapple"))
	virtual void bpf__StopGrapple__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3"))
	virtual void bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2"))
	virtual void bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1"))
	virtual void bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ExecuteTeleportation"))
	virtual void bpf__ExecuteTeleportation__pf(ABP_MotionController_C__pf563933975* bpp__MotionController__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Z_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Menu_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_E_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabRight_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabRight_K2Node_InputActionEvent_4"))
	virtual void bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabLeft_K2Node_InputActionEvent_5"))
	virtual void bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabLeft_K2Node_InputActionEvent_6"))
	virtual void bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetRotationFromInput"))
	virtual FRotator  bpf__GetRotationFromInput__pf(float bpp__UpAxis__pf, float bpp__RightAxis__pf, ABP_MotionController_C__pf563933975* bpp__Controller__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveRope"))
	virtual void bpf__MoveRope__pf(/*out*/ bool& bpp__ReachedLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveGrappledPlayer"))
	virtual void bpf__MoveGrappledPlayer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TraceStart"))
	virtual void bpf__TraceStart__pf(AActor* bpp__NewActor__pf, AActor* bpp__OldActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TraceStop"))
	virtual void bpf__TraceStop__pf();
public:
};
