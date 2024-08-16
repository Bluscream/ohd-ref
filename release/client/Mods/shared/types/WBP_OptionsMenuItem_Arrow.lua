---@meta

---@class UWBP_OptionsMenuItem_Arrow_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NextOptionBtn UButton
---@field OptionText UTextBlock
---@field PrevOptionBtn UButton
---@field SelectedOptionSizeBox USizeBox
---@field SelectedOptionText UTextBlock
---@field Text FText
---@field Options TArray<FFOptionItemSelection>
---@field SelectedOptionIndex int32
---@field OnSelectionChanged FWBP_OptionsMenuItem_Arrow_COnSelectionChanged
---@field TextDescription FText
---@field TextWidth float
---@field OptionsPreset EArrowOptionsPreset::Type
---@field ScalabilityOptions TArray<FFOptionItemSelection>
---@field OnSelectionChangedByUser FWBP_OptionsMenuItem_Arrow_COnSelectionChangedByUser
UWBP_OptionsMenuItem_Arrow_C = {}

---@param OptionDisplayName FText
---@param Index int32
function UWBP_OptionsMenuItem_Arrow_C:FindOptionIndex(OptionDisplayName, Index) end
---@param OptionDisplayName FText
function UWBP_OptionsMenuItem_Arrow_C:SetSelectedOption(OptionDisplayName) end
---@param OptionValue FString
function UWBP_OptionsMenuItem_Arrow_C:SetSelectedOptionByValue(OptionValue) end
---@param Preset EArrowOptionsPreset::Type
function UWBP_OptionsMenuItem_Arrow_C:PopulateOptionsByPreset(Preset) end
---@param OptionValue FString
---@param Index int32
function UWBP_OptionsMenuItem_Arrow_C:FindOptionValueIndex(OptionValue, Index) end
---@param Index int32
function UWBP_OptionsMenuItem_Arrow_C:SetSelectedOptionByIndex(Index) end
function UWBP_OptionsMenuItem_Arrow_C:ClearSelection() end
---@param DeselectionType ESelectInfo::Type
function UWBP_OptionsMenuItem_Arrow_C:INTERNAL_ClearSelection(DeselectionType) end
---@param IndexToRemove int32
---@param bRemovalSuccess boolean
function UWBP_OptionsMenuItem_Arrow_C:RemoveOptionAtIndex(IndexToRemove, bRemovalSuccess) end
---@param OptionCount int32
function UWBP_OptionsMenuItem_Arrow_C:GetOptionCount(OptionCount) end
---@param NewOption FFOptionItemSelection
function UWBP_OptionsMenuItem_Arrow_C:AddOption(NewOption) end
---@param Index int32
---@param OptionValue FString
function UWBP_OptionsMenuItem_Arrow_C:GetOptionValueAtIndex(Index, OptionValue) end
---@param OptionValue FString
function UWBP_OptionsMenuItem_Arrow_C:GetSelectedOptionValue(OptionValue) end
---@param Index int32
---@param SelectionType ESelectInfo::Type
function UWBP_OptionsMenuItem_Arrow_C:INTERNAL_SetSelectedOptionByIndex(Index, SelectionType) end
function UWBP_OptionsMenuItem_Arrow_C:ClearOptions() end
function UWBP_OptionsMenuItem_Arrow_C:BndEvt__PrevOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_OptionsMenuItem_Arrow_C:BndEvt__NextOptionBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UWBP_OptionsMenuItem_Arrow_C:PreConstruct(IsDesignTime) end
function UWBP_OptionsMenuItem_Arrow_C:Construct() end
---@param SelectedItemValue FString
---@param SelectionType ESelectInfo::Type
function UWBP_OptionsMenuItem_Arrow_C:OnItemSelectionChanged(SelectedItemValue, SelectionType) end
---@param EntryPoint int32
function UWBP_OptionsMenuItem_Arrow_C:ExecuteUbergraph_WBP_OptionsMenuItem_Arrow(EntryPoint) end
---@param SelectedItemValue FString
function UWBP_OptionsMenuItem_Arrow_C:OnSelectionChangedByUser__DelegateSignature(SelectedItemValue) end
---@param SelectedItemValue FString
---@param SelectionType ESelectInfo::Type
function UWBP_OptionsMenuItem_Arrow_C:OnSelectionChanged__DelegateSignature(SelectedItemValue, SelectionType) end


