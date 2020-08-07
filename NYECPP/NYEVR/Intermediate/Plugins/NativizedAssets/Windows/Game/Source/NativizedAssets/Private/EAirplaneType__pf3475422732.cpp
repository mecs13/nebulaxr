#include "NativizedAssets.h"
#include "EAirplaneType__pf3475422732.h"
FText E__EAirplaneType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EAirplaneType__pf>(InValue);
	switch(EnumValue)
	{
		case E__EAirplaneType__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[279C288844214BCA7C519CAC0E1C4129]\", \"29853C0142711F80DB0332962CE33D14\", \"Blank\")"), Text); break;
		case E__EAirplaneType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[279C288844214BCA7C519CAC0E1C4129]\", \"3181A24447F9C8D0F9E5F8BD52378432\", \"Namhan Airlines\")"), Text); break;
		case E__EAirplaneType__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[279C288844214BCA7C519CAC0E1C4129]\", \"7253C1E448DFA11DC54D4FB543EF1875\", \"PanAtlantic\")"), Text); break;
		case E__EAirplaneType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[279C288844214BCA7C519CAC0E1C4129]\", \"07E07CA748B5A8158DAEDD9E8FA00C78\", \"BizJet\")"), Text); break;
		case E__EAirplaneType__pf::E__EAirplaneType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("EAirplane Type MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
