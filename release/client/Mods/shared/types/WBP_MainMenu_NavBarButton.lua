---@meta

---@class UWBP_MainMenu_NavBarButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NavBarBtn UButton
---@field NavBarText UTextBlock
---@field bHasAssociatedOptionMenu boolean
---@field OptionMenuClass TSubclassOf<UDFBaseMenu>
---@field BtnText FText
---@field ButtonClicked FWBP_MainMenu_NavBarButton_CButtonClicked
---@field bActive boolean
---@field TextPadding FMargin
---@field bDisabledInDemoBuilds boolean
---@field bHiddenInDemoBuilds boolean
---@field TextColor FSlateColor
---@field TextColorActive FSlateColor
---@field bUseBtnTint boolean
---@field BtnTint FSlateColor
---@field TextColorPressed FSlateColor
---@field TextColorHovered FSlateColor
UWBP_MainMenu_NavBarButton_C = {}

function UWBP_MainMenu_NavBarButton_C:UpdateAppearance() end
---@param bNewActive boolean
function UWBP_MainMenu_NavBarButton_C:SetActive(bNewActive) end
---@param IsDesignTime boolean
function UWBP_MainMenu_NavBarButton_C:PreConstruct(IsDesignTime) end
function UWBP_MainMenu_NavBarButton_C:BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_MainMenu_NavBarButton_C:BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature() end
function UWBP_MainMenu_NavBarButton_C:BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() end
function UWBP_MainMenu_NavBarButton_C:BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_MainMenu_NavBarButton_C:BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UWBP_MainMenu_NavBarButton_C:OnInitialized() end
---@param EntryPoint int32
function UWBP_MainMenu_NavBarButton_C:ExecuteUbergraph_WBP_MainMenu_NavBarButton(EntryPoint) end
---@param ClickedBtn UWBP_MainMenu_NavBarButton_C
function UWBP_MainMenu_NavBarButton_C:ButtonClicked__DelegateSignature(ClickedBtn) end


