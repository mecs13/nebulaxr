#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "VideoParams__pf2665521898.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UBillboardComponent;
#include "GlobalMediaBroadcast__pf2665521898.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/GlobalMediaBroadcast.GlobalMediaBroadcast_C", OverrideNativeName="GlobalMediaBroadcast_C"))
class AGlobalMediaBroadcast_C__pf2665521898 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Billboard"))
	UBillboardComponent* bpv__Billboard__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="No Signal Video", Category="Default", OverrideNativeName="NoSignalVideo"))
	FVideoParams__pf2665521898 bpv__NoSignalVideo__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Global Channels", Category="Default", OverrideNativeName="GlobalChannels"))
	TArray<FDataTableRowHandle> bpv__GlobalChannels__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FDataTableRowHandle b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetDataTableRowFromName_OutRow"))
	FVideoParams__pf2665521898 b0l__CallFunc_GetDataTableRowFromName_OutRow__pf;
	AGlobalMediaBroadcast_C__pf2665521898(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_GlobalMediaBroadcast__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
