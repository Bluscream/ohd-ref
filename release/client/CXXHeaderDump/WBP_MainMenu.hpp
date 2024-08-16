#ifndef UE4SS_SDK_WBP_MainMenu_HPP
#define UE4SS_SDK_WBP_MainMenu_HPP

class UWBP_MainMenu_C : public UDFBaseMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UWidgetAnimation* MainMenuOpenUIAnim;                                       // 0x0240 (size: 0x8)
    class UNamedSlot* BgSlot;                                                         // 0x0248 (size: 0x8)
    class UTextBlock* CopyrightNoticeText;                                            // 0x0250 (size: 0x8)
    class UWBP_MainMenu_NavBarButton_C* CreditsNavBtn;                                // 0x0258 (size: 0x8)
    class UWBP_MainMenu_NavBarButton_C* ExitGameNavBtn;                               // 0x0260 (size: 0x8)
    class UImage* FooterBg;                                                           // 0x0268 (size: 0x8)
    class UWBP_MainMenu_NavBarButton_C* HomeNavBtn;                                   // 0x0270 (size: 0x8)
    class UWBP_MainMenu_NavBarButton_C* LeaveGameNavBtn;                              // 0x0278 (size: 0x8)
    class UImage* Logo;                                                               // 0x0280 (size: 0x8)
    class UHorizontalBox* MainMenuNavHBox;                                            // 0x0288 (size: 0x8)
    class UWBP_MainMenu_NavBarButton_C* ModsNavBtn;                                   // 0x0290 (size: 0x8)
    class UWBP_MainMenu_NavBarButton_C* MultiplayerNavBtn;                            // 0x0298 (size: 0x8)
    class UImage* NavBarBg;                                                           // 0x02A0 (size: 0x8)
    class UWidgetSwitcher* NavBarWS;                                                  // 0x02A8 (size: 0x8)
    class UBorder* OptionMenuContainer;                                               // 0x02B0 (size: 0x8)
    class UWBP_MainMenu_NavBarButton_C* OptionsNavBtn;                                // 0x02B8 (size: 0x8)
    class UWBP_MainMenu_NavBarButton_C* PauseExitGameNavBtn;                          // 0x02C0 (size: 0x8)
    class UHorizontalBox* PauseMenuNavHBox;                                           // 0x02C8 (size: 0x8)
    class UWBP_MainMenu_NavBarButton_C* ResumeNavBtn;                                 // 0x02D0 (size: 0x8)
    class UWBP_MainMenu_NavBarButton_C* ShootingRangeNavBtn;                          // 0x02D8 (size: 0x8)
    class UWBP_MainMenu_NavBarButton_C* SingleplayerNavBtn;                           // 0x02E0 (size: 0x8)
    class USizeBox* SubNavBar;                                                        // 0x02E8 (size: 0x8)
    class UVerticalBox* SubNavVBox;                                                   // 0x02F0 (size: 0x8)
    bool bPauseMenu;                                                                  // 0x02F8 (size: 0x1)
    bool bShowPauseMenuInDesigner;                                                    // 0x02F9 (size: 0x1)
    char padding_0[0x2];                                                              // 0x02FA (size: 0x2)
    int32 MenuIndex;                                                                  // 0x02FC (size: 0x4)
    bool bShowReferenceBackground;                                                    // 0x0300 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0301 (size: 0x7)
    TSubclassOf<class UUserWidget> MenuBackgroundUWClass;                             // 0x0308 (size: 0x8)
    TSubclassOf<class UUserWidget> PauseMenuBackgroundUWClass;                        // 0x0310 (size: 0x8)
    FVector2D LogoPosition;                                                           // 0x0318 (size: 0x8)
    FSlateBrush LogoBrush;                                                            // 0x0320 (size: 0x88)
    TArray<FFSubMenuOption> CurrentSubMenuOptions;                                    // 0x03A8 (size: 0x10)
    class UDFBaseMenu* CurrentOptionMenu;                                             // 0x03B8 (size: 0x8)
    FMargin SubNavBtnPadding;                                                         // 0x03C0 (size: 0x10)
    class USoundBase* MenuMusic;                                                      // 0x03D0 (size: 0x8)
    class UAudioComponent* MenuMusicAC;                                               // 0x03D8 (size: 0x8)
    bool bShowShootingRangeBtn;                                                       // 0x03E0 (size: 0x1)
    char padding_2[0x3];                                                              // 0x03E1 (size: 0x3)
    FName ShootingRangeLevelName;                                                     // 0x03E4 (size: 0x8)

    void PlayMenuMusic();
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void TeardownSubNavBarClickEvents();
    void SetupSubNavBarClickEvents();
    void ToggleSubNavBar(bool bNewVisible);
    void ClearCurrentOptionMenu();
    void PopulateSubNavBar(TArray<FFSubMenuOption>& SubMenuOptions);
    void ClearSubNavBarOptions();
    void UpdateSubNavBarOptions(TScriptInterface<class IBPI_OptionMenu_C> NewOptionMenu);
    void GetNavBarHBox(class UHorizontalBox*& HBoxToUse);
    void SetOptionMenu(TSubclassOf<class UDFBaseMenu> NewOptionMenuClass, bool IsDesignTime);
    void GetNavBtnCount(int32& Count);
    void SetupCopyrightNotice();
    void SetActiveMenu(int32 NewIndex, TSubclassOf<class UDFBaseMenu> NewOptionMenuClass, bool IsDesignTime);
    void SetupNavBarClickEvents();
    void SetupMenuBackgroundWidget();
    void InitMenuState(bool bIsDesignTime);
    void Construct();
    void OnNavBtnClicked(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
    void BndEvt__ResumeNavBtn_K2Node_ComponentBoundEvent_11_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ReturnToMenuNavBtn_K2Node_ComponentBoundEvent_12_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
    void OnSubNavBtnClicked(class UWBP_MenuSubNavSelectionListEntry_C* ClickedBtn);
    void OnPauseMenuPressed();
    void BndEvt__ShootingRangeNavBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
    void OnInitialized();
    void BndEvt__ExitGameNavBtn_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
    void BndEvt__PauseExitGameNavBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
    void ExecuteUbergraph_WBP_MainMenu(int32 EntryPoint);
}; // Size: 0x3EC

#endif
