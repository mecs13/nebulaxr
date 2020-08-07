#pragma once
#include "EAirplaneType__pf3475422732.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/CommercialPlane/Blueprints/EAirplaneType.EAirplaneType", OverrideNativeName="EAirplaneType", EnumDisplayNameFn="E__EAirplaneType__pf__GetUserFriendlyName") )
enum class E__EAirplaneType__pf  : uint8
{
	NewEnumerator4 = 0 UMETA(OverrideName = "EAirplaneType::NewEnumerator4"),
	NewEnumerator0 = 1 UMETA(OverrideName = "EAirplaneType::NewEnumerator0"),
	NewEnumerator3 = 2 UMETA(OverrideName = "EAirplaneType::NewEnumerator3"),
	NewEnumerator2 = 3 UMETA(OverrideName = "EAirplaneType::NewEnumerator2"),
	E__EAirplaneType__pf_MAX = 4 UMETA(OverrideName = "EAirplaneType::EAirplaneType_MAX"),
};
FText E__EAirplaneType__pf__GetUserFriendlyName(int32 InValue);
