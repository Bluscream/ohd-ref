#ifndef UE4SS_SDK_WBP_MainMenu_NavBarButton_HPP
#define UE4SS_SDK_WBP_MainMenu_NavBarButton_HPP

class UWBP_MainMenu_NavBarButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UButton* NavBarBtn;                                                         // 0x0238 (size: 0x8)
    class UTextBlock* NavBarText;                                                     // 0x0240 (size: 0x8)
    bool bHasAssociatedOptionMenu;                                                    // 0x0248 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0249 (size: 0x7)
    TSubclassOf<class UDFBaseMenu> OptionMenuClass;                                   // 0x0250 (size: 0x8)
    FText BtnText;                                                                    // 0x0258 (size: 0x18)
    FWBP_MainMenu_NavBarButton_CButtonClicked ButtonClicked;                          // 0x0270 (size: 0x10)
    void ButtonClicked(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
    bool bActive;                                                                     // 0x0280 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0281 (size: 0x3)
    FMargin TextPadding;                                                              // 0x0284 (size: 0x10)
    bool bDisabledInDemoBuilds;                                                       // 0x0294 (size: 0x1)
    bool bHiddenInDemoBuilds;                                                         // 0x0295 (size: 0x1)
    char padding_2[0x2];                                                              // 0x0296 (size: 0x2)
    FSlateColor TextColor;                                                            // 0x0298 (size: 0x28)
    FSlateColor TextColorActive;                                                      // 0x02C0 (size: 0x28)
    bool bUseBtnTint;                                                                 // 0x02E8 (size: 0x1)
    char padding_3[0x7];                                                              // 0x02E9 (size: 0x7)
    FSlateColor BtnTint;                                                              // 0x02F0 (size: 0x28)
    FSlateColor TextColorPressed;                                                     // 0x0318 (size: 0x28)
    FSlateColor TextColorHovered;                                                     // 0x0340 (size: 0x28)

    void UpdateAppearance();
    void SetActive(bool bNewActive);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void OnInitialized();
    void ExecuteUbergraph_WBP_MainMenu_NavBarButton(int32 EntryPoint);
    void ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
}; // Size: 0x368

#endif
