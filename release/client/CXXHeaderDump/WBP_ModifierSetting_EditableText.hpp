#ifndef UE4SS_SDK_WBP_ModifierSetting_EditableText_HPP
#define UE4SS_SDK_WBP_ModifierSetting_EditableText_HPP

class UWBP_ModifierSetting_EditableText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UEditableText* ModifierEditableText;                                        // 0x0238 (size: 0x8)
    class UWBP_ModifierSettingBox_C* ModifierSetting;                                 // 0x0240 (size: 0x8)
    FText SettingLabelText;                                                           // 0x0248 (size: 0x18)
    FFModifierTextStyle SettingLabelTextStyle;                                        // 0x0260 (size: 0x78)
    FText DefaultText;                                                                // 0x02D8 (size: 0x18)
    FText DefaultHintText;                                                            // 0x02F0 (size: 0x18)
    TArray<FString> DefaultOptions;                                                   // 0x0308 (size: 0x10)
    int32 DefaultSelectedOptionIdx;                                                   // 0x0318 (size: 0x4)
    char padding_0[0x4];                                                              // 0x031C (size: 0x4)
    FWBP_ModifierSetting_EditableText_COnTextChanged OnTextChanged;                   // 0x0320 (size: 0x10)
    void OnTextChanged(FText Text);
    FWBP_ModifierSetting_EditableText_COnTextCommitted OnTextCommitted;               // 0x0330 (size: 0x10)
    void OnTextCommitted(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);

    void GetSettingLabel(FText& SettingText);
    void SetSettingLabel(FText InSettingText);
    void PreConstruct(bool IsDesignTime);
    void OnInitialized();
    void BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_WBP_ModifierSetting_EditableText(int32 EntryPoint);
    void OnTextCommitted__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnTextChanged__DelegateSignature(FText Text);
}; // Size: 0x340

#endif
