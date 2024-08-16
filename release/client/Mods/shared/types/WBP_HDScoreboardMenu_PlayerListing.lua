---@meta

---@class UWBP_HDScoreboardMenu_PlayerListing_C : UHDScoreboardListingRowBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BorderList UBorder
---@field VoteKickBtn UButton
---@field VoteKickText UTextBlock
---@field MutedIcon UTexture2D
---@field NotTalkingIcon UTexture2D
---@field TalkingIcon UTexture2D
UWBP_HDScoreboardMenu_PlayerListing_C = {}

---@param bAllowed boolean
function UWBP_HDScoreboardMenu_PlayerListing_C:CanVoteKick(bAllowed) end
function UWBP_HDScoreboardMenu_PlayerListing_C:ReceiveRefreshListing() end
function UWBP_HDScoreboardMenu_PlayerListing_C:BndEvt__VoteKickBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_HDScoreboardMenu_PlayerListing_C:BndEvt__VoteKickBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_HDScoreboardMenu_PlayerListing_C:BndEvt__VoteKickBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_HDScoreboardMenu_PlayerListing_C:BndEvt__VoteKickBtn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature() end
function UWBP_HDScoreboardMenu_PlayerListing_C:BndEvt__VoteKickBtn_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_HDScoreboardMenu_PlayerListing_C:ExecuteUbergraph_WBP_HDScoreboardMenu_PlayerListing(EntryPoint) end

