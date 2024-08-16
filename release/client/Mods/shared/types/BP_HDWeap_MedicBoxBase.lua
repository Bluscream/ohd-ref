---@meta

---@class ABP_HDWeap_MedicBoxBase_C : ABP_HDWeap_AoFWeapBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field bInfiniteRestore boolean
---@field HealthRestoreRate float
---@field TotalRestoreAmount float
---@field HealthRestoreRemaining float
---@field AuraTeam uint8
ABP_HDWeap_MedicBoxBase_C = {}

---@param bVisibility boolean
function ABP_HDWeap_MedicBoxBase_C:SetIconVisibilityOverlappingPawns(bVisibility) end
---@param Pawn ADFBaseCharacter
---@param Visibility boolean
function ABP_HDWeap_MedicBoxBase_C:SetIconVisibility(Pawn, Visibility) end
---@param Heal float
---@param Pawn ADFBaseCharacter
function ABP_HDWeap_MedicBoxBase_C:HealPawn(Heal, Pawn) end
function ABP_HDWeap_MedicBoxBase_C:HealingAuraEffect() end
function ABP_HDWeap_MedicBoxBase_C:UserConstructionScript() end
function ABP_HDWeap_MedicBoxBase_C:DoAuraEffect() end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ABP_HDWeap_MedicBoxBase_C:BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function ABP_HDWeap_MedicBoxBase_C:BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
function ABP_HDWeap_MedicBoxBase_C:OnAuraEffectBegin() end
function ABP_HDWeap_MedicBoxBase_C:OnAuraEffectEnd() end
---@param EntryPoint int32
function ABP_HDWeap_MedicBoxBase_C:ExecuteUbergraph_BP_HDWeap_MedicBoxBase(EntryPoint) end


