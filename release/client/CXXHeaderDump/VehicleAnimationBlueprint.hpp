#ifndef UE4SS_SDK_VehicleAnimationBlueprint_HPP
#define UE4SS_SDK_VehicleAnimationBlueprint_HPP

class UVehicleAnimationBlueprint_C : public UVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0980 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0988 (size: 0x30)
    FAnimNode_WheelHandler AnimGraphNode_WheelHandler;                                // 0x09B8 (size: 0xE0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0A98 (size: 0x20)
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;                             // 0x0AB8 (size: 0x10)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_19;                                     // 0x0AC8 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_18;                                     // 0x0BB8 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_17;                                     // 0x0CA8 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_16;                                     // 0x0D98 (size: 0xF0)
    char padding_0[0x8];                                                              // 0x0E88 (size: 0x8)
    FAnimNode_LookAt AnimGraphNode_LookAt_15;                                         // 0x0E90 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_14;                                         // 0x1040 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_13;                                         // 0x11F0 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_12;                                         // 0x13A0 (size: 0x1B0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_15;                                     // 0x1550 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_14;                                     // 0x1640 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_13;                                     // 0x1730 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_12;                                     // 0x1820 (size: 0xF0)
    FAnimNode_LookAt AnimGraphNode_LookAt_11;                                         // 0x1910 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_10;                                         // 0x1AC0 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_9;                                          // 0x1C70 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_8;                                          // 0x1E20 (size: 0x1B0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_11;                                     // 0x1FD0 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_10;                                     // 0x20C0 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_9;                                      // 0x21B0 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_8;                                      // 0x22A0 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_7;                                      // 0x2390 (size: 0xF0)
    FAnimNode_LookAt AnimGraphNode_LookAt_7;                                          // 0x2480 (size: 0x1B0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_6;                                      // 0x2630 (size: 0xF0)
    FAnimNode_LookAt AnimGraphNode_LookAt_6;                                          // 0x2720 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_5;                                          // 0x28D0 (size: 0x1B0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_5;                                      // 0x2A80 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_4;                                      // 0x2B70 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_3;                                      // 0x2C60 (size: 0xF0)
    FAnimNode_LookAt AnimGraphNode_LookAt_4;                                          // 0x2D50 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_3;                                          // 0x2F00 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x30B0 (size: 0x1B0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_2;                                      // 0x3260 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_1;                                      // 0x3350 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone;                                        // 0x3440 (size: 0xF0)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x3530 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x36E0 (size: 0x1B0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_VehicleAnimationBlueprint(int32 EntryPoint);
}; // Size: 0x3890

#endif
