#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "VideoInputSourceType__pf2665521898.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
class AGlobalMediaBroadcast_C__pf2665521898;
#include "VideoInputSource__pf2665521898.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSource.VideoInputSource", OverrideNativeName="VideoInputSource"))
struct FVideoInputSource__pf2665521898
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SourceTypeToUse", Tooltip, OverrideNativeName="SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467"))
	E__VideoInputSourceType__pf bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LocalSourceData", Tooltip, OverrideNativeName="LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F"))
	FDataTableRowHandle bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="GlobalMediaBroadcast", Tooltip, OverrideNativeName="GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436"))
	AGlobalMediaBroadcast_C__pf2665521898* bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf;
	FVideoInputSource__pf2665521898();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FVideoInputSource__pf2665521898& __Other) const
	{
		return FVideoInputSource__pf2665521898::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
