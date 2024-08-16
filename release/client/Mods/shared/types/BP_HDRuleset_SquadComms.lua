---@meta

---@class UBP_HDRuleset_SquadComms_C : UHDGameRulesetBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AddChannelPlayers TArray<APlayerController>
UBP_HDRuleset_SquadComms_C = {}

---@param Player APlayerController
---@param PlayerCommsComp UDFPlayerCommsComponent
---@param PlayerSquad AHDSquadState
---@param bRemoveChannel boolean
function UBP_HDRuleset_SquadComms_C:UpdateSquadChannelForPlayer(Player, PlayerCommsComp, PlayerSquad, bRemoveChannel) end
function UBP_HDRuleset_SquadComms_C:OnFailure_EF6FE6634798C45922DA3F8796D99226() end
---@param CreatedChannel UDFCommChannel
function UBP_HDRuleset_SquadComms_C:OnSuccess_EF6FE6634798C45922DA3F8796D99226(CreatedChannel) end
---@param CreatedChannel UDFCommChannel
function UBP_HDRuleset_SquadComms_C:OnPerformSetup_EF6FE6634798C45922DA3F8796D99226(CreatedChannel) end
---@param RegisteredActor AActor
function UBP_HDRuleset_SquadComms_C:RegisterActor(RegisteredActor) end
---@param Squad AHDSquadState
---@param MemberPS AHDPlayerState
function UBP_HDRuleset_SquadComms_C:PlayerJoinedSquad(Squad, MemberPS) end
---@param Squad AHDSquadState
---@param MemberPS AHDPlayerState
function UBP_HDRuleset_SquadComms_C:PlayerLeftSquad(Squad, MemberPS) end
---@param Player APlayerController
---@param NameOverride FName
---@param PlayerSquad AHDSquadState
function UBP_HDRuleset_SquadComms_C:CreateSquadChannel(Player, NameOverride, PlayerSquad) end
---@param Squad AHDSquadState
---@param NewName FText
---@param PrevName FText
function UBP_HDRuleset_SquadComms_C:SquadRenamed(Squad, NewName, PrevName) end
---@param EntryPoint int32
function UBP_HDRuleset_SquadComms_C:ExecuteUbergraph_BP_HDRuleset_SquadComms(EntryPoint) end


