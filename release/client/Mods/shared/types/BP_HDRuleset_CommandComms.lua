---@meta

---@class UBP_HDRuleset_CommandComms_C : UHDGameRulesetBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CommandChannelDef UDFCommChannelDefinition
UBP_HDRuleset_CommandComms_C = {}

---@param Squad AHDSquadState
---@param SQMemberPS AHDPlayerState
---@param bValidData boolean
---@param MemberPC APlayerController
---@param MemberTS AHDTeamState
---@param MemberCommsComp UDFPlayerCommsComponent
function UBP_HDRuleset_CommandComms_C:RetrieveSQMemberData(Squad, SQMemberPS, bValidData, MemberPC, MemberTS, MemberCommsComp) end
---@param Squad AHDSquadState
---@param NewLeaderPS AHDPlayerState
function UBP_HDRuleset_CommandComms_C:HandleAssignedHumanSquadLead(Squad, NewLeaderPS) end
---@param Squad AHDSquadState
---@param FormerLeaderPS AHDPlayerState
function UBP_HDRuleset_CommandComms_C:HandleUnassignedHumanSquadLead(Squad, FormerLeaderPS) end
function UBP_HDRuleset_CommandComms_C:OnFailure_4BAA1D2044B2D5D3BCF77D9C80E373A3() end
---@param CreatedChannel UDFCommChannel
function UBP_HDRuleset_CommandComms_C:OnSuccess_4BAA1D2044B2D5D3BCF77D9C80E373A3(CreatedChannel) end
---@param CreatedChannel UDFCommChannel
function UBP_HDRuleset_CommandComms_C:OnPerformSetup_4BAA1D2044B2D5D3BCF77D9C80E373A3(CreatedChannel) end
---@param RegisteredActor AActor
function UBP_HDRuleset_CommandComms_C:RegisterActor(RegisteredActor) end
---@param Squad AHDSquadState
---@param NewLeaderPS AHDPlayerState
---@param PrevLeaderPS AHDPlayerState
function UBP_HDRuleset_CommandComms_C:SquadStateLeaderAssigned(Squad, NewLeaderPS, PrevLeaderPS) end
---@param SQLeaderPC APlayerController
---@param SQState AHDSquadState
---@param NameOverride FName
---@param SQTeam AHDTeamState
function UBP_HDRuleset_CommandComms_C:CreateCmdChannel(SQLeaderPC, SQState, NameOverride, SQTeam) end
---@param EntryPoint int32
function UBP_HDRuleset_CommandComms_C:ExecuteUbergraph_BP_HDRuleset_CommandComms(EntryPoint) end


