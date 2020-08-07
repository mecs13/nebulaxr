#include "NativizedAssets.h"
#include "ENUM_EarthQuality__pf2036008057.h"
FText E__ENUM_EarthQuality__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENUM_EarthQuality__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENUM_EarthQuality__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9280B5494A43B3099356B69753CCEA51]\", \"D2FEDFAE401491BA9B05659E00780B69\", \"Cinematic\")"), Text); break;
		case E__ENUM_EarthQuality__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9280B5494A43B3099356B69753CCEA51]\", \"8E4754144497702899543BB95DA6557C\", \"Default32k\")"), Text); break;
		case E__ENUM_EarthQuality__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9280B5494A43B3099356B69753CCEA51]\", \"90EF3EDE40D05F2895FD1FA3D1A1E2D2\", \"Optimised16k\")"), Text); break;
		case E__ENUM_EarthQuality__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9280B5494A43B3099356B69753CCEA51]\", \"C23D1AB041ADA19A885D5884D3AF1D07\", \"MobileES3\")"), Text); break;
		case E__ENUM_EarthQuality__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9280B5494A43B3099356B69753CCEA51]\", \"F6A5DBCA458EC545C2EA7F946E9113E6\", \"Lowest\")"), Text); break;
		case E__ENUM_EarthQuality__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9280B5494A43B3099356B69753CCEA51]\", \"66EB40F04BFD5163F22529B0594D18D9\", \"Beta64\")"), Text); break;
		case E__ENUM_EarthQuality__pf::E__ENUM_EarthQuality__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENUM MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
