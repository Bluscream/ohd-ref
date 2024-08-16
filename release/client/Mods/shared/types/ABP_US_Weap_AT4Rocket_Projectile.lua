---@meta

---@class UABP_US_Weap_AT4Rocket_Projectile_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_MeshRefPose FAnimNode_MeshSpaceRefPose
---@field AnimGraphNode_ComponentToLocalSpace FAnimNode_ConvertComponentToLocalSpace
UABP_US_Weap_AT4Rocket_Projectile_C = {}

---@param AnimGraph FPoseLink
function UABP_US_Weap_AT4Rocket_Projectile_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function UABP_US_Weap_AT4Rocket_Projectile_C:ExecuteUbergraph_ABP_US_Weap_AT4Rocket_Projectile(EntryPoint) end


