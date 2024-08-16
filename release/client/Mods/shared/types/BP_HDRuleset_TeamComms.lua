---@meta

---@class UBP_HDRuleset_TeamComms_C : UHDGameRulesetBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TeamChannelDef UDFCommChannelDefinition
UBP_HDRuleset_TeamComms_C = {}

---@param Player AController
---@param PlayerName FString
function UBP_HDRuleset_TeamComms_C:GetPlayerName(Player, PlayerName) end
---@param Player APlayerController
---@param PlayerCommsComp UDFPlayerCommsComponent
---@param AssignedTS AHDTeamState
function UBP_HDRuleset_TeamComms_C:HandlePlayerJoinedTeam(Player, PlayerCommsComp, AssignedTS) end
function UBP_HDRuleset_TeamComms_C:OnFailure_C4300E984EC6AE0B0EBC1EA4F402D0FF() end
---@param CreatedChannel UDFCommChannel
function UBP_HDRuleset_TeamComms_C:OnSuccess_C4300E984EC6AE0B0EBC1EA4F402D0FF(CreatedChannel) end
---@param CreatedChannel UDFCommChannel
function UBP_HDRuleset_TeamComms_C:OnPerformSetup_C4300E984EC6AE0B0EBC1EA4F402D0FF(CreatedChannel) end
---@param JoiningPlayer AController
---@param TeamNum uint8
function UBP_HDRuleset_TeamComms_C:PlayerJoinedTeam(JoiningPlayer, TeamNum) end
---@param Player APlayerController
---@param NameOverride FName
---@param PlayerTeam AHDTeamState
function UBP_HDRuleset_TeamComms_C:CreateTeamChannel(Player, NameOverride, PlayerTeam) end
---@param EntryPoint int32
function UBP_HDRuleset_TeamComms_C:ExecuteUbergraph_BP_HDRuleset_TeamComms(EntryPoint) end


