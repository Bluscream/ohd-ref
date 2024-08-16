---@meta

---@class ABP_HDProj_RocketBase_C : AHDProj_Bullet
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Mesh USkeletalMeshComponent
---@field ExplosionPS UParticleSystem
---@field ExplosionSnd USoundBase
---@field CameraShake TSubclassOf<UCameraShake>
---@field CameraShakeInnerRadius float
---@field CameraShakeOuterRadius float
ABP_HDProj_RocketBase_C = {}

---@param ImpactHitResult FHitResult
function ABP_HDProj_RocketBase_C:ReceivePayloadActivated(ImpactHitResult) end
---@param EntryPoint int32
function ABP_HDProj_RocketBase_C:ExecuteUbergraph_BP_HDProj_RocketBase(EntryPoint) end


