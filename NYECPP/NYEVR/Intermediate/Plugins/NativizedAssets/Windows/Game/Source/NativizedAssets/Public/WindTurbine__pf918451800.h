#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UAudioComponent;
class UStaticMeshComponent;
class USceneComponent;
class UTexture2D;
#include "WindTurbine__pf918451800.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Wind_Turbine/WindTurbine.WindTurbine_C", OverrideNativeName="WindTurbine_C"))
class AWindTurbine_C__pf918451800 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Audio"))
	UAudioComponent* bpv__Audio__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Offshore_base"))
	UStaticMeshComponent* bpv__Offshore_base__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Nacelle"))
	UStaticMeshComponent* bpv__Nacelle__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="logo"))
	UStaticMeshComponent* bpv__logo__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Anemometer"))
	UStaticMeshComponent* bpv__Anemometer__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Rotor"))
	UStaticMeshComponent* bpv__Rotor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pillar"))
	UStaticMeshComponent* bpv__Pillar__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Base"))
	UStaticMeshComponent* bpv__Base__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="RPM", Category="Parameters", ClampMin="-200", ClampMax="200", UIMin="0", UIMax="180", tooltip="Rotor (and anemometer x5) rotation speed", OverrideNativeName="RPM"))
	float bpv__RPM__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="RPM Variation", Category="Parameters", tooltip="Add ±30% random variation to rotation speed", OverrideNativeName="RPM Variation"))
	bool bpv__RPMxVariation__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Dirtiness", Category="Parameters", ClampMin="0", ClampMax="1", tooltip="Make Turbine old", OverrideNativeName="Dirtiness"))
	float bpv__Dirtiness__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Height", Category="Parameters", ClampMin="50", ClampMax="150", tooltip="Rotor center height from ground (meters)", OverrideNativeName="Height"))
	int32 bpv__Height__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Logo Texture", Category="Parameters", tooltip="Change logo with your texture", OverrideNativeName="Logo_texture"))
	UTexture2D* bpv__Logo_texture__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Random Speed Change", Category="Default", OverrideNativeName="random_speed_change"))
	float bpv__random_speed_change__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotor Diameter", Category="Parameters", ClampMin="60", ClampMax="130", tooltip="Rotor (and anemometer x5) rotation speed", OverrideNativeName="Rotor diameter"))
	float bpv__Rotorxdiameter__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Offshore Wind Turbine", Category="Parameters", OverrideNativeName="Offshore Wind Turbine"))
	bool bpv__OffshorexWindxTurbine__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sound", Category="Parameters", OverrideNativeName="Sound"))
	bool bpv__Sound__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddLocalRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddLocalRotation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_1__pf;
	AWindTurbine_C__pf918451800(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_WindTurbine__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
