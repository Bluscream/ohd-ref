---@meta

---@class UWBP_DialogBox_Button_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DlgBtn UButton
---@field DlgText UTextBlock
---@field BtnText FText
---@field ButtonClicked FWBP_DialogBox_Button_CButtonClicked
---@field bActive boolean
---@field TextColor FSlateColor
---@field TextColorActive FSlateColor
---@field BtnTint FSlateColor
---@field TextColorPressed FSlateColor
---@field TextColorHovered FSlateColor
UWBP_DialogBox_Button_C = {}

function UWBP_DialogBox_Button_C:UpdateAppearance() end
---@param bNewActive boolean
function UWBP_DialogBox_Button_C:SetActive(bNewActive) end
function UWBP_DialogBox_Button_C:BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_DialogBox_Button_C:BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature() end
function UWBP_DialogBox_Button_C:BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() end
function UWBP_DialogBox_Button_C:BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_DialogBox_Button_C:BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UWBP_DialogBox_Button_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_DialogBox_Button_C:ExecuteUbergraph_WBP_DialogBox_Button(EntryPoint) end
---@param ClickedBtn UWBP_DialogBox_Button_C
function UWBP_DialogBox_Button_C:ButtonClicked__DelegateSignature(ClickedBtn) end


