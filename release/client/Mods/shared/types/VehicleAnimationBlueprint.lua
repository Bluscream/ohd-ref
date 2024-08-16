---@meta

---@class UVehicleAnimationBlueprint_C : UVehicleAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_WheelHandler FAnimNode_WheelHandler
---@field AnimGraphNode_ComponentToLocalSpace FAnimNode_ConvertComponentToLocalSpace
---@field AnimGraphNode_MeshRefPose FAnimNode_MeshSpaceRefPose
---@field AnimGraphNode_CopyBone_19 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_18 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_17 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_16 FAnimNode_CopyBone
---@field AnimGraphNode_LookAt_15 FAnimNode_LookAt
---@field AnimGraphNode_LookAt_14 FAnimNode_LookAt
---@field AnimGraphNode_LookAt_13 FAnimNode_LookAt
---@field AnimGraphNode_LookAt_12 FAnimNode_LookAt
---@field AnimGraphNode_CopyBone_15 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_14 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_13 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_12 FAnimNode_CopyBone
---@field AnimGraphNode_LookAt_11 FAnimNode_LookAt
---@field AnimGraphNode_LookAt_10 FAnimNode_LookAt
---@field AnimGraphNode_LookAt_9 FAnimNode_LookAt
---@field AnimGraphNode_LookAt_8 FAnimNode_LookAt
---@field AnimGraphNode_CopyBone_11 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_10 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_9 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_8 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_7 FAnimNode_CopyBone
---@field AnimGraphNode_LookAt_7 FAnimNode_LookAt
---@field AnimGraphNode_CopyBone_6 FAnimNode_CopyBone
---@field AnimGraphNode_LookAt_6 FAnimNode_LookAt
---@field AnimGraphNode_LookAt_5 FAnimNode_LookAt
---@field AnimGraphNode_CopyBone_5 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_4 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_3 FAnimNode_CopyBone
---@field AnimGraphNode_LookAt_4 FAnimNode_LookAt
---@field AnimGraphNode_LookAt_3 FAnimNode_LookAt
---@field AnimGraphNode_LookAt_2 FAnimNode_LookAt
---@field AnimGraphNode_CopyBone_2 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone_1 FAnimNode_CopyBone
---@field AnimGraphNode_CopyBone FAnimNode_CopyBone
---@field AnimGraphNode_LookAt_1 FAnimNode_LookAt
---@field AnimGraphNode_LookAt FAnimNode_LookAt
UVehicleAnimationBlueprint_C = {}

---@param AnimGraph FPoseLink
function UVehicleAnimationBlueprint_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function UVehicleAnimationBlueprint_C:ExecuteUbergraph_VehicleAnimationBlueprint(EntryPoint) end


