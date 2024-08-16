---@meta

---@class ABP_HDProj_SmokeGrenadeBase_C : ABP_HDProj_GrenadeBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisibilityCapsule UCapsuleComponent
---@field SmokePS UParticleSystemComponent
---@field VisibilityTimeline_Location_D0E2F33E4AF1451ABB7ED786E44EA639 FVector
---@field VisibilityTimeline_HalfHeight_D0E2F33E4AF1451ABB7ED786E44EA639 float
---@field VisibilityTimeline_Radius_D0E2F33E4AF1451ABB7ED786E44EA639 float
---@field VisibilityTimeline__Direction_D0E2F33E4AF1451ABB7ED786E44EA639 ETimelineDirection::Type
---@field VisibilityTimeline UTimelineComponent
---@field VisibilityTimelineRadiusCurve UCurveFloat
---@field VisibilityTimelineHalfHeightCurve UCurveFloat
---@field VisibilityTimelineLocationCurve UCurveVector
---@field VisibilityCapsuleRotation FRotator
ABP_HDProj_SmokeGrenadeBase_C = {}

---@param InRadius float
---@param InHalfHeight float
---@param InLocation FVector
function ABP_HDProj_SmokeGrenadeBase_C:UpdateVisibilityTimeline(InRadius, InHalfHeight, InLocation) end
function ABP_HDProj_SmokeGrenadeBase_C:StartVisibilityTimeline() end
function ABP_HDProj_SmokeGrenadeBase_C:VisibilityTimeline__FinishedFunc() end
function ABP_HDProj_SmokeGrenadeBase_C:VisibilityTimeline__UpdateFunc() end
---@param ImpactHitResult FHitResult
function ABP_HDProj_SmokeGrenadeBase_C:ReceivePayloadActivated(ImpactHitResult) end
---@param EntryPoint int32
function ABP_HDProj_SmokeGrenadeBase_C:ExecuteUbergraph_BP_HDProj_SmokeGrenadeBase(EntryPoint) end


