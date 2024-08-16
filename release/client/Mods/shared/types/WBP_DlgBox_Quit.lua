---@meta

---@class UWBP_DlgBox_Quit_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DialogBg UImage
---@field DialogDivider UImage
---@field NoBtn UWBP_DialogBox_Button_C
---@field YesBtn UWBP_DialogBox_Button_C
UWBP_DlgBox_Quit_C = {}

---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_DlgBox_Quit_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
function UWBP_DlgBox_Quit_C:Construct() end
---@param ClickedBtn UWBP_DialogBox_Button_C
function UWBP_DlgBox_Quit_C:BndEvt__YesBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature(ClickedBtn) end
---@param ClickedBtn UWBP_DialogBox_Button_C
function UWBP_DlgBox_Quit_C:BndEvt__NoBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature(ClickedBtn) end
function UWBP_DlgBox_Quit_C:DummyInput() end
---@param EntryPoint int32
function UWBP_DlgBox_Quit_C:ExecuteUbergraph_WBP_DlgBox_Quit(EntryPoint) end


