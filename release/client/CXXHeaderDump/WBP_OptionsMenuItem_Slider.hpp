#ifndef UE4SS_SDK_WBP_OptionsMenuItem_Slider_HPP
#define UE4SS_SDK_WBP_OptionsMenuItem_Slider_HPP

class UWBP_OptionsMenuItem_Slider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UTBSlider* OptionSlider;                                                    // 0x0238 (size: 0x8)
    class UTextBlock* OptionText;                                                     // 0x0240 (size: 0x8)
    class UTextBlock* SliderValueText;                                                // 0x0248 (size: 0x8)
    FText Text;                                                                       // 0x0250 (size: 0x18)
    FText TextDescription;                                                            // 0x0268 (size: 0x18)
    float InitialValue;                                                               // 0x0280 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0284 (size: 0x4)
    FWBP_OptionsMenuItem_Slider_CValueChanged ValueChanged;                           // 0x0288 (size: 0x10)
    void ValueChanged(float Value);
    float ValueMin;                                                                   // 0x0298 (size: 0x4)
    float ValueMax;                                                                   // 0x029C (size: 0x4)
    float ValueStepSize;                                                              // 0x02A0 (size: 0x4)
    char padding_1[0x4];                                                              // 0x02A4 (size: 0x4)
    TMap<float, FText> SpecialValues;                                                 // 0x02A8 (size: 0x50)
    bool bStepValuesOnly;                                                             // 0x02F8 (size: 0x1)
    bool bMouseUsesStep;                                                              // 0x02F9 (size: 0x1)
    bool bSnapToStepValue;                                                            // 0x02FA (size: 0x1)
    char padding_2[0x1];                                                              // 0x02FB (size: 0x1)
    int32 TextIntegralDigitsMin;                                                      // 0x02FC (size: 0x4)
    int32 TextIntegralDigitsMax;                                                      // 0x0300 (size: 0x4)
    int32 TextFractionalDigitsMin;                                                    // 0x0304 (size: 0x4)
    int32 TextFractionalDigitsMax;                                                    // 0x0308 (size: 0x4)
    bool bTextUsesGrouping;                                                           // 0x030C (size: 0x1)
    TEnumAsByte<ERoundingMode> TextRoundingMode;                                      // 0x030D (size: 0x1)
    char padding_3[0x2];                                                              // 0x030E (size: 0x2)
    FText TextSuffix;                                                                 // 0x0310 (size: 0x18)
    FText TextPrefix;                                                                 // 0x0328 (size: 0x18)
    FMargin SliderPadding;                                                            // 0x0340 (size: 0x10)
    FMargin OptionTextPadding;                                                        // 0x0350 (size: 0x10)

    void SetValueInternal(float InValue, bool bDirectSet);
    void DoesMouseUseStep(bool& bOutMouseUsesStep);
    void SetMouseUsesStep(bool bInMouseUsesStep);
    void SetValueStepSize(float NewStepSize);
    void SetValueMax(float NewMax);
    void SetValueMin(float NewMin);
    void UpdateSliderText(float NewValue);
    void GetNormalizedValue(float& ValueNormalized);
    void SetNormalizedValue(float InNormValue);
    void SetLocked(bool bInLocked);
    void IsLocked(bool& bOutLocked);
    void SetValue(float InValue);
    void GetValue(float& Value);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_WBP_OptionsMenuItem_Slider(int32 EntryPoint);
    void ValueChanged__DelegateSignature(float Value);
}; // Size: 0x360

#endif
