#ifndef UE4SS_SDK_WBP_ModifierSetting_Numeric_HPP
#define UE4SS_SDK_WBP_ModifierSetting_Numeric_HPP

class UWBP_ModifierSetting_Numeric_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_ModifierSettingBox_C* ModifierSetting;                                 // 0x0238 (size: 0x8)
    class UTextBlock* NumericHintText;                                                // 0x0240 (size: 0x8)
    class USpinBox* NumericSpinBox;                                                   // 0x0248 (size: 0x8)
    FText SettingText;                                                                // 0x0250 (size: 0x18)
    TMap<float, FText> MagicValues;                                                   // 0x0268 (size: 0x50)
    FText MagicValueText;                                                             // 0x02B8 (size: 0x18)
    float ValueSnapDelta;                                                             // 0x02D0 (size: 0x4)
    float ValueInitial;                                                               // 0x02D4 (size: 0x4)
    FFNumericModifierValueBound ValueMinInitial;                                      // 0x02D8 (size: 0x8)
    FFNumericModifierValueBound ValueMaxInitial;                                      // 0x02E0 (size: 0x8)
    FSlateColor VisibleSpinBoxForegroundColor;                                        // 0x02E8 (size: 0x28)
    int32 MinFractionalDigitsInitial;                                                 // 0x0310 (size: 0x4)
    int32 MaxFractionalDigitsInitial;                                                 // 0x0314 (size: 0x4)
    FSlateColor HiddenSpinBoxForegroundColor;                                         // 0x0318 (size: 0x28)
    FWBP_ModifierSetting_Numeric_COnValueChanged OnValueChanged;                      // 0x0340 (size: 0x10)
    void OnValueChanged(float InValue);
    FWBP_ModifierSetting_Numeric_COnValueCommitted OnValueCommitted;                  // 0x0350 (size: 0x10)
    void OnValueCommitted(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);

    void UpdateMagicValueState();
    void GetValueSnapDelta(float& Delta);
    void SetValueSnapDelta(float InDelta);
    void GetValue(float& Value);
    void SetValue(float InValue);
    void GetMagicValueText(FText& MagicValueText);
    void SetMagicValueText(FText InMagicValueText);
    void GetSettingText(FText& SettingText);
    void SetSettingText(FText InSettingText);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_WBP_ModifierSetting_Numeric(int32 EntryPoint);
    void OnValueCommitted__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnValueChanged__DelegateSignature(float InValue);
}; // Size: 0x360

#endif
