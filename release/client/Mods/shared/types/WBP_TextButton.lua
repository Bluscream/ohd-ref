---@meta

---@class UWBP_TextButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Button UButton
---@field ButtonText UTextBlock
---@field BtnText FText
---@field ButtonClicked FWBP_TextButton_CButtonClicked
---@field ButtonPressed FWBP_TextButton_CButtonPressed
---@field ButtonReleased FWBP_TextButton_CButtonReleased
---@field ButtonHovered FWBP_TextButton_CButtonHovered
---@field ButtonUnhovered FWBP_TextButton_CButtonUnhovered
---@field TextPadding FMargin
---@field TextColorNormal FSlateColor
---@field TextColorPressed FSlateColor
---@field TextColorHovered FSlateColor
---@field BtnStyle FButtonStyle
---@field TextFont FSlateFontInfo
---@field bUppercaseText boolean
---@field TextColorCustom FSlateColor
---@field bUseCustomTextColor boolean
UWBP_TextButton_C = {}

---@param IsDesignTime boolean
function UWBP_TextButton_C:PreConstruct(IsDesignTime) end
function UWBP_TextButton_C:BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_TextButton_C:BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature() end
function UWBP_TextButton_C:BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() end
function UWBP_TextButton_C:BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_TextButton_C:BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_TextButton_C:ExecuteUbergraph_WBP_TextButton(EntryPoint) end
function UWBP_TextButton_C:ButtonUnhovered__DelegateSignature() end
function UWBP_TextButton_C:ButtonHovered__DelegateSignature() end
function UWBP_TextButton_C:ButtonReleased__DelegateSignature() end
function UWBP_TextButton_C:ButtonPressed__DelegateSignature() end
function UWBP_TextButton_C:ButtonClicked__DelegateSignature() end


