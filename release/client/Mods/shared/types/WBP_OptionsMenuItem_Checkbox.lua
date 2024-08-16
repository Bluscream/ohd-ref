---@meta

---@class UWBP_OptionsMenuItem_Checkbox_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OptionCBox UWBP_Checkbox_C
---@field OptionText UTextBlock
---@field Text FText
---@field CheckStateChanged FWBP_OptionsMenuItem_Checkbox_CCheckStateChanged
---@field CheckStateChangedBool FWBP_OptionsMenuItem_Checkbox_CCheckStateChangedBool
---@field TextDescription FText
UWBP_OptionsMenuItem_Checkbox_C = {}

---@param NewCheckedState ECheckBoxState
function UWBP_OptionsMenuItem_Checkbox_C:SetCheckedState(NewCheckedState) end
---@param bChecked boolean
function UWBP_OptionsMenuItem_Checkbox_C:SetIsChecked(bChecked) end
---@param bChecked boolean
function UWBP_OptionsMenuItem_Checkbox_C:IsChecked(bChecked) end
---@param CheckedState ECheckBoxState
function UWBP_OptionsMenuItem_Checkbox_C:GetCheckedState(CheckedState) end
---@param IsDesignTime boolean
function UWBP_OptionsMenuItem_Checkbox_C:PreConstruct(IsDesignTime) end
---@param CheckedState ECheckBoxState
function UWBP_OptionsMenuItem_Checkbox_C:BndEvt__OptionCBox_K2Node_ComponentBoundEvent_0_CheckStateChanged__DelegateSignature(CheckedState) end
---@param bChecked boolean
function UWBP_OptionsMenuItem_Checkbox_C:BndEvt__OptionCBox_K2Node_ComponentBoundEvent_1_CheckStateChangedBool__DelegateSignature(bChecked) end
---@param EntryPoint int32
function UWBP_OptionsMenuItem_Checkbox_C:ExecuteUbergraph_WBP_OptionsMenuItem_Checkbox(EntryPoint) end
---@param bChecked boolean
function UWBP_OptionsMenuItem_Checkbox_C:CheckStateChangedBool__DelegateSignature(bChecked) end
---@param CheckedState ECheckBoxState
function UWBP_OptionsMenuItem_Checkbox_C:CheckStateChanged__DelegateSignature(CheckedState) end


