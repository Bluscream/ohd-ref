#ifndef UE4SS_SDK_ABP_US_Weap_M203_Round_HPP
#define UE4SS_SDK_ABP_US_Weap_M203_Round_HPP

class UABP_US_Weap_M203_Round_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0278 (size: 0x30)
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;                             // 0x02A8 (size: 0x10)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x02B8 (size: 0x20)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_US_Weap_M203_Round(int32 EntryPoint);
}; // Size: 0x2D8

#endif
