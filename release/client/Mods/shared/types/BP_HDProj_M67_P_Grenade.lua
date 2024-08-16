---@meta

---@class ABP_HDProj_M67_P_Grenade_C : ABP_HDProj_GrenadeBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RotatingMovement URotatingMovementComponent
ABP_HDProj_M67_P_Grenade_C = {}

---@param ImpactResult FHitResult
function ABP_HDProj_M67_P_Grenade_C:BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(ImpactResult) end
---@param DeltaSeconds float
function ABP_HDProj_M67_P_Grenade_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_HDProj_M67_P_Grenade_C:ExecuteUbergraph_BP_HDProj_M67_P_Grenade(EntryPoint) end


