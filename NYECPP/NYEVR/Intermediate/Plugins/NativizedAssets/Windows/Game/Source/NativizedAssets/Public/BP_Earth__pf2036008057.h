#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "ENUM_EarthQuality__pf2036008057.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
#include "BP_Earth__pf2036008057.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Earth32/Blueprint/BP_Earth.BP_Earth_C", OverrideNativeName="BP_Earth_C"))
class ABP_Earth_C__pf2036008057 : public AStaticMeshActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Atmosphere"))
	UStaticMeshComponent* bpv__Atmosphere__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Refresh Materials", Category="Default", MultiLine="true", OverrideNativeName="Refresh Materials"))
	bool bpv__RefreshxMaterials__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Earth Material", Category="Default", MultiLine="true", OverrideNativeName="EarthMaterial"))
	UMaterialInstanceDynamic* bpv__EarthMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Atmosphere Material", Category="Default", MultiLine="true", OverrideNativeName="AtmosphereMaterial"))
	UMaterialInstanceDynamic* bpv__AtmosphereMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stars Material", Category="Default", MultiLine="true", OverrideNativeName="StarsMaterial"))
	UMaterialInstanceDynamic* bpv__StarsMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Moon Material", Category="Default", MultiLine="true", OverrideNativeName="MoonMaterial"))
	UMaterialInstanceDynamic* bpv__MoonMaterial__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Quality", Category="Default", MultiLine="true", OverrideNativeName="Quality"))
	E__ENUM_EarthQuality__pf bpv__Quality__pf;
	ABP_Earth_C__pf2036008057(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
