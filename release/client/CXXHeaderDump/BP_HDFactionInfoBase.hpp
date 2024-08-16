#ifndef UE4SS_SDK_BP_HDFactionInfoBase_HPP
#define UE4SS_SDK_BP_HDFactionInfoBase_HPP

class UBP_HDFactionInfoBase_C : public UHDFactionInfo
{
    FButtonStyle TeamBtnSelectedStyle;                                                // 0x00E0 (size: 0x278)
    FButtonStyle TeamBtnDeselectedStyle;                                              // 0x0358 (size: 0x278)
    FSlateBrush TeamBtnSelectedBrush;                                                 // 0x05D0 (size: 0x88)
    FSlateBrush TeamBtnDeselectedBrush;                                               // 0x0658 (size: 0x88)
    TSoftObjectPtr<UTexture2D> CPFlagIcon;                                            // 0x06E0 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> CharMesh;                                           // 0x0708 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> CharMesh1P;                                         // 0x0730 (size: 0x28)
    FText TeamBtnDisplayText;                                                         // 0x0758 (size: 0x18)
    FText VictoryText;                                                                // 0x0770 (size: 0x18)
    TSoftClassPtr<ABP_HDProj_RallyPointBase_C> RallyPointClass;                       // 0x0788 (size: 0x28)
    TSoftClassPtr<ABP_HDProj_OutpostBase_C> OutpostClass;                             // 0x07B0 (size: 0x28)
    TSoftObjectPtr<UHDKit> AIControlledSquadLeaderKit;                                // 0x07D8 (size: 0x28)
    TSoftObjectPtr<UHDKit> AIControlledSquadMemberKit;                                // 0x0800 (size: 0x28)
    TSoftObjectPtr<UDataTable> AIVocalProfiles;                                       // 0x0828 (size: 0x28)

}; // Size: 0x850

#endif
