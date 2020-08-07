#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Item__pf2130893442.h"
class URotatingMovementComponent;
#include "Item_Child__pf2130893442.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/SoftInventory/Items/Item_Child.Item_Child_C", OverrideNativeName="Item_Child_C"))
class AItem_Child_C__pf2130893442 : public AItem_C__pf2130893442
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="RotatingMovement"))
	URotatingMovementComponent* bpv__RotatingMovement__pf;
	AItem_Child_C__pf2130893442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
