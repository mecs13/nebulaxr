#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "GripEnum__pf563933975.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "RightHand_AnimBP__pf558596347.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/VirtualReality/Mannequin/Animations/RightHand_AnimBP.RightHand_AnimBP_C", OverrideNativeName="RightHand_AnimBP_C"))
class URightHand_AnimBP_C__pf558596347 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grip State", Category="Default", OverrideNativeName="GripState"))
	E__GripEnum__pf bpv__GripState__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Interp Speed", Category="Default", OverrideNativeName="InterpSpeed"))
	float bpv__InterpSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grip", Category="Default", OverrideNativeName="Grip"))
	float bpv__Grip__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	URightHand_AnimBP_C__pf558596347(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer();
	void bpf__ExecuteUbergraph_RightHand_AnimBP__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
