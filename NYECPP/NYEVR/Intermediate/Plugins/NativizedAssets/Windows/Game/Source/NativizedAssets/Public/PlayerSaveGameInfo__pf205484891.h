#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "PlayerSaveGameInfo__pf205484891.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FirstPersonBP/Blueprints/PlayerSaveGameInfo.PlayerSaveGameInfo_C", OverrideNativeName="PlayerSaveGameInfo_C"))
class UPlayerSaveGameInfo_C__pf205484891 : public USaveGame
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Currency", Category="Default", MultiLine="true", OverrideNativeName="GameCurrency"))
	int32 bpv__GameCurrency__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Score", Category="Default", MultiLine="true", OverrideNativeName="Score"))
	int32 bpv__Score__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Jump Count", Category="Default", MultiLine="true", OverrideNativeName="JumpCount"))
	int32 bpv__JumpCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ammo Count", Category="Default", MultiLine="true", OverrideNativeName="AmmoCount"))
	int32 bpv__AmmoCount__pf;
	UPlayerSaveGameInfo_C__pf205484891(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
