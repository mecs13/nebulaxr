#include "NativizedAssets.h"
#include "P_Leaves_Enum__pf897159640.h"
FText E__P_Leaves_Enum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__P_Leaves_Enum__pf>(InValue);
	switch(EnumValue)
	{
		case E__P_Leaves_Enum__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"AD7109D84C74280519BD8E9F8E5BD609\", \"Acer\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"E351F78846993AA7ED6B3D83457D59A6\", \"Apple\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"9DA389654BC5A2C2516FD3846955D467\", \"Aspen\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"2A12448246088366D386F79E4E958C2B\", \"Birch\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"F5C3C76A443372044510D9A8261534D0\", \"Bird Cherry\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"0BC412DF409BCF9368D005ABAD6CB75B\", \"Cherry\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator7: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"5C18FBAD477EBBA99BF6D8BB423795FD\", \"Elm\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"D22C851E43535BDBCE398B81806638E1\", \"Maple\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator9: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"F59DC9A043076BCCBABEF7BAD1924F23\", \"Oak\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator10: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"06DC02164EA06C615F1510932E4B9A22\", \"Plum\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator11: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"66EB1ACB403DFD3E39234AB3057EEA3B\", \"Pussy Willow\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator12: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"C410016C4DE9FE92AF72539E9A66FFB5\", \"Rowan\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator13: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"922ED9B14F8E615D3D197C94E57186CC\", \"Sea buckthorn\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator14: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"3F9F89874F42F6A3050FDBB6A182E75A\", \"Willow\")"), Text); break;
		case E__P_Leaves_Enum__pf::NewEnumerator20: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8EC761DC481D502ECBBCD2834389086B]\", \"F578873047D6C4AEE86DF3AA1E8A56E2\", \"Custom Material\")"), Text); break;
		case E__P_Leaves_Enum__pf::E__P_Leaves_Enum__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("P Leaves MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
