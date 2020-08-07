#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class UTexture;
class UMaterialInstanceDynamic;
#include "BP_Air_Balloon__pf3784893704.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Air_Balloons/Blueprints/BP_Air_Balloon.BP_Air_Balloon_C", OverrideNativeName="BP_Air_Balloon_C"))
class ABP_Air_Balloon_C__pf3784893704 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Flame"))
	UStaticMeshComponent* bpv__SM_Flame__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Envelope_Center"))
	USceneComponent* bpv__Envelope_Center__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Balloon"))
	UStaticMeshComponent* bpv__Balloon__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Height Min", Category="Air Balloon", ClampMin="0", ClampMax="2000", OverrideNativeName="Height Min"))
	float bpv__HeightxMin__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Height Max", Category="Air Balloon", ClampMin="0", ClampMax="2000", OverrideNativeName="Height Max"))
	float bpv__HeightxMax__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Air Temperature", Category="Default", ClampMin="0", ClampMax="100", OverrideNativeName="Air_Temperature"))
	float bpv__Air_Temperature__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Height Above Ground", Category="Default", OverrideNativeName="Height above ground"))
	float bpv__Heightxabovexground__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Wind Direction °", Category="Air Balloon", ClampMin="0", ClampMax="360", tooltip="Can be changed in runtime", OverrideNativeName="Wind Direction °"))
	float bpv__WindxDirectionxx__pfTTBx;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Wind Speed M/s", Category="Air Balloon", ClampMin="0", ClampMax="10", tooltip="Can be changed in runtime", OverrideNativeName="Wind Speed m/s"))
	float bpv__WindxSpeedxmxs__pfTTE;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Burner On", Category="Default", OverrideNativeName="Burner on"))
	bool bpv__Burnerxon__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Height", Category="Default", OverrideNativeName="Target Height"))
	float bpv__TargetxHeight__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Random Rotation", Category="Default", OverrideNativeName="Random Rotation"))
	float bpv__RandomxRotation__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Land", Category="Air Balloon", tooltip="Balloon will begin landing. Turn off for take off. Can be changed in runtime", OverrideNativeName="Land"))
	bool bpv__Land__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Drag Coefficient", Category="Default", OverrideNativeName="Drag coefficient"))
	float bpv__Dragxcoefficient__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotation", Category="Air Balloon", ClampMin="0", ClampMax="1", tooltip="Amount of random Z rotation speed", OverrideNativeName="Rotation"))
	float bpv__Rotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Envelope Texture", Category="Default", OverrideNativeName="Envelope Texture"))
	UTexture* bpv__EnvelopexTexture__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Envelope Material", Category="Default", OverrideNativeName="Envelope Material"))
	UMaterialInstanceDynamic* bpv__EnvelopexMaterial__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Random Movement Vector", Category="Default", OverrideNativeName="Random movement vector"))
	FVector bpv__Randomxmovementxvector__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Envelope Emissive", Category="Air Balloon", ClampMin="0", ClampMax="5", tooltip="Brightness of envelope light when burner is on", OverrideNativeName="Envelope Emissive"))
	float bpv__EnvelopexEmissive__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Envelope Pattern", Category="Air Balloon", ClampMin="1", ClampMax="13", OverrideNativeName="Envelope Pattern"))
	int32 bpv__EnvelopexPattern__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="People", Category="Air Balloon", ClampMin="0", ClampMax="4", OverrideNativeName="People"))
	int32 bpv__People__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sockets Occupied", Category="Default", OverrideNativeName="Sockets Occupied"))
	TArray<bool> bpv__SocketsxOccupied__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="People Meshes", Category="Default", OverrideNativeName="People meshes"))
	TArray<UStaticMeshComponent*> bpv__Peoplexmeshes__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="RND", Category="Default", OverrideNativeName="RND"))
	int32 bpv__RND__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Override Burner", Category="Default", tooltip="Allows Burner control from Drivable blueprint", OverrideNativeName="Override_Burner"))
	bool bpv__Override_Burner__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_1"))
	bool b0l__Temp_bool_IsClosed_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_2"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_2"))
	bool b0l__Temp_bool_IsClosed_Variable_2__pf;
	ABP_Air_Balloon_C__pf3784893704(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Air_Balloon_0"))
	void bpf__ExecuteUbergraph_BP_Air_Balloon__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Air_Balloon__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Get Height above ground"))
	virtual void bpf__GetxHeightxabovexground__pfTTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Burner"))
	virtual void bpf__Burner__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Pattern Change"))
	virtual void bpf__PatternxChange__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Construction"))
	virtual void bpf__Construction__pf();
public:
};
