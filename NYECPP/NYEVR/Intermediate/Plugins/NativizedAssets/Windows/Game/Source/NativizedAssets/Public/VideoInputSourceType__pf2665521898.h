#pragma once
#include "VideoInputSourceType__pf2665521898.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSourceType.VideoInputSourceType", OverrideNativeName="VideoInputSourceType", EnumDisplayNameFn="E__VideoInputSourceType__pf__GetUserFriendlyName") )
enum class E__VideoInputSourceType__pf  : uint8
{
	NewEnumerator1 = 0 UMETA(OverrideName = "VideoInputSourceType::NewEnumerator1"),
	NewEnumerator0 = 1 UMETA(OverrideName = "VideoInputSourceType::NewEnumerator0"),
	E__VideoInputSourceType__pf_MAX = 2 UMETA(OverrideName = "VideoInputSourceType::VideoInputSourceType_MAX"),
};
FText E__VideoInputSourceType__pf__GetUserFriendlyName(int32 InValue);
