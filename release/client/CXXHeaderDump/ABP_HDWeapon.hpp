#ifndef UE4SS_SDK_ABP_HDWeapon_HPP
#define UE4SS_SDK_ABP_HDWeapon_HPP

class UABP_HDWeapon_C : public UHDWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0288 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x02B8 (size: 0xA0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0358 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x03A0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0418 (size: 0x78)
    bool bEmpty;                                                                      // 0x0490 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0491 (size: 0x7)
    class UAnimSequence* BasePoseAnim;                                                // 0x0498 (size: 0x8)
    class UAnimSequence* EmptyBasePoseAnim;                                           // 0x04A0 (size: 0x8)
    class ABP_HDWeaponBase_C* OwningWeapon;                                           // 0x04A8 (size: 0x8)

    float PlayEquipMontage(class UAnimMontage* MontageToPlay);
    float PlayFireMontage(class UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming);
    float PlayReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
    float PlayUnEquipMontage(class UAnimMontage* MontageToPlay);
    void AnimGraph(FPoseLink& AnimGraph);
    void PlayWeaponFPPMontage(class UAnimMontage* MontageToPlay, bool bForceDisableAutoBlendOut, float& PlayDuration);
    void AnimNotify_HideMag();
    void AnimNotify_ShowMag();
    void AnimNotify_HideBullet();
    void AnimNotify_ShowBullet();
    void WeaponFire(bool bLastFire);
    void WeaponReloadFinished(class ADFBaseGun* Gun);
    void BlueprintUpdateWeaponOwnerRefs(class ADFBaseWeapon* NewWeap);
    void BlueprintInitializeAnimation();
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_HDWeapon(int32 EntryPoint);
}; // Size: 0x4B0

#endif
