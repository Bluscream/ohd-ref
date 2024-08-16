#ifndef UE4SS_SDK_WBP_ModifierSetting_CheckBox_HPP
#define UE4SS_SDK_WBP_ModifierSetting_CheckBox_HPP

class UWBP_ModifierSetting_CheckBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UCheckBox* ModifierCheckBox;                                                // 0x0238 (size: 0x8)
    class USizeBox* ModifierSBox;                                                     // 0x0240 (size: 0x8)
    class UWBP_ModifierSettingBox_C* ModifierSetting;                                 // 0x0248 (size: 0x8)
    bool bDefaultIsChecked;                                                           // 0x0250 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0251 (size: 0x7)
    FText SettingText;                                                                // 0x0258 (size: 0x18)
    FWBP_ModifierSetting_CheckBox_COnCheckStateChanged OnCheckStateChanged;           // 0x0270 (size: 0x10)
    void OnCheckStateChanged(bool bIsChecked);
    FFModifierTextStyle SettingTextStyle;                                             // 0x0280 (size: 0x78)
    FVector2D CheckBoxMinSize;                                                        // 0x02F8 (size: 0x8)

    void GetSettingText(FText& SettingText);
    void SetSettingText(FText InSettingText);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ModifierCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void OnInitialized();
    void ExecuteUbergraph_WBP_ModifierSetting_CheckBox(int32 EntryPoint);
    void OnCheckStateChanged__DelegateSignature(bool bIsChecked);
}; // Size: 0x300

#endif
