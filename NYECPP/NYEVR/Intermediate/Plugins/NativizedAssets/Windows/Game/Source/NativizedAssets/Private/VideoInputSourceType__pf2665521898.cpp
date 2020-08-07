#include "NativizedAssets.h"
#include "VideoInputSourceType__pf2665521898.h"
FText E__VideoInputSourceType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__VideoInputSourceType__pf>(InValue);
	switch(EnumValue)
	{
		case E__VideoInputSourceType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[CC9C53A94DEB958A8057F997112EE2B5]\", \"701AD0994071F823887765BC43E97E49\", \"LocalSource\")"), Text); break;
		case E__VideoInputSourceType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[CC9C53A94DEB958A8057F997112EE2B5]\", \"0C7BB10C4F2EF9CA5952E3814024DB45\", \"GlobalBroadcast\")"), Text); break;
		case E__VideoInputSourceType__pf::E__VideoInputSourceType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Video Input Source Type MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
