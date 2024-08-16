---@meta

---@class UABP_M67_P_Weap_Projectile_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_ModifyBone FAnimNode_ModifyBone
---@field AnimGraphNode_ComponentToLocalSpace FAnimNode_ConvertComponentToLocalSpace
---@field AnimGraphNode_MeshRefPose FAnimNode_MeshSpaceRefPose
UABP_M67_P_Weap_Projectile_C = {}

---@param AnimGraph FPoseLink
function UABP_M67_P_Weap_Projectile_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function UABP_M67_P_Weap_Projectile_C:ExecuteUbergraph_ABP_M67_P_Weap_Projectile(EntryPoint) end


