#include "NativizedAssets.h"
#include "VideoParams__pf2665521898.h"
#include "Runtime/MediaAssets/Public/MediaTexture.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/MediaAssets/Public/MediaPlayer.h"
#include "Runtime/MediaAssets/Public/MediaSource.h"
#include "Runtime/MediaUtils/Public/MediaPlayerOptions.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/MediaAssets/Public/MediaPlaylist.h"
FVideoParams__pf2665521898::FVideoParams__pf2665521898()
{
	bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf = nullptr;
	bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf = nullptr;
	bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf = nullptr;
}
PRAGMA_DISABLE_OPTIMIZATION
void FVideoParams__pf2665521898::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{5, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/MediaAssets.MediaTexture 
		{6, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/MediaAssets.MediaSource 
		{7, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/MediaAssets.MediaPlaylist 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FVideoParams__pf2665521898
{
	FRegisterHelper__FVideoParams__pf2665521898()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoParams"), &FVideoParams__pf2665521898::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FVideoParams__pf2665521898 Instance;
};
FRegisterHelper__FVideoParams__pf2665521898 FRegisterHelper__FVideoParams__pf2665521898::Instance;
