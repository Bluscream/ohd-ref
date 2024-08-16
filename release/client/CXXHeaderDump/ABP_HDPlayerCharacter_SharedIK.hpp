#ifndef UE4SS_SDK_ABP_HDPlayerCharacter_SharedIK_HPP
#define UE4SS_SDK_ABP_HDPlayerCharacter_SharedIK_HPP

class UABP_HDPlayerCharacter_SharedIK_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x0278 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x02A8 (size: 0x78)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0320 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x0350 (size: 0x78)
    FAnimNode_HandIKRetargeting AnimGraphNode_HandIKRetargeting;                      // 0x03C8 (size: 0x120)
    char padding_0[0x8];                                                              // 0x04E8 (size: 0x8)
    FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_1;                                    // 0x04F0 (size: 0x1E0)
    FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK;                                      // 0x06D0 (size: 0x1E0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x08B0 (size: 0x20)
    FAnimNode_Fabrik AnimGraphNode_Fabrik_1;                                          // 0x08D0 (size: 0x190)
    FAnimNode_Fabrik AnimGraphNode_Fabrik;                                            // 0x0A60 (size: 0x190)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0BF0 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0C10 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0C40 (size: 0x78)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_1;                        // 0x0CB8 (size: 0xB0)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;                          // 0x0D68 (size: 0xB0)
    char padding_1[0x8];                                                              // 0x0E18 (size: 0x8)
    FTransform LeftHandIKTransform;                                                   // 0x0E20 (size: 0x30)
    FTransform RightHandIKTransform;                                                  // 0x0E50 (size: 0x30)
    bool bUseLeftHandIK;                                                              // 0x0E80 (size: 0x1)
    bool bUseRightHandIK;                                                             // 0x0E81 (size: 0x1)
    bool bUseHandIKRetargeting;                                                       // 0x0E82 (size: 0x1)
    char padding_2[0x1];                                                              // 0x0E83 (size: 0x1)
    float HandFKWeight;                                                               // 0x0E84 (size: 0x4)
    bool bPreventAOHandDriftFromWeapon;                                               // 0x0E88 (size: 0x1)
    char padding_3[0x3];                                                              // 0x0E89 (size: 0x3)
    FVector FootIK_R_Displacement;                                                    // 0x0E8C (size: 0xC)
    FVector FootIK_L_Displacement;                                                    // 0x0E98 (size: 0xC)
    FRotator FootIK_R_Rotation;                                                       // 0x0EA4 (size: 0xC)
    FRotator FootIK_L_Rotation;                                                       // 0x0EB0 (size: 0xC)
    bool bDoFootIK_L;                                                                 // 0x0EBC (size: 0x1)
    bool bDoFootIK_R;                                                                 // 0x0EBD (size: 0x1)
    char padding_4[0x2];                                                              // 0x0EBE (size: 0x2)
    FVector PelvisIK_Displacement;                                                    // 0x0EC0 (size: 0xC)
    bool DoPelvisDisplacement;                                                        // 0x0ECC (size: 0x1)

    void FootIK(FPoseLink InLocoPose, FPoseLink& FootIK);
    void HandIK(FPoseLink InLocoPose, FPoseLink& HandIK);
    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK(int32 EntryPoint);
}; // Size: 0xECD

#endif
