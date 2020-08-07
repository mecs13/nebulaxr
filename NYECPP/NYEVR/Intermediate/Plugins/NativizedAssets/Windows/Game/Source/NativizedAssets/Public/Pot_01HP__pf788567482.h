#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
#include "Pot_01HP__pf788567482.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ModernKitchenClutterPack/MergedBlueprints/HighPoly/Pot_01HP.Pot_01HP_C", OverrideNativeName="Pot_01HP_C"))
class APot_01HP_C__pf788567482 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="KitchenClutter_Lid_02"))
	UStaticMeshComponent* bpv__KitchenClutter_Lid_02__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="KitchenClutter_Pot_01"))
	UStaticMeshComponent* bpv__KitchenClutter_Pot_01__pf;
	APot_01HP_C__pf788567482(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
