---@meta

---@class UBPFL_HDComms_C : UBlueprintFunctionLibrary
UBPFL_HDComms_C = {}

---@param Channel UDFCommChannel
---@param __WorldContext UObject
---@param ChannelChatIcon UTexture2D
function UBPFL_HDComms_C:GetTextChatIconForCommChannel(Channel, __WorldContext, ChannelChatIcon) end
---@param CreatedChannel UDFCommChannel
---@param SquadToAssociate AHDSquadState
---@param __WorldContext UObject
function UBPFL_HDComms_C:SetupNewSquadChannel(CreatedChannel, SquadToAssociate, __WorldContext) end
---@param CreatedChannel UDFCommChannel
---@param TeamToAssociate AHDTeamState
---@param __WorldContext UObject
function UBPFL_HDComms_C:SetupNewTeamChannel(CreatedChannel, TeamToAssociate, __WorldContext) end
---@param Channel UDFCommChannel
---@param __WorldContext UObject
---@param ChannelColor FSlateColor
function UBPFL_HDComms_C:GetColorForCommChannel(Channel, __WorldContext, ChannelColor) end
---@param Player APlayerController
---@param __WorldContext UObject
---@param PlayerCommsComp UDFPlayerCommsComponent
function UBPFL_HDComms_C:GetValidCommsComponentForPlayer(Player, __WorldContext, PlayerCommsComp) end


