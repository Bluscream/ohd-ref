---@meta

---@class ABP_HDProj_GrenadeBase_C : AHDProj_Grenade
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Mesh USkeletalMeshComponent
---@field ProjectileCollision USphereComponent
---@field ExplosionPS UParticleSystem
---@field ExplosionSnd USoundBase
---@field CameraShake TSubclassOf<UCameraShake>
---@field CameraShakeInnerRadius float
---@field CameraShakeOuterRadius float
ABP_HDProj_GrenadeBase_C = {}

---@param ImpactHitResult FHitResult
function ABP_HDProj_GrenadeBase_C:ReceivePayloadActivated(ImpactHitResult) end
---@param EntryPoint int32
function ABP_HDProj_GrenadeBase_C:ExecuteUbergraph_BP_HDProj_GrenadeBase(EntryPoint) end


