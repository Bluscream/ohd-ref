---@meta

---@class UWBP_HDContextualWidgetBase_C : UDFContextualWidgetBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisibilitySatisfiedPrereqs ESlateVisibility
---@field bIsEnabledSatisfiedPrereqs boolean
---@field VisibilityUnsatisfiedPrereqs ESlateVisibility
---@field bIsEnabledUnsatisfiedPrereqs boolean
UWBP_HDContextualWidgetBase_C = {}

function UWBP_HDContextualWidgetBase_C:PrerequisitesMet() end
---@param FailedPrereq UDFContextualWidgetPrerequisiteBase
function UWBP_HDContextualWidgetBase_C:PrerequisiteNotMet(FailedPrereq) end
---@param EntryPoint int32
function UWBP_HDContextualWidgetBase_C:ExecuteUbergraph_WBP_HDContextualWidgetBase(EntryPoint) end


