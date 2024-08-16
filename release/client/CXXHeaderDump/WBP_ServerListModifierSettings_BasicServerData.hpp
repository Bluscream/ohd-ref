#ifndef UE4SS_SDK_WBP_ServerListModifierSettings_BasicServerData_HPP
#define UE4SS_SDK_WBP_ServerListModifierSettings_BasicServerData_HPP

class UWBP_ServerListModifierSettings_BasicServerData_C : public UUserWidget
{
    class UWBP_GameModifierSettingsSection_C* SectionContainer;                       // 0x0230 (size: 0x8)
    class UTextBlock* ServerDescriptionText;                                          // 0x0238 (size: 0x8)
    class UTextBlock* ServerNameText;                                                 // 0x0240 (size: 0x8)
    class UTextBlock* ServerPlayersText;                                              // 0x0248 (size: 0x8)
    int32 ServerNameMaxLength;                                                        // 0x0250 (size: 0x4)

}; // Size: 0x254

#endif
