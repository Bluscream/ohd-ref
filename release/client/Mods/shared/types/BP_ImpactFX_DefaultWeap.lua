---@meta

---@class ABP_ImpactFX_DefaultWeap_C : ADFBaseImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
ABP_ImpactFX_DefaultWeap_C = {}

---@param DeltaSeconds float
function ABP_ImpactFX_DefaultWeap_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_ImpactFX_DefaultWeap_C:ExecuteUbergraph_BP_ImpactFX_DefaultWeap(EntryPoint) end


