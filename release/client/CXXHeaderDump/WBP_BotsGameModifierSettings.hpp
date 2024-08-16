#ifndef UE4SS_SDK_WBP_BotsGameModifierSettings_HPP
#define UE4SS_SDK_WBP_BotsGameModifierSettings_HPP

class UWBP_BotsGameModifierSettings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_GameModifierSettingsSection_C* SectionContainer;                       // 0x0238 (size: 0x8)
    class UWBP_ModifierSetting_Numeric_C* TeamBotCountBlufor;                         // 0x0240 (size: 0x8)
    class UWBP_ModifierSetting_Numeric_C* TeamBotCountOpfor;                          // 0x0248 (size: 0x8)

    void GetTravelURLOptions(FString& Options);
    void IsEnabled(bool& bEnabled);
    void BuildBotCountURLOption(EHDTeam Team, int32 Count, FString& Pair);
    void SetupModifier(class UWBP_OptionMenu_CreateGame_C* ParentMenu);
    void ExecuteUbergraph_WBP_BotsGameModifierSettings(int32 EntryPoint);
}; // Size: 0x250

#endif
