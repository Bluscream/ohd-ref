---@meta

---@class UWBP_MainMenu_C : UDFBaseMenu
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MainMenuOpenUIAnim UWidgetAnimation
---@field BgSlot UNamedSlot
---@field CopyrightNoticeText UTextBlock
---@field CreditsNavBtn UWBP_MainMenu_NavBarButton_C
---@field ExitGameNavBtn UWBP_MainMenu_NavBarButton_C
---@field FooterBg UImage
---@field HomeNavBtn UWBP_MainMenu_NavBarButton_C
---@field LeaveGameNavBtn UWBP_MainMenu_NavBarButton_C
---@field Logo UImage
---@field MainMenuNavHBox UHorizontalBox
---@field ModsNavBtn UWBP_MainMenu_NavBarButton_C
---@field MultiplayerNavBtn UWBP_MainMenu_NavBarButton_C
---@field NavBarBg UImage
---@field NavBarWS UWidgetSwitcher
---@field OptionMenuContainer UBorder
---@field OptionsNavBtn UWBP_MainMenu_NavBarButton_C
---@field PauseExitGameNavBtn UWBP_MainMenu_NavBarButton_C
---@field PauseMenuNavHBox UHorizontalBox
---@field ResumeNavBtn UWBP_MainMenu_NavBarButton_C
---@field ShootingRangeNavBtn UWBP_MainMenu_NavBarButton_C
---@field SingleplayerNavBtn UWBP_MainMenu_NavBarButton_C
---@field SubNavBar USizeBox
---@field SubNavVBox UVerticalBox
---@field bPauseMenu boolean
---@field bShowPauseMenuInDesigner boolean
---@field MenuIndex int32
---@field bShowReferenceBackground boolean
---@field MenuBackgroundUWClass TSubclassOf<UUserWidget>
---@field PauseMenuBackgroundUWClass TSubclassOf<UUserWidget>
---@field LogoPosition FVector2D
---@field LogoBrush FSlateBrush
---@field CurrentSubMenuOptions TArray<FFSubMenuOption>
---@field CurrentOptionMenu UDFBaseMenu
---@field SubNavBtnPadding FMargin
---@field MenuMusic USoundBase
---@field MenuMusicAC UAudioComponent
---@field bShowShootingRangeBtn boolean
---@field ShootingRangeLevelName FName
UWBP_MainMenu_C = {}

function UWBP_MainMenu_C:PlayMenuMusic() end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_MainMenu_C:OnMouseWheel(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_MainMenu_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
function UWBP_MainMenu_C:TeardownSubNavBarClickEvents() end
function UWBP_MainMenu_C:SetupSubNavBarClickEvents() end
---@param bNewVisible boolean
function UWBP_MainMenu_C:ToggleSubNavBar(bNewVisible) end
function UWBP_MainMenu_C:ClearCurrentOptionMenu() end
---@param SubMenuOptions TArray<FFSubMenuOption>
function UWBP_MainMenu_C:PopulateSubNavBar(SubMenuOptions) end
function UWBP_MainMenu_C:ClearSubNavBarOptions() end
---@param NewOptionMenu TScriptInterface<IBPI_OptionMenu_C>
function UWBP_MainMenu_C:UpdateSubNavBarOptions(NewOptionMenu) end
---@param HBoxToUse UHorizontalBox
function UWBP_MainMenu_C:GetNavBarHBox(HBoxToUse) end
---@param NewOptionMenuClass TSubclassOf<UDFBaseMenu>
---@param IsDesignTime boolean
function UWBP_MainMenu_C:SetOptionMenu(NewOptionMenuClass, IsDesignTime) end
---@param Count int32
function UWBP_MainMenu_C:GetNavBtnCount(Count) end
function UWBP_MainMenu_C:SetupCopyrightNotice() end
---@param NewIndex int32
---@param NewOptionMenuClass TSubclassOf<UDFBaseMenu>
---@param IsDesignTime boolean
function UWBP_MainMenu_C:SetActiveMenu(NewIndex, NewOptionMenuClass, IsDesignTime) end
function UWBP_MainMenu_C:SetupNavBarClickEvents() end
function UWBP_MainMenu_C:SetupMenuBackgroundWidget() end
---@param bIsDesignTime boolean
function UWBP_MainMenu_C:InitMenuState(bIsDesignTime) end
function UWBP_MainMenu_C:Construct() end
---@param ClickedBtn UWBP_MainMenu_NavBarButton_C
function UWBP_MainMenu_C:OnNavBtnClicked(ClickedBtn) end
---@param ClickedBtn UWBP_MainMenu_NavBarButton_C
function UWBP_MainMenu_C:BndEvt__ResumeNavBtn_K2Node_ComponentBoundEvent_11_ButtonClicked__DelegateSignature(ClickedBtn) end
---@param IsDesignTime boolean
function UWBP_MainMenu_C:PreConstruct(IsDesignTime) end
---@param ClickedBtn UWBP_MainMenu_NavBarButton_C
function UWBP_MainMenu_C:BndEvt__ReturnToMenuNavBtn_K2Node_ComponentBoundEvent_12_ButtonClicked__DelegateSignature(ClickedBtn) end
---@param ClickedBtn UWBP_MenuSubNavSelectionListEntry_C
function UWBP_MainMenu_C:OnSubNavBtnClicked(ClickedBtn) end
function UWBP_MainMenu_C:OnPauseMenuPressed() end
---@param ClickedBtn UWBP_MainMenu_NavBarButton_C
function UWBP_MainMenu_C:BndEvt__ShootingRangeNavBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature(ClickedBtn) end
function UWBP_MainMenu_C:OnInitialized() end
---@param ClickedBtn UWBP_MainMenu_NavBarButton_C
function UWBP_MainMenu_C:BndEvt__ExitGameNavBtn_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature(ClickedBtn) end
---@param ClickedBtn UWBP_MainMenu_NavBarButton_C
function UWBP_MainMenu_C:BndEvt__PauseExitGameNavBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature(ClickedBtn) end
---@param EntryPoint int32
function UWBP_MainMenu_C:ExecuteUbergraph_WBP_MainMenu(EntryPoint) end


