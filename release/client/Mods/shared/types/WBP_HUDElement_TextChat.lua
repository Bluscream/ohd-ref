---@meta

---@class UWBP_HUDElement_TextChat_C : UHDTextChatWidgetBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DisplayChatInputUI UWidgetAnimation
---@field DisplayChatHistoryUI UWidgetAnimation
---@field ChatBoxTitle UTextBlock
---@field ChatHistory UOverlay
---@field ChatInput UOverlay
---@field ChatInputHandler UWBP_HUDElement_TextChat_InputHandler_C
---@field ChatMsgLogSBox UScrollBox
---@field NumFakeChatMsgs int32
---@field MaxChatMsgs int32
---@field ChatMsgPadding FMargin
---@field ChatHistoryFadeOutDelay float
---@field bChatHistoryVisible boolean
---@field ChatHistoryTimeoutHandle FTimerHandle
---@field bWantsScrollToEnd boolean
---@field ScrollToWidget UWidget
UWBP_HUDElement_TextChat_C = {}

---@param Key FKey
function UWBP_HUDElement_TextChat_C:UpdateChatBoxTitleKeyText(Key) end
---@param Context FPaintContext
function UWBP_HUDElement_TextChat_C:OnPaint(Context) end
---@param bVisible boolean
function UWBP_HUDElement_TextChat_C:GetChatHistoryIsVisible(bVisible) end
---@param ChatMsg UHDTextChatMsgInfo
---@param Listing UWidget
function UWBP_HUDElement_TextChat_C:AddNewOutputListing(ChatMsg, Listing) end
---@param NewChatMsg UHDTextChatMsgInfo
function UWBP_HUDElement_TextChat_C:DisplayChatMessage(NewChatMsg) end
---@param IsDesignTime boolean
function UWBP_HUDElement_TextChat_C:PreConstruct(IsDesignTime) end
---@param TalkChannel UDFCommChannel
function UWBP_HUDElement_TextChat_C:StartTalking(TalkChannel) end
function UWBP_HUDElement_TextChat_C:StopTalking() end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UWBP_HUDElement_TextChat_C:BndEvt__WBP_TextChat_Input_K2Node_ComponentBoundEvent_2_OnInputTextCommitted__DelegateSignature(Text, CommitMethod) end
function UWBP_HUDElement_TextChat_C:OnInitialized() end
function UWBP_HUDElement_TextChat_C:ChatHistoryTimeout() end
---@param bVisible boolean
function UWBP_HUDElement_TextChat_C:SetChatHistoryIsVisible(bVisible) end
---@param CurrentOffset float
function UWBP_HUDElement_TextChat_C:BndEvt__ChatMsgLogSBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(CurrentOffset) end
---@param EntryPoint int32
function UWBP_HUDElement_TextChat_C:ExecuteUbergraph_WBP_HUDElement_TextChat(EntryPoint) end


