#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class ABP_Air_Balloon_C__pf3784893704;
#include "BP_Air_Balloon_Spawner__pf3784893704.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Air_Balloons/Blueprints/BP_Air_Balloon_Spawner.BP_Air_Balloon_Spawner_C", OverrideNativeName="BP_Air_Balloon_Spawner_C"))
class ABP_Air_Balloon_Spawner_C__pf3784893704 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="Weather_vane"))
	UStaticMeshComponent* bpv__Weather_vane__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="Torus max"))
	UStaticMeshComponent* bpv__Torusxmax__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="Torus min"))
	UStaticMeshComponent* bpv__Torusxmin__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Number Of Balloons", Category="Air Balloons Spawn", ClampMin="1", ClampMax="400", tooltip="Up to 400 Balloons, but this number depends on Spawn Radius", OverrideNativeName="Number of Balloons"))
	int32 bpv__NumberxofxBalloons__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Height Max", Category="Air Balloons", ClampMin="0", ClampMax="1000", OverrideNativeName="Height Max"))
	float bpv__HeightxMax__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Height Min", Category="Air Balloons", ClampMin="0", ClampMax="1000", OverrideNativeName="Height Min"))
	float bpv__HeightxMin__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spawn Locations", Category="Default", OverrideNativeName="Spawn Locations"))
	TArray<FVector> bpv__SpawnxLocations__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Spawn Radius", Category="Air Balloons Spawn", ClampMin="30", ClampMax="3000", tooltip="Balloons will spawn within circle with selected radius", OverrideNativeName="Spawn Radius"))
	float bpv__SpawnxRadius__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Loop", Category="Default", OverrideNativeName="Loop"))
	bool bpv__Loop__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Balloons Array", Category="Default", OverrideNativeName="Balloons Array"))
	TArray<ABP_Air_Balloon_C__pf3784893704*> bpv__BalloonsxArray__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Scale", Category="Air Balloons Spawn", ClampMin="0", ClampMax="1", OverrideNativeName="Random scale"))
	float bpv__Randomxscale__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Land", Category="Air Balloons", tooltip="All balloons will begin landing. Turn off for take off. Can be changed in runtime", OverrideNativeName="Land"))
	bool bpv__Land__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ground Height Below BP", Category="Default", OverrideNativeName="Ground height below BP"))
	float bpv__GroundxheightxbelowxBP__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Show Bounding Circles In Editor", Category="Air Balloons Spawn", OverrideNativeName="Show bounding circles in editor"))
	bool bpv__Showxboundingxcirclesxinxeditor__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Wind Speed M/s", Category="Air Balloons", ClampMin="0", ClampMax="10", tooltip="Can be changed in runtime", OverrideNativeName="Wind speed m/s"))
	float bpv__Windxspeedxmxs__pfTTE;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Wind Direction °", Category="Air Balloons", ClampMin="0", ClampMax="360", tooltip="Can be changed in runtime", OverrideNativeName="Wind direction °"))
	float bpv__Windxdirectionxx__pfTTBx;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Envelope Emissive", Category="Air Balloons Spawn", ClampMin="0", ClampMax="5", tooltip="Brightness of envelope light when burner is on", OverrideNativeName="Envelope Emissive"))
	float bpv__EnvelopexEmissive__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotation", Category="Air Balloons Spawn", ClampMin="0", ClampMax="1", tooltip="Amount of random Z rotation speed", OverrideNativeName="Rotation"))
	float bpv__Rotation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="People", Category="Air Balloons Spawn", tooltip="Will generate 1 to 4 people in each balloon. Turn this off if balloons are far away to save performance", OverrideNativeName="People"))
	bool bpv__People__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABP_Air_Balloon_C__pf3784893704* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	ABP_Air_Balloon_Spawner_C__pf3784893704(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Air_Balloon_Spawner_0"))
	void bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Air_Balloon_Spawner__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Get ground height below BP"))
	virtual void bpf__GetxgroundxheightxbelowxBP__pfTTTT();
public:
};
