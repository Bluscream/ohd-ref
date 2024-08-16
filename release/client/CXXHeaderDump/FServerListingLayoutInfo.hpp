#ifndef UE4SS_SDK_FServerListingLayoutInfo_HPP
#define UE4SS_SDK_FServerListingLayoutInfo_HPP

struct FFServerListingLayoutInfo
{
    FText HeaderLabel_19_1F3495A44170D55BD20587BF982EEAAB;                            // 0x0000 (size: 0x18)
    TEnumAsByte<ETextJustify::Type> LabelJustification_20_FDBD545240CA011C3132D58BE708809B; // 0x0018 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0019 (size: 0x3)
    FMargin SlotPadding_15_16A3E958452039B138BC338AD775C2D9;                          // 0x001C (size: 0x10)
    float MinDesiredWidth_16_81A194A649DD44332AC5FC91B6521D2A;                        // 0x002C (size: 0x4)
    float MaxDesiredWidth_17_1583BB354DB575BC6BB54E8AF33C09C1;                        // 0x0030 (size: 0x4)

}; // Size: 0x34

#endif
