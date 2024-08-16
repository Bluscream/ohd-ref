---@meta

---@class UWBP_HDWatermark_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field WatermarkTextBlock UTextBlock
UWBP_HDWatermark_C = {}

---@param IsDesignTime boolean
function UWBP_HDWatermark_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_HDWatermark_C:ExecuteUbergraph_WBP_HDWatermark(EntryPoint) end


