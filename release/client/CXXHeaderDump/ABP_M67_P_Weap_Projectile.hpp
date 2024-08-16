#ifndef UE4SS_SDK_ABP_M67_P_Weap_Projectile_HPP
#define UE4SS_SDK_ABP_M67_P_Weap_Projectile_HPP

class UABP_M67_P_Weap_Projectile_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0278 (size: 0x30)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x02A8 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x03B0 (size: 0x20)
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;                             // 0x03D0 (size: 0x10)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_M67_P_Weap_Projectile(int32 EntryPoint);
}; // Size: 0x3E0

#endif
