---@meta

---@class UWBP_StanceIndicator_C : UHDUIUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StanceIcon UImage
UWBP_StanceIndicator_C = {}

---@param NewHealthValueNorm float
---@param PrevHealthValueNorm float
function UWBP_StanceIndicator_C:SetHealth(NewHealthValueNorm, PrevHealthValueNorm) end
---@param State EHDUICharacterStanceState
function UWBP_StanceIndicator_C:StanceStateUpdate(State) end
---@param EntryPoint int32
function UWBP_StanceIndicator_C:ExecuteUbergraph_WBP_StanceIndicator(EntryPoint) end


