---@meta

---@class UWBP_HDRadialMenuBase_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SubmenuCommit FWBP_HDRadialMenuBase_CSubmenuCommit
---@field SubmitKeys TArray<FKey>
---@field BackKeys TArray<FKey>
---@field Cancel FWBP_HDRadialMenuBase_CCancel
UWBP_HDRadialMenuBase_C = {}

---@param InMyGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UWBP_HDRadialMenuBase_C:OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_HDRadialMenuBase_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_HDRadialMenuBase_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
function UWBP_HDRadialMenuBase_C:Submit() end
function UWBP_HDRadialMenuBase_C:GoBack() end
---@param EntryPoint int32
function UWBP_HDRadialMenuBase_C:ExecuteUbergraph_WBP_HDRadialMenuBase(EntryPoint) end
function UWBP_HDRadialMenuBase_C:Cancel__DelegateSignature() end
---@param Category FName
---@param SubItem FName
function UWBP_HDRadialMenuBase_C:SubmenuCommit__DelegateSignature(Category, SubItem) end


