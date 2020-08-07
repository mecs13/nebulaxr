#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UTexture2D;
class AItem_C__pf2130893442;
class UClass;
#include "ItemStructure__pf1634840482.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/SoftInventory/ItemStructure.ItemStructure", OverrideNativeName="ItemStructure"))
struct FItemStructure__pf1634840482
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name", Tooltip, OverrideNativeName="Name_2_4B8FD9214036DB134EB00482AF219862"))
	FText bpv__Name_2_4B8FD9214036DB134EB00482AF219862__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="isStackable", Tooltip, OverrideNativeName="isStackable_5_BE43225446C8F93DA0EA27A1B68FED87"))
	bool bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Thumbnail", Tooltip, OverrideNativeName="Thumbnail_8_22A527D2432BDD304913679CB31F9860"))
	UTexture2D* bpv__Thumbnail_8_22A527D2432BDD304913679CB31F9860__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MaxStack", Tooltip, OverrideNativeName="MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9"))
	int32 bpv__MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="isConsumable", Tooltip, OverrideNativeName="isConsumable_14_3961646C477A8890E90654BF579718FB"))
	bool bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Class", Tooltip, OverrideNativeName="Class_19_97A2145C46455AAAB992E3B2B3B641B7"))
	UClass* bpv__Class_19_97A2145C46455AAAB992E3B2B3B641B7__pf;
	FItemStructure__pf1634840482();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FItemStructure__pf1634840482& __Other) const
	{
		return FItemStructure__pf1634840482::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
