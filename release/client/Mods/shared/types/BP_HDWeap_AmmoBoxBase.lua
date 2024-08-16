---@meta

---@class ABP_HDWeap_AmmoBoxBase_C : ABP_HDWeap_AoFWeapBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field bInfiniteRestore boolean
---@field bDoNotRefillPartialClips boolean
---@field AmmoClipAmount int32
---@field TotalRestoreAmount int32
---@field AmmoRestoreRemaining int32
---@field AuraTeam uint8
ABP_HDWeap_AmmoBoxBase_C = {}

---@param bVisibility boolean
function ABP_HDWeap_AmmoBoxBase_C:SetIconVisibilityOverlappingPawns(bVisibility) end
---@param Pawn ADFBaseCharacter
---@param Visibility boolean
function ABP_HDWeap_AmmoBoxBase_C:SetIconVisibility(Pawn, Visibility) end
---@param Pawn ADFBaseCharacter
---@param Ammo int32
---@param ClipsRestored int32
function ABP_HDWeap_AmmoBoxBase_C:ReplenishAmmo(Pawn, Ammo, ClipsRestored) end
function ABP_HDWeap_AmmoBoxBase_C:AmmoAuraEffect() end
function ABP_HDWeap_AmmoBoxBase_C:UserConstructionScript() end
function ABP_HDWeap_AmmoBoxBase_C:DoAuraEffect() end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ABP_HDWeap_AmmoBoxBase_C:BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function ABP_HDWeap_AmmoBoxBase_C:BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
function ABP_HDWeap_AmmoBoxBase_C:OnAuraEffectBegin() end
function ABP_HDWeap_AmmoBoxBase_C:OnAuraEffectEnd() end
---@param EntryPoint int32
function ABP_HDWeap_AmmoBoxBase_C:ExecuteUbergraph_BP_HDWeap_AmmoBoxBase(EntryPoint) end


