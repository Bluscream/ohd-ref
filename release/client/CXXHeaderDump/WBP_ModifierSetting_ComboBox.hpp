#ifndef UE4SS_SDK_WBP_ModifierSetting_ComboBox_HPP
#define UE4SS_SDK_WBP_ModifierSetting_ComboBox_HPP

class UWBP_ModifierSetting_ComboBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UComboBoxString* ModifierComboBox;                                          // 0x0238 (size: 0x8)
    class UWBP_ModifierSettingBox_C* ModifierSetting;                                 // 0x0240 (size: 0x8)
    FText SettingText;                                                                // 0x0248 (size: 0x18)
    FFModifierTextStyle SettingTextStyle;                                             // 0x0260 (size: 0x78)
    FMargin SettingComboBoxPadding;                                                   // 0x02D8 (size: 0x10)
    TArray<FString> DefaultOptions;                                                   // 0x02E8 (size: 0x10)
    int32 DefaultSelectedOptionIdx;                                                   // 0x02F8 (size: 0x4)
    char padding_0[0x4];                                                              // 0x02FC (size: 0x4)
    FWBP_ModifierSetting_ComboBox_COnSelectionChanged OnSelectionChanged;             // 0x0300 (size: 0x10)
    void OnSelectionChanged(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    FWBP_ModifierSetting_ComboBox_COnOpening OnOpening;                               // 0x0310 (size: 0x10)
    void OnOpening();

    void GetSettingText(FText& SettingText);
    void SetSettingText(FText InSettingText);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature();
    void OnInitialized();
    void ExecuteUbergraph_WBP_ModifierSetting_ComboBox(int32 EntryPoint);
    void OnOpening__DelegateSignature();
    void OnSelectionChanged__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
}; // Size: 0x320

#endif
