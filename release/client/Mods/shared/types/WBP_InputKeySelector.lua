---@meta

---@class UWBP_InputKeySelector_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field IKS UInputKeySelector
---@field OnKeySelected FWBP_InputKeySelector_COnKeySelected
---@field OnIsSelectingKeyChanged FWBP_InputKeySelector_COnIsSelectingKeyChanged
UWBP_InputKeySelector_C = {}

---@param SelectedKey FKey
function UWBP_InputKeySelector_C:SetSelectedKey(SelectedKey) end
---@param SelectedKey FKey
function UWBP_InputKeySelector_C:GetSelectedKey(SelectedKey) end
function UWBP_InputKeySelector_C:BndEvt__IKS_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature() end
---@param SelectedKey FInputChord
function UWBP_InputKeySelector_C:BndEvt__IKS_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(SelectedKey) end
---@param EntryPoint int32
function UWBP_InputKeySelector_C:ExecuteUbergraph_WBP_InputKeySelector(EntryPoint) end
function UWBP_InputKeySelector_C:OnIsSelectingKeyChanged__DelegateSignature() end
---@param SelectedKey FInputChord
function UWBP_InputKeySelector_C:OnKeySelected__DelegateSignature(SelectedKey) end


