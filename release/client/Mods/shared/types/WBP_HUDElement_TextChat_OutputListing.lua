---@meta

---@class UWBP_HUDElement_TextChat_OutputListing_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeOutAnim UWidgetAnimation
---@field MsgContentText URichTextBlock
---@field MsgPrefix UWBP_TextChat_MsgPrefix_C
---@field ChatMsg UHDTextChatMsgInfo
---@field MsgLifeTime float
---@field EnemyMsgColor FSlateColor
---@field FriendlyMsgColor FSlateColor
UWBP_HUDElement_TextChat_OutputListing_C = {}

function UWBP_HUDElement_TextChat_OutputListing_C:Finished_54BC5F4D4E481384960AD59474319862() end
function UWBP_HUDElement_TextChat_OutputListing_C:LifetimeExpired() end
function UWBP_HUDElement_TextChat_OutputListing_C:OnInitialized() end
---@param Msg UHDTextChatMsgInfo
function UWBP_HUDElement_TextChat_OutputListing_C:SetupListing(Msg) end
---@param EntryPoint int32
function UWBP_HUDElement_TextChat_OutputListing_C:ExecuteUbergraph_WBP_HUDElement_TextChat_OutputListing(EntryPoint) end


