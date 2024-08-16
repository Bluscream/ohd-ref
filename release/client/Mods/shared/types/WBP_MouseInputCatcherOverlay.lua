---@meta

---@class UWBP_MouseInputCatcherOverlay_C : UUserWidget
---@field TargetIKS UWBP_OptionsMenuItem_InputKeySelector_C
UWBP_MouseInputCatcherOverlay_C = {}

---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_MouseInputCatcherOverlay_C:OnMouseWheel(MyGeometry, MouseEvent) end
---@param Key FKey
function UWBP_MouseInputCatcherOverlay_C:SelectKey(Key) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_MouseInputCatcherOverlay_C:OnMouseButtonDown(MyGeometry, MouseEvent) end


