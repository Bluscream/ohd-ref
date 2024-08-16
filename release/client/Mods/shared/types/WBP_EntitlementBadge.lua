---@meta

---@class UWBP_EntitlementBadge_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BadgeIcon UImage
---@field BadgeUIDefinition FFEntitlementBadgeUIDefinition
UWBP_EntitlementBadge_C = {}

---@param IsDesignTime boolean
function UWBP_EntitlementBadge_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_EntitlementBadge_C:ExecuteUbergraph_WBP_EntitlementBadge(EntryPoint) end


