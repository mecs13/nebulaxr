#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
class UObject;
#include "BP_FuncLib__pf3332962890.generated.h"
UCLASS(config=Engine, meta=(ReplaceConverted="/Game/SuspensionBridge/Blueprints/BP_FuncLib.BP_FuncLib_C", OverrideNativeName="BP_FuncLib_C"))
class UBP_FuncLib_C__pf3332962890 : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
	UBP_FuncLib_C__pf3332962890(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="RandomVectorSeeded"))
	static void bpf__RandomVectorSeeded__pf(FVector bpp__Min__pf, FVector bpp__Max__pf, FRandomStream bpp__Seed__pf, UObject* bpp____WorldContext__pf, /*out*/ FVector& bpp__Out__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="RandomRotSeeded"))
	static void bpf__RandomRotSeeded__pf(FRotator bpp__Min__pf, FRotator bpp__Max__pf, /*out*/ FRandomStream& bpp__Seed__pf, UObject* bpp____WorldContext__pf, /*out*/ FRotator& bpp__Out__pf);
public:
};
