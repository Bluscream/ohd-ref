---@meta

---@class ABP_HDWeap_BandageBase_C : ABP_HDWeaponBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HealthRestoreAmount float
ABP_HDWeap_BandageBase_C = {}

---@return boolean
function ABP_HDWeap_BandageBase_C:CanFire() end
function ABP_HDWeap_BandageBase_C:ReceiveFire() end
---@param EntryPoint int32
function ABP_HDWeap_BandageBase_C:ExecuteUbergraph_BP_HDWeap_BandageBase(EntryPoint) end


