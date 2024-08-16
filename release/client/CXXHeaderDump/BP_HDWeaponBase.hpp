#ifndef UE4SS_SDK_BP_HDWeaponBase_HPP
#define UE4SS_SDK_BP_HDWeaponBase_HPP

class ABP_HDWeaponBase_C : public AHDBaseWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class USceneComponent* Muzzle;                                                    // 0x0878 (size: 0x8)
    class USceneComponent* DefaultBipod;                                              // 0x0880 (size: 0x8)
    class USceneComponent* DefaultGrip;                                               // 0x0888 (size: 0x8)
    class USceneComponent* DefaultBarrel;                                             // 0x0890 (size: 0x8)
    class USceneComponent* DefaultSight;                                              // 0x0898 (size: 0x8)
    TMap<class FName, class UAnimSequenceBase*> LocoAnimSet;                          // 0x08A0 (size: 0x50)
    TMap<class FName, class UAnimSequenceBase*> LocoTPPAnimSet;                       // 0x08F0 (size: 0x50)
    bool bUseMirroredLowerBodyLocomotion;                                             // 0x0940 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0941 (size: 0x3)
    FVector FirstPersonPositionOffset;                                                // 0x0944 (size: 0xC)
    bool bHasGrip;                                                                    // 0x0950 (size: 0x1)
    bool bHasBipod;                                                                   // 0x0951 (size: 0x1)
    char padding_1[0x2];                                                              // 0x0952 (size: 0x2)
    FVector BracedAimPosition;                                                        // 0x0954 (size: 0xC)
    class USceneComponent* CurrentSight;                                              // 0x0960 (size: 0x8)
    class USceneComponent* CurrentBarrel;                                             // 0x0968 (size: 0x8)
    class USceneComponent* CurrentGrip;                                               // 0x0970 (size: 0x8)
    class USceneComponent* CurrentBipod;                                              // 0x0978 (size: 0x8)
    TArray<class USceneComponent*> Sights;                                            // 0x0980 (size: 0x10)
    FBP_HDWeaponBase_COnUpdateAttachments OnUpdateAttachments;                        // 0x0990 (size: 0x10)
    void OnUpdateAttachments();
    float ADSOffset;                                                                  // 0x09A0 (size: 0x4)
    float BipodPlayerDistance;                                                        // 0x09A4 (size: 0x4)
    float BipodCameraHeight;                                                          // 0x09A8 (size: 0x4)
    char padding_2[0x4];                                                              // 0x09AC (size: 0x4)
    TSubclassOf<class UCameraShake> FiringScreenShake;                                // 0x09B0 (size: 0x8)
    float BracedAimTilt;                                                              // 0x09B8 (size: 0x4)
    FVector ThirdPersonPositionOffset;                                                // 0x09BC (size: 0xC)
    FVector ThirdPersonAimOffset;                                                     // 0x09C8 (size: 0xC)
    float KickAmount;                                                                 // 0x09D4 (size: 0x4)
    float KickNoiseAmount;                                                            // 0x09D8 (size: 0x4)
    char padding_3[0x4];                                                              // 0x09DC (size: 0x4)
    TArray<FName> BasePoseBonesToHide;                                                // 0x09E0 (size: 0x10)
    FName SecondMagBoneName;                                                          // 0x09F0 (size: 0x8)
    FName BulletBoneName;                                                             // 0x09F8 (size: 0x8)
    FRotator LowReadyRotationOffset;                                                  // 0x0A00 (size: 0xC)
    FVector LowReadyPositionOffset;                                                   // 0x0A0C (size: 0xC)
    FBP_HDWeaponBase_COnUpdateSights OnUpdateSights;                                  // 0x0A18 (size: 0x10)
    void OnUpdateSights();
    TArray<class UMaterialInstanceDynamic*> ThirdPersonMatArray;                      // 0x0A28 (size: 0x10)
    float AmmoPercent;                                                                // 0x0A38 (size: 0x4)
    char padding_4[0x4];                                                              // 0x0A3C (size: 0x4)
    TArray<class UMaterialInstanceDynamic*> FirstPersonMatArray;                      // 0x0A40 (size: 0x10)
    float ResetAmmoPercentTime;                                                       // 0x0A50 (size: 0x4)

    void ShouldUseMirroredLowerBodyLoco(bool& bOutUseMirrored);
    void GetLocoTPPAnimSet(TMap<class FName, class UAnimSequenceBase*>& OutAnimSet);
    void GetLocoAnimSet(TMap<class FName, class UAnimSequenceBase*>& OutAnimSet);
    void SetAmmoPercent(int32 CurrentClipAmmo, int32 MaxClipAmmo);
    void SetAmmoPercentFromClip(class ADFBaseAmmoClip* FromAmmoClip);
    void InternalAmmoPercentUpdate();
    void OnRep_AmmoPercent();
    void FindNextMagazine(class ADFBaseAmmoClip*& NextClip);
    bool CanFire();
    void InternalSetVisibilityForAttachment(class USceneComponent* Attachment, bool bFirstPerson);
    void UpdateAttachmentVisibility(bool bFirstPerson);
    bool RemoveLegacyLocomotionAnims(bool bFPP);
    TMap<class FName, class UAnimSequenceBase*> GetLegacyLocomotionAnims(bool bFPP);
    void UserConstructionScript();
    void CycleSight();
    void SetCurrentSight(class USceneComponent* Sight);
    void ReceiveFire();
    void ReceiveVisibilityChanged(bool bFirstPerson);
    void ReceiveOnEquip(const class ADFBaseItem* LastItem);
    void ResetBullets();
    void ReceiveReloadFinished();
    void ServerResetAmmoPercent();
    void ReceiveFireModeChanged(EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput);
    void ExecuteUbergraph_BP_HDWeaponBase(int32 EntryPoint);
    void OnUpdateSights__DelegateSignature();
    void OnUpdateAttachments__DelegateSignature();
}; // Size: 0xA54

#endif
