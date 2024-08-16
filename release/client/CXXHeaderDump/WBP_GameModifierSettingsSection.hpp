#ifndef UE4SS_SDK_WBP_GameModifierSettingsSection_HPP
#define UE4SS_SDK_WBP_GameModifierSettingsSection_HPP

class UWBP_GameModifierSettingsSection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UNamedSlot* Content;                                                        // 0x0238 (size: 0x8)
    class UCheckBox* SectionActiveToggleChkBox;                                       // 0x0240 (size: 0x8)
    class UImage* SectionExpansionArrow;                                              // 0x0248 (size: 0x8)
    class UButton* SectionExpansionToggleBtn;                                         // 0x0250 (size: 0x8)
    class UTextBlock* SectionTitleText;                                               // 0x0258 (size: 0x8)
    FText TitleText;                                                                  // 0x0260 (size: 0x18)
    bool bShowToggleBtn;                                                              // 0x0278 (size: 0x1)
    bool bExpanded;                                                                   // 0x0279 (size: 0x1)
    bool bActive;                                                                     // 0x027A (size: 0x1)
    char padding_0[0x5];                                                              // 0x027B (size: 0x5)
    FWBP_GameModifierSettingsSection_COnActivated OnActivated;                        // 0x0280 (size: 0x10)
    void OnActivated();
    FWBP_GameModifierSettingsSection_COnDeactivated OnDeactivated;                    // 0x0290 (size: 0x10)
    void OnDeactivated();

    void InternalRecursiveSetContentIsEnabled(bool bInIsEnabled);
    void IsActive(bool& bActive);
    void IsExpanded(bool& bExpanded);
    void GetTitleText(FText& TitleText);
    void SetIsActive(bool bActive);
    void SetExpansionState(bool bExpanded);
    void SetTitleText(FText InTitleText);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__SectionExpansionToggleBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SectionActiveToggleChkBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_WBP_GameModifierSettingsSection(int32 EntryPoint);
    void OnDeactivated__DelegateSignature();
    void OnActivated__DelegateSignature();
}; // Size: 0x2A0

#endif
