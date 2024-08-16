#ifndef UE4SS_SDK_WBP_FactionGameModifierSettings_HPP
#define UE4SS_SDK_WBP_FactionGameModifierSettings_HPP

class UWBP_FactionGameModifierSettings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_ModifierSetting_ComboBox_C* FactionBlufor;                             // 0x0238 (size: 0x8)
    class UWBP_ModifierSetting_ComboBox_C* FactionOpfor;                              // 0x0240 (size: 0x8)
    class UWBP_ModifierSetting_CheckBox_C* KitRestrictionsToggle;                     // 0x0248 (size: 0x8)
    class UWBP_GameModifierSettingsSection_C* SectionContainer;                       // 0x0250 (size: 0x8)
    class UWBP_ModifierSetting_Numeric_C* TicketCountBlufor;                          // 0x0258 (size: 0x8)
    class UWBP_ModifierSetting_Numeric_C* TicketCountOpfor;                           // 0x0260 (size: 0x8)
    TArray<FPrimaryAssetId> SelectableFactionAssetIds;                                // 0x0268 (size: 0x10)

    void GetTravelURLOptions(FString& Options);
    void IsEnabled(bool& bEnabled);
    void BuildTicketCountURLOption(EHDTeam Team, int32 Count, FString& Pair);
    void BuildFactionURLOption(EHDTeam Team, FName PackageName, FString& Pair);
    void Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94(const TArray<class UClass*>& Loaded);
    void SetupModifier(class UWBP_OptionMenu_CreateGame_C* ParentMenu);
    void Destruct();
    void ExecuteUbergraph_WBP_FactionGameModifierSettings(int32 EntryPoint);
}; // Size: 0x278

#endif
