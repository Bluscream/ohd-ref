#ifndef UE4SS_SDK_FGameCreditsEntry_HPP
#define UE4SS_SDK_FGameCreditsEntry_HPP

struct FFGameCreditsEntry
{
    TEnumAsByte<EGameCreditsEntryType::Type> EntryType_6_793CFEE04DA4AF9360FD6A8A9B1C6812; // 0x0000 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0001 (size: 0x7)
    FText Text_5_DFA977D64EC46726AC35AE9CDF6FB11A;                                    // 0x0008 (size: 0x18)
    FName HeaderRowName_9_808E074444E26274A7D579AC4B409585;                           // 0x0020 (size: 0x8)
    float HeaderDividerWidth_13_DE3954594351434E75DE5D882ACEC8C0;                     // 0x0028 (size: 0x4)

}; // Size: 0x2C

#endif
