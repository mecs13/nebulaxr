#include "NativizedAssets.h"
#include "PlayerSaveGameInfo__pf205484891.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UPlayerSaveGameInfo_C__pf205484891::UPlayerSaveGameInfo_C__pf205484891(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__GameCurrency__pf = 0;
	bpv__Score__pf = 0;
	bpv__JumpCount__pf = 5;
	bpv__AmmoCount__pf = 10;
}
PRAGMA_ENABLE_OPTIMIZATION
void UPlayerSaveGameInfo_C__pf205484891::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UPlayerSaveGameInfo_C__pf205484891::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UPlayerSaveGameInfo_C__pf205484891::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UPlayerSaveGameInfo_C__pf205484891::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UPlayerSaveGameInfo_C__pf205484891
{
	FRegisterHelper__UPlayerSaveGameInfo_C__pf205484891()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/FirstPersonBP/Blueprints/PlayerSaveGameInfo"), &UPlayerSaveGameInfo_C__pf205484891::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UPlayerSaveGameInfo_C__pf205484891 Instance;
};
FRegisterHelper__UPlayerSaveGameInfo_C__pf205484891 FRegisterHelper__UPlayerSaveGameInfo_C__pf205484891::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
