#include "NativizedAssets.h"
#include "VideoInputSource__pf2665521898.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "GlobalMediaBroadcast__pf2665521898.h"
FVideoInputSource__pf2665521898::FVideoInputSource__pf2665521898()
{
	bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf = E__VideoInputSourceType__pf::NewEnumerator1;
	bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf = nullptr;
}
PRAGMA_DISABLE_OPTIMIZATION
void FVideoInputSource__pf2665521898::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(true, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{1, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.BillboardComponent 
		{2, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/ACOptimizedTV/ACOptimizedTV_Textures/T_BroadcastIcon_D.T_BroadcastIcon_D 
		{3, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SceneComponent 
		{4, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/MediaAssets.MediaPlayer 
		{5, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/MediaAssets.MediaTexture 
		{6, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/MediaAssets.MediaSource 
		{7, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/MediaAssets.MediaPlaylist 
		{8, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{9, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{10, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{11, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.DataTable 
		{12, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{13, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Actor 
		{14, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{15, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/ACOptimizedTV/ACOptimizedTV_Blueprints/GlobalMediaBroadcast.GlobalMediaBroadcast_C 
		{16, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedEnum /Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSourceType.VideoInputSourceType 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FVideoInputSource__pf2665521898
{
	FRegisterHelper__FVideoInputSource__pf2665521898()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSource"), &FVideoInputSource__pf2665521898::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FVideoInputSource__pf2665521898 Instance;
};
FRegisterHelper__FVideoInputSource__pf2665521898 FRegisterHelper__FVideoInputSource__pf2665521898::Instance;
