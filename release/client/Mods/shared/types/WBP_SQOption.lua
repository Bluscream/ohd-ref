---@meta

---@class UWBP_SQOption_C : UWBP_HDContextualWidgetBase_C
---@field InsertContentHere UNamedSlot
---@field ParentContainer UWBP_DeployMenu_SquadList_C
---@field ParentSquadData USquadListEntry
UWBP_SQOption_C = {}

---@param SquadData USquadListEntry
function UWBP_SQOption_C:GetParentSquadData(SquadData) end
---@param InSquadData USquadListEntry
function UWBP_SQOption_C:SetupOption(InSquadData) end


