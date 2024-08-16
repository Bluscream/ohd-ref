---@meta

---@class UWBP_OptionsMenuItem_InputKeySelector_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OptionIKS UWBP_InputKeySelector_C
---@field OptionText UTextBlock
---@field Text FText
---@field TextDescription FText
---@field InputName FName
---@field OnKeySelected FWBP_OptionsMenuItem_InputKeySelector_COnKeySelected
---@field InputScale float
---@field MappedKey FKey
---@field OnIsSelectingKeyChanged FWBP_OptionsMenuItem_InputKeySelector_COnIsSelectingKeyChanged
UWBP_OptionsMenuItem_InputKeySelector_C = {}

---@param IsSelecting boolean
function UWBP_OptionsMenuItem_InputKeySelector_C:IsSelectingKey(IsSelecting) end
---@param IKS UWBP_OptionsMenuItem_InputKeySelector_C
---@param NewKey FKey
---@param bIsPlayerChangingKeyBindings boolean
function UWBP_OptionsMenuItem_InputKeySelector_C:ClearSelectedKey(IKS, NewKey, bIsPlayerChangingKeyBindings) end
---@param SelectedKey FKey
function UWBP_OptionsMenuItem_InputKeySelector_C:SetSelectedKey(SelectedKey) end
---@param SelectedKey FKey
function UWBP_OptionsMenuItem_InputKeySelector_C:GetSelectedKey(SelectedKey) end
---@param IsDesignTime boolean
function UWBP_OptionsMenuItem_InputKeySelector_C:PreConstruct(IsDesignTime) end
---@param SelectedKey FInputChord
function UWBP_OptionsMenuItem_InputKeySelector_C:BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(SelectedKey) end
function UWBP_OptionsMenuItem_InputKeySelector_C:BndEvt__OptionIKS_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature() end
---@param EntryPoint int32
function UWBP_OptionsMenuItem_InputKeySelector_C:ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector(EntryPoint) end
function UWBP_OptionsMenuItem_InputKeySelector_C:OnIsSelectingKeyChanged__DelegateSignature() end
---@param SelectedKey FInputChord
function UWBP_OptionsMenuItem_InputKeySelector_C:OnKeySelected__DelegateSignature(SelectedKey) end


