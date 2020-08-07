#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class UTextBlock;
class AMotionControllerPawn_C__pf563933975;
class UPlayerSaveGameInfo_C__pf205484891;
#include "ShopMenu__pf3279071941.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Score/Shop/ShopMenu.ShopMenu_C", OverrideNativeName="ShopMenu_C"))
class UShopMenu_C__pf3279071941 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ArrowPurchase", Category="ShopMenu", OverrideNativeName="ArrowPurchase"))
	UButton* bpv__ArrowPurchase__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HookPurchase", Category="ShopMenu", OverrideNativeName="HookPurchase"))
	UButton* bpv__HookPurchase__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_136", Category="ShopMenu", OverrideNativeName="Image_136"))
	UImage* bpv__Image_136__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_300", Category="ShopMenu", OverrideNativeName="Image_300"))
	UImage* bpv__Image_300__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_301", Category="ShopMenu", OverrideNativeName="Image_301"))
	UImage* bpv__Image_301__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_302", Category="ShopMenu", OverrideNativeName="Image_302"))
	UImage* bpv__Image_302__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="JumpPurchase", Category="ShopMenu", OverrideNativeName="JumpPurchase"))
	UButton* bpv__JumpPurchase__pf;
	UPROPERTY(Export, meta=(DisplayName="Jumps", OverrideNativeName="Jumps"))
	UTextBlock* bpv__Jumps__pf;
	UPROPERTY(Export, meta=(DisplayName="Money", OverrideNativeName="Money"))
	UTextBlock* bpv__Money__pf;
	UPROPERTY(Export, meta=(DisplayName="Shots", OverrideNativeName="Shots"))
	UTextBlock* bpv__Shots__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMotion_Controller_Pawn"))
	AMotionControllerPawn_C__pf563933975* b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMotion_Controller_Pawn_1"))
	AMotionControllerPawn_C__pf563933975* b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Save_Game_Info"))
	UPlayerSaveGameInfo_C__pf205484891* b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Save_Game_Info_1"))
	UPlayerSaveGameInfo_C__pf205484891* b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMotion_Controller_Pawn_2"))
	AMotionControllerPawn_C__pf563933975* b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Save_Game_Info_2"))
	UPlayerSaveGameInfo_C__pf205484891* b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UShopMenu_C__pf3279071941(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ShopMenu__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_446_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_446_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_107_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_107_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Shots_Text_0"))
	virtual FText  bpf__Get_Shots_Text_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Jumps_Text_0"))
	virtual FText  bpf__Get_Jumps_Text_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Money_Text_0"))
	virtual FText  bpf__Get_Money_Text_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
