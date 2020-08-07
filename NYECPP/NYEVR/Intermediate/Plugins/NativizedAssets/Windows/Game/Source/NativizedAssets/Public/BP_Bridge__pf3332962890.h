#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "S_MeshRScale__pf3332962890.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USplineComponent;
class USceneComponent;
#include "BP_Bridge__pf3332962890.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/SuspensionBridge/Blueprints/BP_Bridge.BP_Bridge_C", OverrideNativeName="BP_Bridge_C"))
class ABP_Bridge_C__pf3332962890 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Spline"))
	USplineComponent* bpv__Spline__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="End", Category="Default", MultiLine="true", MakeEditWidget="true", ExposeOnSpawn="true", tooltip="Other end of the bridge", OverrideNativeName="End"))
	FVector bpv__End__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Plank Dist", Category="Default", MultiLine="true", tooltip="Distance between planks", OverrideNativeName="PlankDist"))
	float bpv__PlankDist__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Segment Dist", Category="Default", MultiLine="true", tooltip="Distance between spline points", OverrideNativeName="SegmentDist"))
	float bpv__SegmentDist__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Gravity", Category="Default", MultiLine="true", tooltip="Simulated gravity", OverrideNativeName="Gravity"))
	float bpv__Gravity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Width", Category="Default", MultiLine="true", tooltip="Width of the bridge", OverrideNativeName="Width"))
	float bpv__Width__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Planks", Category="Default", MultiLine="true", tooltip="Plank models with custom scale", OverrideNativeName="Planks"))
	TArray<FS_MeshRScale__pf3332962890> bpv__Planks__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Planks Global Scale", Category="Default", MultiLine="true", tooltip="Scales all of the planks", OverrideNativeName="PlanksGlobalScale"))
	FVector bpv__PlanksGlobalScale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Planks Random Rotation", Category="Default", MultiLine="true", tooltip="Random rotation for planks (+/-)", OverrideNativeName="PlanksRandomRotation"))
	FRotator bpv__PlanksRandomRotation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Poles", Category="Default", MultiLine="true", tooltip="Pole models with scale", OverrideNativeName="Poles"))
	TArray<FS_MeshRScale__pf3332962890> bpv__Poles__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Poles Random Rotation", Category="Default", MultiLine="true", tooltip="Random rotation of poles (+/-)", OverrideNativeName="PolesRandomRotation"))
	FRotator bpv__PolesRandomRotation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Missing Plank Chance", Category="Default", MultiLine="true", tooltip="Chance for a certain plank to be missing", OverrideNativeName="MissingPlankChance"))
	float bpv__MissingPlankChance__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Padding Start", Category="Default", MultiLine="true", tooltip="How many planks should be left out from the start point", OverrideNativeName="PaddingStart"))
	int32 bpv__PaddingStart__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Padding End", Category="Default", MultiLine="true", tooltip="How many planks should be left out from the end point", OverrideNativeName="PaddingEnd"))
	int32 bpv__PaddingEnd__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Seed", Category="Default", MultiLine="true", tooltip="Seed for random", OverrideNativeName="Seed"))
	FRandomStream bpv__Seed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ropes Height", Category="Default", MultiLine="true", tooltip="Height of the upper ropes", OverrideNativeName="RopesHeight"))
	float bpv__RopesHeight__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rope Width", Category="Default", MultiLine="true", tooltip="Width of the ropes", OverrideNativeName="RopeWidth"))
	float bpv__RopeWidth__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ropes Collision", Category="Default", MultiLine="true", tooltip="Should the ropes collide", OverrideNativeName="RopesCollision"))
	TEnumAsByte<ECollisionEnabled::Type> bpv__RopesCollision__pf;
	ABP_Bridge_C__pf3332962890(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlaceRopeWithOffset"))
	virtual void bpf__PlaceRopeWithOffset__pf(FVector bpp__Offset__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlacePoleWithOffset"))
	virtual void bpf__PlacePoleWithOffset__pf(FVector bpp__Location__pf);
public:
};
