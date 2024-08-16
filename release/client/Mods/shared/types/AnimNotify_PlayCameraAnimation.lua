---@meta

---@class UAnimNotify_PlayCameraAnimation_C : UAnimNotify
---@field ['Camera Curve'] UCurveVector
---@field SmoothingSpeed float
---@field PlaybackSlot int32
---@field TransitionSpeed float
---@field bHoldForward boolean
UAnimNotify_PlayCameraAnimation_C = {}

---@return FString
function UAnimNotify_PlayCameraAnimation_C:GetNotifyName() end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UAnimNotify_PlayCameraAnimation_C:Received_Notify(MeshComp, Animation) end


