#ifndef UE4SS_SDK_BP_HDScopeWeaponBase_HPP
#define UE4SS_SDK_BP_HDScopeWeaponBase_HPP

class ABP_HDScopeWeaponBase_C : public ABP_HDWeaponBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A58 (size: 0x8)
    class USphereComponent* RadiusDebugSphere;                                        // 0x0A60 (size: 0x8)
    class USceneComponent* RadiusDebugTopPoint;                                       // 0x0A68 (size: 0x8)
    class ABP_HDPlayerCharacterBase_C* PlayerCharOwner;                               // 0x0A70 (size: 0x8)
    class UDFCharacterMovementComponent* PlayerCharOwnerMoveComp;                     // 0x0A78 (size: 0x8)
    class AHDPlayerController* PCOwner;                                               // 0x0A80 (size: 0x8)
    class ADFPlayerCameraManager* PlayerOwnerCamMgr;                                  // 0x0A88 (size: 0x8)
    float DefaultAimingFOV;                                                           // 0x0A90 (size: 0x4)
    float DefaultAimingDistance;                                                      // 0x0A94 (size: 0x4)
    float DefaultAimInterpSpeed;                                                      // 0x0A98 (size: 0x4)
    float DefaultFreeAimPitch;                                                        // 0x0A9C (size: 0x4)
    float DefaultFreeAimYaw;                                                          // 0x0AA0 (size: 0x4)
    char padding_0[0xC];                                                              // 0x0AA4 (size: 0xC)
    FPostProcessSettings DefaultCameraPostProcess;                                    // 0x0AB0 (size: 0x540)
    class UMaterialInstanceDynamic* ScopeMID;                                         // 0x0FF0 (size: 0x8)
    class UMaterialInstanceDynamic* ScopeMIDGlass;                                    // 0x0FF8 (size: 0x8)
    bool bUseOverlay;                                                                 // 0x1000 (size: 0x1)
    char padding_1[0x3];                                                              // 0x1001 (size: 0x3)
    float AimingFOV;                                                                  // 0x1004 (size: 0x4)
    float AimInterpSpeed;                                                             // 0x1008 (size: 0x4)
    float AimInDelay;                                                                 // 0x100C (size: 0x4)
    float BlurEffectDelay;                                                            // 0x1010 (size: 0x4)
    float ScopeRadius;                                                                // 0x1014 (size: 0x4)
    float FreeAimMaxPitch;                                                            // 0x1018 (size: 0x4)
    float FreeAimMaxYaw;                                                              // 0x101C (size: 0x4)
    int32 ScopeMaterialIndex;                                                         // 0x1020 (size: 0x4)
    char padding_2[0x4];                                                              // 0x1024 (size: 0x4)
    TArray<FWeightedBlendable> PostProcessMaterial;                                   // 0x1028 (size: 0x10)
    class UMaterialInterface* ScopeGlassMaterial;                                     // 0x1038 (size: 0x8)
    class UMaterialInterface* ScopeOpticMaterial;                                     // 0x1040 (size: 0x8)
    class UUserWidget* ScopeOverlay;                                                  // 0x1048 (size: 0x8)
    TSubclassOf<class UUserWidget> ScopeOverlayClass;                                 // 0x1050 (size: 0x8)
    float ReticleOffsetY;                                                             // 0x1058 (size: 0x4)
    float ReticleOffsetX;                                                             // 0x105C (size: 0x4)
    TArray<FWeightedBlendable> PostProcessRef;                                        // 0x1060 (size: 0x10)

    void ShouldUseScope(bool& bUseScope);
    void SaveOwnerDefaultValues();
    void RestoreOwnerDefaultValues();
    void ScopeEffects();
    void AimOut();
    void AimIn();
    void HasLocallyPlayerControlledOwner(bool& bLocalPlayerOwner);
    void HasValidOwnerData(bool bCharAliveCheck, bool& bValidOwnerData);
    void ResetDefaultValues();
    void CleanupOwnerData();
    void SetupOwnerData(bool& bValidOwnerData);
    void UserConstructionScript();
    void StartAimInScope();
    void StartAimOutScope();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveOnEquipFinished();
    void ReceiveOnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory);
    void ResetAimOutGate();
    void ReceiveOnLeaveInventory(class ADFBaseCharacter* LastOwner);
    void SetCurrentSight(class USceneComponent* Sight);
    void OnBraceAimEnd();
    void ExecuteUbergraph_BP_HDScopeWeaponBase(int32 EntryPoint);
}; // Size: 0x1070

#endif
