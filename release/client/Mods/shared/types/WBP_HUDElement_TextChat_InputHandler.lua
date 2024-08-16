---@meta

---@class UWBP_HUDElement_TextChat_InputHandler_C : UHDTextChatInputWidgetBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ChannelNameText UTextBlock
---@field MsgInputTextBox UEditableTextBox
---@field CurrentChannel UDFCommChannel
---@field OnInputTextCommitted FWBP_HUDElement_TextChat_InputHandler_COnInputTextCommitted
UWBP_HUDElement_TextChat_InputHandler_C = {}

---@param NewTalkChannel UDFCommChannel
function UWBP_HUDElement_TextChat_InputHandler_C:StartTalking(NewTalkChannel) end
---@param CurrentChannel UDFCommChannel
function UWBP_HUDElement_TextChat_InputHandler_C:StopTalking(CurrentChannel) end
---@param Text FText
function UWBP_HUDElement_TextChat_InputHandler_C:InputTextEntered(Text) end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UWBP_HUDElement_TextChat_InputHandler_C:BndEvt__MsgInputTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(Text, CommitMethod) end
---@param EntryPoint int32
function UWBP_HUDElement_TextChat_InputHandler_C:ExecuteUbergraph_WBP_HUDElement_TextChat_InputHandler(EntryPoint) end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UWBP_HUDElement_TextChat_InputHandler_C:OnInputTextCommitted__DelegateSignature(Text, CommitMethod) end


