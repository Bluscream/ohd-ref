#ifndef UE4SS_SDK_AnimNotify_PlayCameraAnimation_HPP
#define UE4SS_SDK_AnimNotify_PlayCameraAnimation_HPP

class UAnimNotify_PlayCameraAnimation_C : public UAnimNotify
{
    class UCurveVector* Camera Curve;                                                 // 0x0038 (size: 0x8)
    float SmoothingSpeed;                                                             // 0x0040 (size: 0x4)
    int32 PlaybackSlot;                                                               // 0x0044 (size: 0x4)
    float TransitionSpeed;                                                            // 0x0048 (size: 0x4)
    bool bHoldForward;                                                                // 0x004C (size: 0x1)

    FString GetNotifyName();
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x4D

#endif
