---@meta

---@class UWBP_Checkbox_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CBox UCheckBox
---@field CheckStateChanged FWBP_Checkbox_CCheckStateChanged
---@field CheckStateChangedBool FWBP_Checkbox_CCheckStateChangedBool
UWBP_Checkbox_C = {}

---@param NewCheckedState ECheckBoxState
function UWBP_Checkbox_C:SetCheckedState(NewCheckedState) end
---@param bChecked boolean
function UWBP_Checkbox_C:SetIsChecked(bChecked) end
---@param bChecked boolean
function UWBP_Checkbox_C:IsChecked(bChecked) end
---@param CheckedState ECheckBoxState
function UWBP_Checkbox_C:GetCheckedState(CheckedState) end
---@param bIsChecked boolean
function UWBP_Checkbox_C:BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bIsChecked) end
---@param EntryPoint int32
function UWBP_Checkbox_C:ExecuteUbergraph_WBP_Checkbox(EntryPoint) end
---@param bChecked boolean
function UWBP_Checkbox_C:CheckStateChangedBool__DelegateSignature(bChecked) end
---@param CheckedState ECheckBoxState
function UWBP_Checkbox_C:CheckStateChanged__DelegateSignature(CheckedState) end


