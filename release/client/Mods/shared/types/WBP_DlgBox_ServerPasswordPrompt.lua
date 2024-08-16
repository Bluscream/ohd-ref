---@meta

---@class UWBP_DlgBox_ServerPasswordPrompt_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PromptTextBox UEditableTextBox
---@field OnConfirmInput FWBP_DlgBox_ServerPasswordPrompt_COnConfirmInput
---@field OnCancelInput FWBP_DlgBox_ServerPasswordPrompt_COnCancelInput
UWBP_DlgBox_ServerPasswordPrompt_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_DlgBox_ServerPasswordPrompt_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_DlgBox_ServerPasswordPrompt_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
function UWBP_DlgBox_ServerPasswordPrompt_C:Construct() end
function UWBP_DlgBox_ServerPasswordPrompt_C:DummyInput() end
function UWBP_DlgBox_ServerPasswordPrompt_C:ConfirmInput() end
function UWBP_DlgBox_ServerPasswordPrompt_C:CancelInput() end
---@param InFocusEvent FFocusEvent
function UWBP_DlgBox_ServerPasswordPrompt_C:OnRemovedFromFocusPath(InFocusEvent) end
---@param EntryPoint int32
function UWBP_DlgBox_ServerPasswordPrompt_C:ExecuteUbergraph_WBP_DlgBox_ServerPasswordPrompt(EntryPoint) end
function UWBP_DlgBox_ServerPasswordPrompt_C:OnCancelInput__DelegateSignature() end
---@param InputText FText
function UWBP_DlgBox_ServerPasswordPrompt_C:OnConfirmInput__DelegateSignature(InputText) end


