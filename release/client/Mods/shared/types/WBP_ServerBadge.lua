---@meta

---@class UWBP_ServerBadge_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BadgeIcon UImage
---@field BadgeUIDefinition FFServerBadgeUIDefinition
UWBP_ServerBadge_C = {}

---@param IsDesignTime boolean
function UWBP_ServerBadge_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_ServerBadge_C:ExecuteUbergraph_WBP_ServerBadge(EntryPoint) end


