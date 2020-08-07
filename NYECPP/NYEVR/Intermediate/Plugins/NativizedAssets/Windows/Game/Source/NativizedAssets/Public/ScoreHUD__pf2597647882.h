#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UTextBlock;
#include "ScoreHUD__pf2597647882.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Score/ScoreHUD.ScoreHUD_C", OverrideNativeName="ScoreHUD_C"))
class UScoreHUD_C__pf2597647882 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ArrowICO", Category="ScoreHUD", OverrideNativeName="ArrowICO"))
	UImage* bpv__ArrowICO__pf;
	UPROPERTY(Export, meta=(DisplayName="ArrowNUM", OverrideNativeName="ArrowNUM"))
	UTextBlock* bpv__ArrowNUM__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="JumpICO", Category="ScoreHUD", OverrideNativeName="JumpICO"))
	UImage* bpv__JumpICO__pf;
	UPROPERTY(Export, meta=(DisplayName="JumpNUM", OverrideNativeName="JumpNUM"))
	UTextBlock* bpv__JumpNUM__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MoneyICO", Category="ScoreHUD", OverrideNativeName="MoneyICO"))
	UImage* bpv__MoneyICO__pf;
	UPROPERTY(Export, meta=(DisplayName="MoneyNUM", OverrideNativeName="MoneyNUM"))
	UTextBlock* bpv__MoneyNUM__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_135", OverrideNativeName="TextBlock_135"))
	UTextBlock* bpv__TextBlock_135__pf;
	UScoreHUD_C__pf2597647882(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Score"))
	virtual FText  bpf__Score__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual FText  bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Jumps_Text_0"))
	virtual FText  bpf__Get_Jumps_Text_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Shots_Text_0"))
	virtual FText  bpf__Get_Shots_Text_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_JumpNUM_Text_0"))
	virtual FText  bpf__Get_JumpNUM_Text_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_MoneyNUM_Text_0"))
	virtual FText  bpf__Get_MoneyNUM_Text_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_ArrowNUM_Text_0"))
	virtual FText  bpf__Get_ArrowNUM_Text_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
