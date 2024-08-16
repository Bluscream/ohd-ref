---@meta

---@class UBP_ContextWidgetPrereq_ExcludeSquadLeader_C : UDFContextualWidgetPrerequisiteBase
---@field MemberSQState AHDSquadState
---@field MemberPSToTest AHDPlayerState
---@field bInitialized boolean
UBP_ContextWidgetPrereq_ExcludeSquadLeader_C = {}

---@param bValidData boolean
function UBP_ContextWidgetPrereq_ExcludeSquadLeader_C:IsValidContext(bValidData) end
---@return boolean
function UBP_ContextWidgetPrereq_ExcludeSquadLeader_C:SatisfiesPrerequisite() end
---@param InMemberSQState AHDSquadState
---@param InMemberPSToTest AHDPlayerState
function UBP_ContextWidgetPrereq_ExcludeSquadLeader_C:SetupContext(InMemberSQState, InMemberPSToTest) end


