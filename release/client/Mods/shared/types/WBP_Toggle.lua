---@meta

---@class UWBP_Toggle_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OffBtn UWBP_TextButton_C
---@field OnBtn UWBP_TextButton_C
---@field bToggleOn boolean
---@field ToggleStateChanged FWBP_Toggle_CToggleStateChanged
---@field OnText FText
---@field OffText FText
UWBP_Toggle_C = {}

function UWBP_Toggle_C:UpdateDesignerView() end
---@param bToggledOn boolean
function UWBP_Toggle_C:IsToggledOn(bToggledOn) end
---@param bInToggle boolean
function UWBP_Toggle_C:SetToggle(bInToggle) end
function UWBP_Toggle_C:BndEvt__OnBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature() end
function UWBP_Toggle_C:BndEvt__OffBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature() end
---@param IsDesignTime boolean
function UWBP_Toggle_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_Toggle_C:ExecuteUbergraph_WBP_Toggle(EntryPoint) end
---@param bToggledOn boolean
function UWBP_Toggle_C:ToggleStateChanged__DelegateSignature(bToggledOn) end


