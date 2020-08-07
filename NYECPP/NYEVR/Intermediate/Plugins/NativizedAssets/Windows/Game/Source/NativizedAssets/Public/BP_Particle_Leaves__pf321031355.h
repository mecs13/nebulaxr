#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "P_Leaves_Enum__pf897159640.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Interface_Wind_Particle_True__pf3628915390.h"
class UBillboardComponent;
class USphereComponent;
class UParticleSystemComponent;
class UMaterialInterface;
class ABP_Paticle_wind_settings_C__pf321031355;
class AActor;
#include "BP_Particle_Leaves__pf321031355.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Particles_Wind_Control_System/Blueprints/BP_Particle_Leaves.BP_Particle_Leaves_C", OverrideNativeName="BP_Particle_Leaves_C"))
class ABP_Particle_Leaves_C__pf321031355 : public AActor, public IInterface_Wind_Particle_True_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Billboard"))
	UBillboardComponent* bpv__Billboard__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere"))
	USphereComponent* bpv__Sphere__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ParticleSystem"))
	UParticleSystemComponent* bpv__ParticleSystem__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leaves Type", Category="Modifiers", OverrideNativeName="Leaves Type"))
	E__P_Leaves_Enum__pf bpv__LeavesxType__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Current Material", Category="Modifiers", OverrideNativeName="Current Material"))
	UMaterialInterface* bpv__CurrentxMaterial__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Custom Material (Any Of Your Material)", Category="Modifiers", OverrideNativeName="Custom Material (Any of your material)"))
	UMaterialInterface* bpv__CustomxMaterialxxAnyxofxyourxmaterialx__pfTTLTTTK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Spawn Radius", Category="Modifiers", UIMin="10", ClampMin="10", OverrideNativeName="Spawn Radius"))
	float bpv__SpawnxRadius__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leaves Amount", Category="Modifiers", UIMin="1", ClampMin="1", UIMax="100", ClampMax="100", OverrideNativeName="Leaves_Amount"))
	float bpv__Leaves_Amount__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leaves Size", Category="Modifiers", UIMin="0.1", ClampMin="0.1", OverrideNativeName="Leaves_size"))
	float bpv__Leaves_size__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leaves Speed Increase", Category="Modifiers", UIMin="0.1", ClampMin="0.1", UIMax="8", ClampMax="8", OverrideNativeName="Leaves_Speed_Increase"))
	float bpv__Leaves_Speed_Increase__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leaves Turbulence X", Category="Modifiers", UIMin="0", ClampMin="0", OverrideNativeName="Leaves_Turbulence_X"))
	float bpv__Leaves_Turbulence_X__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leaves Turbulence Y", Category="Modifiers", UIMin="0", ClampMin="0", OverrideNativeName="Leaves_Turbulence_Y"))
	float bpv__Leaves_Turbulence_Y__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leaves Turbulence Z", Category="Modifiers", UIMin="0", ClampMin="0", OverrideNativeName="Leaves_Turbulence_Z"))
	float bpv__Leaves_Turbulence_Z__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leaves Turbulence Speed X", Category="Modifiers", UIMin="0", ClampMin="0", OverrideNativeName="Leaves_Turbulence_Speed_X"))
	float bpv__Leaves_Turbulence_Speed_X__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leaves Turbulence Speed Y", Category="Modifiers", UIMin="0", ClampMin="0", OverrideNativeName="Leaves_Turbulence_Speed_Y"))
	float bpv__Leaves_Turbulence_Speed_Y__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leaves Turbulence Speed Z", Category="Modifiers", UIMin="0", ClampMin="0", OverrideNativeName="Leaves_Turbulence_Speed_Z"))
	float bpv__Leaves_Turbulence_Speed_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable_1"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ABP_Paticle_wind_settings_C__pf321031355*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsWithInterface_OutActors"))
	TArray<AActor*> b0l__CallFunc_GetAllActorsWithInterface_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_2"))
	int32 b0l__Temp_int_Loop_Counter_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABP_Paticle_wind_settings_C__pf321031355* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable_2"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_2"))
	int32 b0l__Temp_int_Array_Index_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	AActor* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetComponentsByClass_ReturnValue"))
	TArray<UParticleSystemComponent*> b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	UParticleSystemComponent* b0l__CallFunc_Array_Get_Item_2__pf;
	ABP_Particle_Leaves_C__pf321031355(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Particle_Leaves__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
