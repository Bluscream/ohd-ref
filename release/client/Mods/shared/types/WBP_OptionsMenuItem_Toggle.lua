---@meta

---@class UWBP_OptionsMenuItem_Toggle_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OptionText UTextBlock
---@field OptionToggle UWBP_Toggle_C
---@field Text FText
---@field TextTooltip FText
---@field ToggleStateChanged FWBP_OptionsMenuItem_Toggle_CToggleStateChanged
---@field OnText FText
---@field OffText FText
UWBP_OptionsMenuItem_Toggle_C = {}

---@param bToggledOn boolean
function UWBP_OptionsMenuItem_Toggle_C:IsToggledOn(bToggledOn) end
---@param bInToggle boolean
function UWBP_OptionsMenuItem_Toggle_C:SetToggle(bInToggle) end
---@param IsDesignTime boolean
function UWBP_OptionsMenuItem_Toggle_C:PreConstruct(IsDesignTime) end
---@param bToggledOn boolean
function UWBP_OptionsMenuItem_Toggle_C:BndEvt__OptionToggle_K2Node_ComponentBoundEvent_2_ToggleStateChanged__DelegateSignature(bToggledOn) end
---@param EntryPoint int32
function UWBP_OptionsMenuItem_Toggle_C:ExecuteUbergraph_WBP_OptionsMenuItem_Toggle(EntryPoint) end
---@param bToggledOn boolean
function UWBP_OptionsMenuItem_Toggle_C:ToggleStateChanged__DelegateSignature(bToggledOn) end


