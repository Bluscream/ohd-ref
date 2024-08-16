---@meta

---@class UWBP_HUDElement_VOIPIndicator_C : UHDVoipIndicatorWidgetBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CommandChatIndicator UWBP_VOIPOwnerChatIndicator_C
---@field LocalChatIndicator UWBP_VOIPOwnerChatIndicator_C
---@field SquadChatIndicator UWBP_VOIPOwnerChatIndicator_C
---@field TalkerListVBox UVerticalBox
---@field NumFakeOutputListings int32
---@field MaxTalkerListings int32
---@field TalkerListingPadding FMargin
---@field bTalkerListingTintClassIconOnly boolean
UWBP_HUDElement_VOIPIndicator_C = {}

---@param PlayerMsgInfo UHDVoiceChatMsgInfo
---@param bMatchFound boolean
function UWBP_HUDElement_VOIPIndicator_C:ContainsTalkerListing(PlayerMsgInfo, bMatchFound) end
---@param PlayerMsgInfo UHDVoiceChatMsgInfo
---@param bListingFound boolean
---@param TalkerListing UWBP_HUDElement_VOIPIndicator_OutputListing_C
function UWBP_HUDElement_VOIPIndicator_C:FindTalkerListing(PlayerMsgInfo, bListingFound, TalkerListing) end
---@param TalkerMsgInfo UHDVoiceChatMsgInfo
function UWBP_HUDElement_VOIPIndicator_C:PlayerStoppedTalking(TalkerMsgInfo) end
---@param TalkerMsgInfo UHDVoiceChatMsgInfo
function UWBP_HUDElement_VOIPIndicator_C:PlayerStartedTalking(TalkerMsgInfo) end
---@param TalkerMsgInfo UHDVoiceChatMsgInfo
function UWBP_HUDElement_VOIPIndicator_C:OnPlayerStartTalking(TalkerMsgInfo) end
---@param TalkerMsgInfo UHDVoiceChatMsgInfo
function UWBP_HUDElement_VOIPIndicator_C:OnPlayerStopTalking(TalkerMsgInfo) end
---@param LocalTalkerMsgInfo UHDVoiceChatMsgInfo
function UWBP_HUDElement_VOIPIndicator_C:OnOwningPlayerStartTalking(LocalTalkerMsgInfo) end
---@param LocalTalkerMsgInfo UHDVoiceChatMsgInfo
function UWBP_HUDElement_VOIPIndicator_C:OnOwningPlayerStopTalking(LocalTalkerMsgInfo) end
---@param IsDesignTime boolean
function UWBP_HUDElement_VOIPIndicator_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_HUDElement_VOIPIndicator_C:ExecuteUbergraph_WBP_HUDElement_VOIPIndicator(EntryPoint) end


