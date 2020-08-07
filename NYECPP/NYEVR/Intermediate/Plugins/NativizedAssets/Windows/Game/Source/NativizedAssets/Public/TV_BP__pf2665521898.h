#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "VideoInputSource__pf2665521898.h"
#include "VideoInputSourceType__pf2665521898.h"
#include "VideoParams__pf2665521898.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UMediaSoundComponent;
class UBoxComponent;
class UTextRenderComponent;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class UTexture;
class UPrimitiveComponent;
class AActor;
class UMediaTexture;
#include "TV_BP__pf2665521898.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/TV_BP.TV_BP_C", OverrideNativeName="TV_BP_C"))
class ATV_BP_C__pf2665521898 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sound"))
	UMediaSoundComponent* bpv__Sound__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trigger"))
	UBoxComponent* bpv__Trigger__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Text"))
	UTextRenderComponent* bpv__Text__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TV_Mesh"))
	UStaticMeshComponent* bpv__TV_Mesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dynamic Screen Material", Category="TV Config", OverrideNativeName="DynamicScreenMaterial"))
	UMaterialInstanceDynamic* bpv__DynamicScreenMaterial__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="On/ Off", Category="TV Settings", OverrideNativeName="On/Off"))
	bool bpv__OnxOff__pfE;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Screen Texture Parameter", Category="TV Config", OverrideNativeName="ScreenTextureParameter"))
	FName bpv__ScreenTextureParameter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Global Channel", Category="TV Config", OverrideNativeName="MaxGlobalChannel"))
	int32 bpv__MaxGlobalChannel__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="No Source Texture", Category="TV Config", OverrideNativeName="NoSourceTexture"))
	UTexture* bpv__NoSourceTexture__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Input Sources", Category="TV Config", OverrideNativeName="InputSources"))
	TArray<FVideoInputSource__pf2665521898> bpv__InputSources__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Input Scource", Category="TV Settings", OverrideNativeName="InputScource"))
	int32 bpv__InputScource__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Global Channel", Category="TV Settings", OverrideNativeName="GlobalChannel"))
	int32 bpv__GlobalChannel__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCurrentInputSourceData_IsValidSource"))
	bool b0l__CallFunc_GetCurrentInputSourceData_IsValidSource__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCurrentInputSourceData_SourceType"))
	E__VideoInputSourceType__pf b0l__CallFunc_GetCurrentInputSourceData_SourceType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCurrentInputSourceData_VideoParams"))
	FVideoParams__pf2665521898 b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_IsValidSource"))
	bool b0l__K2Node_CustomEvent_IsValidSource__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MediaTexture"))
	UMediaTexture* b0l__K2Node_CustomEvent_MediaTexture__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FVideoInputSource__pf2665521898 b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_On_Off"))
	bool b0l__K2Node_CustomEvent_On_Off__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_1"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_1"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	FVideoInputSource__pf2665521898 b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetDataTableRowFromName_OutRow"))
	FVideoParams__pf2665521898 b0l__CallFunc_GetDataTableRowFromName_OutRow__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_1"))
	FKey b0l__K2Node_InputKeyEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_2"))
	FKey b0l__K2Node_InputKeyEvent_Key_2__pf;
	ATV_BP_C__pf2665521898(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_TV_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TV_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TV_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TV_BP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TV_BP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TV_BP__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TV_BP__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TV_BP__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TV_BP__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TV_BP__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TV_BP__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TV_BP__pf_11(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CloseAllLocalVideos"))
	virtual void bpf__CloseAllLocalVideos__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetAudio/Video"))
	virtual void bpf__SetAudioxVideo__pfE(bool bpp__IsValidSource__pf, UMediaTexture* bpp__MediaTexture__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CycleGlobalChannel"))
	virtual void bpf__CycleGlobalChannel__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CycleInputSources"))
	virtual void bpf__CycleInputSources__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateVideo"))
	virtual void bpf__UpdateVideo__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__TV4box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__TV4box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Power"))
	virtual void bpf__Power__pf(bool bpp__OnxOff__pfE);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__TV4box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__TV4box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Q_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_Q_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_E_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2"))
	virtual void bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetCurrentInputSourceData"))
	virtual void bpf__GetCurrentInputSourceData__pf(/*out*/ bool& bpp__IsValidSource__pf, /*out*/ E__VideoInputSourceType__pf& bpp__SourceType__pf, /*out*/ FVideoParams__pf2665521898& bpp__VideoParams__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetMaxGlobalChannel"))
	virtual void bpf__SetMaxGlobalChannel__pf();
public:
};
