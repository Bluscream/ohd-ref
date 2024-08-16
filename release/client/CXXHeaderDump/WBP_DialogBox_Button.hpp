#ifndef UE4SS_SDK_WBP_DialogBox_Button_HPP
#define UE4SS_SDK_WBP_DialogBox_Button_HPP

class UWBP_DialogBox_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UButton* DlgBtn;                                                            // 0x0238 (size: 0x8)
    class UTextBlock* DlgText;                                                        // 0x0240 (size: 0x8)
    FText BtnText;                                                                    // 0x0248 (size: 0x18)
    FWBP_DialogBox_Button_CButtonClicked ButtonClicked;                               // 0x0260 (size: 0x10)
    void ButtonClicked(class UWBP_DialogBox_Button_C* ClickedBtn);
    bool bActive;                                                                     // 0x0270 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0271 (size: 0x7)
    FSlateColor TextColor;                                                            // 0x0278 (size: 0x28)
    FSlateColor TextColorActive;                                                      // 0x02A0 (size: 0x28)
    FSlateColor BtnTint;                                                              // 0x02C8 (size: 0x28)
    FSlateColor TextColorPressed;                                                     // 0x02F0 (size: 0x28)
    FSlateColor TextColorHovered;                                                     // 0x0318 (size: 0x28)

    void UpdateAppearance();
    void SetActive(bool bNewActive);
    void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_DialogBox_Button(int32 EntryPoint);
    void ButtonClicked__DelegateSignature(class UWBP_DialogBox_Button_C* ClickedBtn);
}; // Size: 0x340

#endif
