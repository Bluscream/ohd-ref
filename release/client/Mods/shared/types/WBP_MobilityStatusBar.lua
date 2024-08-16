---@meta

---@class UWBP_MobilityStatusBar_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PingUIAnim UWidgetAnimation
---@field StatusBar UProgressBar
---@field StatusPingImg UImage
UWBP_MobilityStatusBar_C = {}

---@param InPercent float
---@param bInitial boolean
function UWBP_MobilityStatusBar_C:SetPercent(InPercent, bInitial) end
function UWBP_MobilityStatusBar_C:PingValueFull() end
---@param EntryPoint int32
function UWBP_MobilityStatusBar_C:ExecuteUbergraph_WBP_MobilityStatusBar(EntryPoint) end


