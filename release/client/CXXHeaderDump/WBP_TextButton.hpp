#ifndef UE4SS_SDK_WBP_TextButton_HPP
#define UE4SS_SDK_WBP_TextButton_HPP

class UWBP_TextButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UButton* Button;                                                            // 0x0238 (size: 0x8)
    class UTextBlock* ButtonText;                                                     // 0x0240 (size: 0x8)
    FText BtnText;                                                                    // 0x0248 (size: 0x18)
    FWBP_TextButton_CButtonClicked ButtonClicked;                                     // 0x0260 (size: 0x10)
    void ButtonClicked();
    FWBP_TextButton_CButtonPressed ButtonPressed;                                     // 0x0270 (size: 0x10)
    void ButtonPressed();
    FWBP_TextButton_CButtonReleased ButtonReleased;                                   // 0x0280 (size: 0x10)
    void ButtonReleased();
    FWBP_TextButton_CButtonHovered ButtonHovered;                                     // 0x0290 (size: 0x10)
    void ButtonHovered();
    FWBP_TextButton_CButtonUnhovered ButtonUnhovered;                                 // 0x02A0 (size: 0x10)
    void ButtonUnhovered();
    FMargin TextPadding;                                                              // 0x02B0 (size: 0x10)
    FSlateColor TextColorNormal;                                                      // 0x02C0 (size: 0x28)
    FSlateColor TextColorPressed;                                                     // 0x02E8 (size: 0x28)
    FSlateColor TextColorHovered;                                                     // 0x0310 (size: 0x28)
    FButtonStyle BtnStyle;                                                            // 0x0338 (size: 0x278)
    FSlateFontInfo TextFont;                                                          // 0x05B0 (size: 0x50)
    bool bUppercaseText;                                                              // 0x0600 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0601 (size: 0x7)
    FSlateColor TextColorCustom;                                                      // 0x0608 (size: 0x28)
    bool bUseCustomTextColor;                                                         // 0x0630 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_TextButton(int32 EntryPoint);
    void ButtonUnhovered__DelegateSignature();
    void ButtonHovered__DelegateSignature();
    void ButtonReleased__DelegateSignature();
    void ButtonPressed__DelegateSignature();
    void ButtonClicked__DelegateSignature();
}; // Size: 0x631

#endif
