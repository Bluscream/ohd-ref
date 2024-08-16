---@meta

---@class ABP_HDWeap_AoFWeapBase_C : ABP_HDWeaponBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AreaOfEffectCollisionSphere USphereComponent
---@field AuraRadius float
---@field AuraEffectTimerInterval float
---@field AuraEffectTimerHandle FTimerHandle
---@field bIsTimerSet boolean
---@field AffectedPawns TArray<ADFBaseCharacter>
ABP_HDWeap_AoFWeapBase_C = {}

---@return boolean
function ABP_HDWeap_AoFWeapBase_C:CanFire() end
function ABP_HDWeap_AoFWeapBase_C:InitAffectedPawns() end
function ABP_HDWeap_AoFWeapBase_C:UserConstructionScript() end
---@param DeltaSeconds float
function ABP_HDWeap_AoFWeapBase_C:ReceiveTick(DeltaSeconds) end
function ABP_HDWeap_AoFWeapBase_C:DoAuraEffect() end
function ABP_HDWeap_AoFWeapBase_C:OnAuraEffectBegin() end
function ABP_HDWeap_AoFWeapBase_C:OnAuraEffectEnd() end
---@param EntryPoint int32
function ABP_HDWeap_AoFWeapBase_C:ExecuteUbergraph_BP_HDWeap_AoFWeapBase(EntryPoint) end


