#ifndef UE4SS_SDK_BP_HDScopeComponentBase_HPP
#define UE4SS_SDK_BP_HDScopeComponentBase_HPP

class UBP_HDScopeComponentBase_C : public UHDWeaponScopeComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01F0 (size: 0x8)
    bool UseOverlay;                                                                  // 0x01F8 (size: 0x1)
    char padding_0[0x3];                                                              // 0x01F9 (size: 0x3)
    float ScopeRadius;                                                                // 0x01FC (size: 0x4)
    float AimingFOV;                                                                  // 0x0200 (size: 0x4)
    float ADSOffset;                                                                  // 0x0204 (size: 0x4)
    int32 ScopeMaterialIndex;                                                         // 0x0208 (size: 0x4)
    char padding_1[0x4];                                                              // 0x020C (size: 0x4)
    TArray<FWeightedBlendable> PostProcessMaterial;                                   // 0x0210 (size: 0x10)
    class UMaterialInterface* ScopeGlassMaterial;                                     // 0x0220 (size: 0x8)
    class UMaterialInterface* ScopeOpticMaterial;                                     // 0x0228 (size: 0x8)
    TSubclassOf<class UUserWidget> ScopeOverlayClass;                                 // 0x0230 (size: 0x8)
    float FreeAimMaxPitch;                                                            // 0x0238 (size: 0x4)
    float FreeAimMaxYaw;                                                              // 0x023C (size: 0x4)
    float ReticleOffsetY;                                                             // 0x0240 (size: 0x4)
    float ReticleOffsetX;                                                             // 0x0244 (size: 0x4)
    class UMaterialInstanceDynamic* ScopeMIDGlass;                                    // 0x0248 (size: 0x8)
    class UUserWidget* ScopeOverlay;                                                  // 0x0250 (size: 0x8)
    float AimInterpSpeed;                                                             // 0x0258 (size: 0x4)
    char padding_2[0x4];                                                              // 0x025C (size: 0x4)
    class UMaterialInstanceDynamic* ScopeMID;                                         // 0x0260 (size: 0x8)
    float DefaultAimingFOV;                                                           // 0x0268 (size: 0x4)
    float DefaultAimInterpSpeed;                                                      // 0x026C (size: 0x4)
    float DefaultFreeAimPitch;                                                        // 0x0270 (size: 0x4)
    float DefaultFreeAimYaw;                                                          // 0x0274 (size: 0x4)
    char padding_3[0x8];                                                              // 0x0278 (size: 0x8)
    FPostProcessSettings DefaultCameraPostProcess;                                    // 0x0280 (size: 0x540)
    bool bIsScopedIn;                                                                 // 0x07C0 (size: 0x1)
    char padding_4[0x3];                                                              // 0x07C1 (size: 0x3)
    float DefaultADSOffset;                                                           // 0x07C4 (size: 0x4)
    class UMeshComponent* ParentMesh;                                                 // 0x07C8 (size: 0x8)
    class AHDPlayerController* ControllerRef;                                         // 0x07D0 (size: 0x8)
    class ABP_HDPlayerCharacterBase_C* CharacterRef;                                  // 0x07D8 (size: 0x8)
    class ABP_HDWeaponBase_C* ParentWeaponRef;                                        // 0x07E0 (size: 0x8)
    TArray<FWeightedBlendable> PostProcessRef;                                        // 0x07E8 (size: 0x10)
    class ADFPlayerCameraManager* CameraRef;                                          // 0x07F8 (size: 0x8)
    TArray<class UBP_HDScopeComponentBase_C*> ParentSightList;                        // 0x0800 (size: 0x10)
    FMaterialParameterInfo MPC;                                                       // 0x0810 (size: 0x10)

    void ClearOwnerData();
    void SetupOwnerData(bool& IsValid);
    void LoadDefaults(bool IsPlayerDead);
    void SaveDefaults();
    void Init();
    void ScopeEffect();
    void CanScope(bool& CanScope);
    void GetData(class ABP_HDPlayerCharacterBase_C*& Character, class AHDPlayerController*& Controller, class UDFCharacterMovementComponent*& Movement, class ADFPlayerCameraManager*& Camera, class ABP_HDWeaponBase_C*& Parent, class USkeletalMeshComponent*& CharacterMesh, class UMeshComponent*& WeaponMesh, TArray<class UBP_HDScopeComponentBase_C*>& ParentSightList, TArray<class UMaterialInstanceDynamic*>& FirstPersonMatArray, TArray<class UMaterialInstanceDynamic*>& ThirdPersonMatArray);
    void AimOut();
    void AimIn();
    void AimTransition(bool bIsStartTransition);
    void AimStyle(class AHDPlayerCharacter* Character, EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
    void DeathEvent(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    void ItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
    void ChangeSights();
    void ReceiveTick(float DeltaSeconds);
    void EventActivated(class UActorComponent* Component, bool bReset);
    void EventDeactivated(class UActorComponent* Component);
    void BindEvents(class ABP_HDPlayerCharacterBase_C* NewCharacter, class ABP_HDWeaponBase_C* NewWeapon);
    void UnbindEvents(class ABP_HDPlayerCharacterBase_C* OldCharacter, class ABP_HDWeaponBase_C* OldWeapon);
    void ExecuteUbergraph_BP_HDScopeComponentBase(int32 EntryPoint);
}; // Size: 0x820

#endif
