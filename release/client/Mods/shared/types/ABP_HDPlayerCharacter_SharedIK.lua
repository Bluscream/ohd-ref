---@meta

---@class UABP_HDPlayerCharacter_SharedIK_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root_2 FAnimNode_Root
---@field AnimGraphNode_LinkedInputPose_2 FAnimNode_LinkedInputPose
---@field AnimGraphNode_Root_1 FAnimNode_Root
---@field AnimGraphNode_LinkedInputPose_1 FAnimNode_LinkedInputPose
---@field AnimGraphNode_HandIKRetargeting FAnimNode_HandIKRetargeting
---@field AnimGraphNode_TwoBoneIK_1 FAnimNode_TwoBoneIK
---@field AnimGraphNode_TwoBoneIK FAnimNode_TwoBoneIK
---@field AnimGraphNode_ComponentToLocalSpace FAnimNode_ConvertComponentToLocalSpace
---@field AnimGraphNode_Fabrik_1 FAnimNode_Fabrik
---@field AnimGraphNode_Fabrik FAnimNode_Fabrik
---@field AnimGraphNode_LocalToComponentSpace FAnimNode_ConvertLocalToComponentSpace
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_LinkedInputPose FAnimNode_LinkedInputPose
---@field AnimGraphNode_LinkedAnimLayer_1 FAnimNode_LinkedAnimLayer
---@field AnimGraphNode_LinkedAnimLayer FAnimNode_LinkedAnimLayer
---@field LeftHandIKTransform FTransform
---@field RightHandIKTransform FTransform
---@field bUseLeftHandIK boolean
---@field bUseRightHandIK boolean
---@field bUseHandIKRetargeting boolean
---@field HandFKWeight float
---@field bPreventAOHandDriftFromWeapon boolean
---@field FootIK_R_Displacement FVector
---@field FootIK_L_Displacement FVector
---@field FootIK_R_Rotation FRotator
---@field FootIK_L_Rotation FRotator
---@field bDoFootIK_L boolean
---@field bDoFootIK_R boolean
---@field PelvisIK_Displacement FVector
---@field DoPelvisDisplacement boolean
UABP_HDPlayerCharacter_SharedIK_C = {}

---@param InLocoPose FPoseLink
---@param FootIK FPoseLink
function UABP_HDPlayerCharacter_SharedIK_C:FootIK(InLocoPose, FootIK) end
---@param InLocoPose FPoseLink
---@param HandIK FPoseLink
function UABP_HDPlayerCharacter_SharedIK_C:HandIK(InLocoPose, HandIK) end
---@param InPose FPoseLink
---@param AnimGraph FPoseLink
function UABP_HDPlayerCharacter_SharedIK_C:AnimGraph(InPose, AnimGraph) end
---@param EntryPoint int32
function UABP_HDPlayerCharacter_SharedIK_C:ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK(EntryPoint) end


