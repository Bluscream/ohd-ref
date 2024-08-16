#ifndef UE4SS_SDK_ABP_US_Weap_AT4Rocket_Projectile_HPP
#define UE4SS_SDK_ABP_US_Weap_AT4Rocket_Projectile_HPP

class UABP_US_Weap_AT4Rocket_Projectile_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0278 (size: 0x30)
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;                             // 0x02A8 (size: 0x10)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x02B8 (size: 0x20)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_US_Weap_AT4Rocket_Projectile(int32 EntryPoint);
}; // Size: 0x2D8

#endif
