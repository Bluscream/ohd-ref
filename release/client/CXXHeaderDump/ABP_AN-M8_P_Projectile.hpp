#ifndef UE4SS_SDK_ABP_AN-M8_P_Projectile_HPP
#define UE4SS_SDK_ABP_AN-M8_P_Projectile_HPP

class UABP_AN-M8_P_Projectile_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0278 (size: 0x30)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_AN-M8_P_Projectile(int32 EntryPoint);
}; // Size: 0x2A8

#endif
