#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UMediaTexture;
class UMediaSource;
class UMediaPlaylist;
#include "VideoParams__pf2665521898.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoParams.VideoParams", OverrideNativeName="VideoParams"))
struct FVideoParams__pf2665521898
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MediaTexture", Tooltip, OverrideNativeName="MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB"))
	UMediaTexture* bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Source", Tooltip, OverrideNativeName="Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D"))
	UMediaSource* bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Playlist", Tooltip, OverrideNativeName="Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2"))
	UMediaPlaylist* bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf;
	FVideoParams__pf2665521898();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FVideoParams__pf2665521898& __Other) const
	{
		return FVideoParams__pf2665521898::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FVideoParams__pf2665521898& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FVideoParams__pf2665521898::StaticStruct()); }
};
