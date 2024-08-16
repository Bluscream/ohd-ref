---@meta

---@class UWBP_SQMemberOption_C : UWBP_HDContextualWidgetBase_C
---@field InsertContentHere UNamedSlot
---@field ParentContainer UWBP_DeployMenu_SquadMemberListing_C
---@field ParentMemberInfo USquadMemberInfo
UWBP_SQMemberOption_C = {}

---@param MemberInfo USquadMemberInfo
function UWBP_SQMemberOption_C:GetParentMemberInfo(MemberInfo) end
---@param InMemberInfo USquadMemberInfo
function UWBP_SQMemberOption_C:SetupOption(InMemberInfo) end


