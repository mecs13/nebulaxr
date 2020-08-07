#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "EAirplaneType__pf3475422732.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USkeletalMeshComponent;
class UCommercialPlane_AnimBlueprint_C__pf1945484998;
#include "BP_CommercialPlane__pf3475422732.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/CommercialPlane/Blueprints/BP_CommercialPlane.BP_CommercialPlane_C", OverrideNativeName="BP_CommercialPlane_C"))
class ABP_CommercialPlane_C__pf3475422732 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Plane"))
	USkeletalMeshComponent* bpv__Plane__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Right Engine Spin", Category="Default", ExposeOnSpawn="true", UIMin="-2", ClampMin="-2", UIMax="2", ClampMax="2", OverrideNativeName="RightEngineSpin"))
	float bpv__RightEngineSpin__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Left Engine Spin", Category="Default", ExposeOnSpawn="true", UIMin="-2", ClampMin="-2", UIMax="2", ClampMax="2", OverrideNativeName="LeftEngineSpin"))
	float bpv__LeftEngineSpin__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Front Wheel Spin", Category="Default", ExposeOnSpawn="true", UIMin="-5", ClampMin="-5", UIMax="5", ClampMax="5", OverrideNativeName="FrontWheelSpin"))
	float bpv__FrontWheelSpin__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Left Wheel Spin", Category="Default", ExposeOnSpawn="true", UIMin="-5", ClampMin="-5", UIMax="5", ClampMax="5", OverrideNativeName="LeftWheelSpin"))
	float bpv__LeftWheelSpin__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Right Wheel Spin", Category="Default", ExposeOnSpawn="true", UIMin="-5", ClampMin="-5", UIMax="5", ClampMax="5", OverrideNativeName="RightWheelSpin"))
	float bpv__RightWheelSpin__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Front Wheel Turn", Category="Default", ExposeOnSpawn="true", UIMin="-45", ClampMin="-45", UIMax="45", ClampMax="45", OverrideNativeName="FrontWheelTurn"))
	float bpv__FrontWheelTurn__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Front Gear Doors", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="FrontGearDoors"))
	float bpv__FrontGearDoors__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Front Gear Retract", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="FrontGearRetract"))
	float bpv__FrontGearRetract__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Front Wheel Shocks", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="FrontWheelShocks"))
	float bpv__FrontWheelShocks__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Main Gear Retract", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="MainGearRetract"))
	float bpv__MainGearRetract__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Main Wheel Shocks", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="MainWheelShocks"))
	float bpv__MainWheelShocks__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Main Gear Door Bay", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="MainGearDoorBay"))
	float bpv__MainGearDoorBay__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Speedbrakes Inner 1", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="SpeedbrakesInner1"))
	float bpv__SpeedbrakesInner1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Speedbrakes Inner 2", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="SpeedbrakesInner2"))
	float bpv__SpeedbrakesInner2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Speedbrakes Outer 1", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="SpeedbrakesOuter1"))
	float bpv__SpeedbrakesOuter1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Speedbrakes Outer 3", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="SpeedbrakesOuter3"))
	float bpv__SpeedbrakesOuter3__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Speedbrakes Outer 4", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="SpeedbrakesOuter4"))
	float bpv__SpeedbrakesOuter4__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Speedbrakes Outer 5", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="SpeedbrakesOuter5"))
	float bpv__SpeedbrakesOuter5__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Speedbrakes Outer 6", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="SpeedbrakesOuter6"))
	float bpv__SpeedbrakesOuter6__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flaps Inner", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="FlapsInner"))
	float bpv__FlapsInner__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flaps Outer", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="FlapsOuter"))
	float bpv__FlapsOuter__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Aileron Left", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="AileronLeft"))
	float bpv__AileronLeft__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Aileron Right", Category="Default", ExposeOnSpawn="true", UIMin="0", ClampMin="0", UIMax="100", ClampMax="100", OverrideNativeName="AileronRight"))
	float bpv__AileronRight__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Elevator", Category="Default", ExposeOnSpawn="true", UIMin="-45", ClampMin="-45", UIMax="45", ClampMax="45", OverrideNativeName="Elevator"))
	float bpv__Elevator__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rudder", Category="Default", ExposeOnSpawn="true", UIMin="-45", ClampMin="-45", UIMax="45", ClampMax="45", OverrideNativeName="Rudder"))
	float bpv__Rudder__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Thrust Reverser Deploy", Category="Default", MultiLine="true", UIMin="0", UIMax="100", ClampMin="0", ClampMax="100", ExposeOnSpawn="true", OverrideNativeName="ThrustReverserDeploy"))
	float bpv__ThrustReverserDeploy__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Slats Deploy Inner", Category="Default", MultiLine="true", ExposeOnSpawn="true", UIMin="0", UIMax="100", ClampMax="100", ClampMin="0", OverrideNativeName="SlatsDeployInner"))
	float bpv__SlatsDeployInner__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Slats Deploy Outer", Category="Default", MultiLine="true", ExposeOnSpawn="true", UIMin="0", UIMax="100", ClampMax="100", ClampMin="0", OverrideNativeName="SlatsDeployOuter"))
	float bpv__SlatsDeployOuter__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Livery Color 1", Category="Default", MultiLine="true", OverrideNativeName="LiveryColor1"))
	FLinearColor bpv__LiveryColor1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Livery Color 2", Category="Default", MultiLine="true", OverrideNativeName="LiveryColor2"))
	FLinearColor bpv__LiveryColor2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Livery Color 3", Category="Default", MultiLine="true", OverrideNativeName="LiveryColor3"))
	FLinearColor bpv__LiveryColor3__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Livery Color 4", Category="Default", MultiLine="true", OverrideNativeName="LiveryColor4"))
	FLinearColor bpv__LiveryColor4__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Carrier Livery", Category="Default", MultiLine="true", OverrideNativeName="CarrierLivery"))
	E__EAirplaneType__pf bpv__CarrierLivery__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Custom Color", Category="Default", MultiLine="true", OverrideNativeName="CustomColor"))
	bool bpv__CustomColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCommercial_Plane_Anim_Blueprint"))
	UCommercialPlane_AnimBlueprint_C__pf1945484998* b0l__K2Node_DynamicCast_AsCommercial_Plane_Anim_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	ABP_CommercialPlane_C__pf3475422732(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_CommercialPlane__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CommercialPlane__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
