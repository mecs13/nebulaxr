#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UArrowComponent;
class UBillboardComponent;
class AWindDirectionalSource;
#include "BP_Paticle_wind_settings__pf321031355.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Particles_Wind_Control_System/Blueprints/BP_Paticle_wind_settings.BP_Paticle_wind_settings_C", OverrideNativeName="BP_Paticle_wind_settings_C"))
class ABP_Paticle_wind_settings_C__pf321031355 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow"))
	UArrowComponent* bpv__Arrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Billboard"))
	UBillboardComponent* bpv__Billboard__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Update", Category="Default", OverrideNativeName="Update"))
	bool bpv__Update__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Wind In Scene", Category="Default", OverrideNativeName="Wind in scene"))
	AWindDirectionalSource* bpv__Windxinxscene__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Intansity Wind Multiplay", Category="Default", OverrideNativeName="Intansity Wind Multiplay"))
	float bpv__IntansityxWindxMultiplay__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Speed Wind", Category="Default", UIMin="0.05", ClampMin="0.05", UIMax="2", ClampMax="2", OverrideNativeName="speed wind"))
	float bpv__speedxwind__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Wind Rotation Horizontal", Category="Default", UIMin="0", ClampMin="0", UIMax="360", ClampMax="360", OverrideNativeName="wind rotation Horizontal"))
	float bpv__windxrotationxHorizontal__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Gravity", Category="Default", OverrideNativeName="Gravity"))
	float bpv__Gravity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Acelerate Paticle", Category="Default", OverrideNativeName="Current Acelerate Paticle"))
	FVector bpv__CurrentxAceleratexPaticle__pfTT;
	ABP_Paticle_wind_settings_C__pf321031355(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
