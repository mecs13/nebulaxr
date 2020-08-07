#include "NativizedAssets.h"
#include "BP_FuncLib__pf3332962890.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UBP_FuncLib_C__pf3332962890::UBP_FuncLib_C__pf3332962890(const FObjectInitializer& ObjectInitializer) : Super()
{
	
}
PRAGMA_ENABLE_OPTIMIZATION
void UBP_FuncLib_C__pf3332962890::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UBP_FuncLib_C__pf3332962890::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
void UBP_FuncLib_C__pf3332962890::bpf__RandomVectorSeeded__pf(FVector bpp__Min__pf, FVector bpp__Max__pf, FRandomStream bpp__Seed__pf, UObject* bpp____WorldContext__pf, /*out*/ FVector& bpp__Out__pf)
{
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	float bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue__pf{};
	float bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue_1__pf{};
	float bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	UKismetMathLibrary::BreakVector(bpp__Min__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	UKismetMathLibrary::BreakVector(bpp__Max__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
	bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRangeFromStream(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_X_1__pf, bpp__Seed__pf);
	bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue_1__pf = UKismetMathLibrary::RandomFloatInRangeFromStream(bpfv__CallFunc_BreakVector_Z__pf, bpfv__CallFunc_BreakVector_Z_1__pf, bpp__Seed__pf);
	bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue_2__pf = UKismetMathLibrary::RandomFloatInRangeFromStream(bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_BreakVector_Y_1__pf, bpp__Seed__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue__pf, bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue_2__pf, bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue_1__pf);
	bpp__Out__pf = bpfv__CallFunc_MakeVector_ReturnValue__pf;
}
void UBP_FuncLib_C__pf3332962890::bpf__RandomRotSeeded__pf(FRotator bpp__Min__pf, FRotator bpp__Max__pf, /*out*/ FRandomStream& bpp__Seed__pf, UObject* bpp____WorldContext__pf, /*out*/ FRotator& bpp__Out__pf)
{
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_BreakRotator_Roll_1__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch_1__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw_1__pf{};
	float bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue__pf{};
	float bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue_1__pf{};
	float bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue_2__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	UKismetMathLibrary::BreakRotator(bpp__Min__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	UKismetMathLibrary::BreakRotator(bpp__Max__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll_1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch_1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw_1__pf);
	bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRangeFromStream(bpfv__CallFunc_BreakRotator_Roll__pf, bpfv__CallFunc_BreakRotator_Roll_1__pf, bpp__Seed__pf);
	bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue_1__pf = UKismetMathLibrary::RandomFloatInRangeFromStream(bpfv__CallFunc_BreakRotator_Yaw__pf, bpfv__CallFunc_BreakRotator_Yaw_1__pf, bpp__Seed__pf);
	bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue_2__pf = UKismetMathLibrary::RandomFloatInRangeFromStream(bpfv__CallFunc_BreakRotator_Pitch__pf, bpfv__CallFunc_BreakRotator_Pitch_1__pf, bpp__Seed__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue__pf, bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue_2__pf, bpfv__CallFunc_RandomFloatInRangeFromStream_ReturnValue_1__pf);
	bpp__Out__pf = bpfv__CallFunc_MakeRotator_ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UBP_FuncLib_C__pf3332962890::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UBP_FuncLib_C__pf3332962890::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{325, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UBP_FuncLib_C__pf3332962890
{
	FRegisterHelper__UBP_FuncLib_C__pf3332962890()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/SuspensionBridge/Blueprints/BP_FuncLib"), &UBP_FuncLib_C__pf3332962890::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UBP_FuncLib_C__pf3332962890 Instance;
};
FRegisterHelper__UBP_FuncLib_C__pf3332962890 FRegisterHelper__UBP_FuncLib_C__pf3332962890::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
