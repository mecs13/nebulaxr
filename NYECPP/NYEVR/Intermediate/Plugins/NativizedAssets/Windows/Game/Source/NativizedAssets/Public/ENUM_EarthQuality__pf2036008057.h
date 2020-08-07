#pragma once
#include "ENUM_EarthQuality__pf2036008057.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Earth32/Blueprint/ENUM_EarthQuality.ENUM_EarthQuality", OverrideNativeName="ENUM_EarthQuality", EnumDisplayNameFn="E__ENUM_EarthQuality__pf__GetUserFriendlyName") )
enum class E__ENUM_EarthQuality__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENUM_EarthQuality::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENUM_EarthQuality::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "ENUM_EarthQuality::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "ENUM_EarthQuality::NewEnumerator3"),
	NewEnumerator4 = 4 UMETA(OverrideName = "ENUM_EarthQuality::NewEnumerator4"),
	NewEnumerator5 = 5 UMETA(OverrideName = "ENUM_EarthQuality::NewEnumerator5"),
	E__ENUM_EarthQuality__pf_MAX = 6 UMETA(OverrideName = "ENUM_EarthQuality::ENUM_MAX"),
};
FText E__ENUM_EarthQuality__pf__GetUserFriendlyName(int32 InValue);
