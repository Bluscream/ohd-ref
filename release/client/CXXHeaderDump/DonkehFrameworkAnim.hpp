#ifndef UE4SS_SDK_DonkehFrameworkAnim_HPP
#define UE4SS_SDK_DonkehFrameworkAnim_HPP

#include "DonkehFrameworkAnim_enums.hpp"

struct FBoneModifier
{
    FName Bone;                                                                       // 0x0000 (size: 0x8)
    float Offset;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FDFCharStanceContext
{
    uint8 bWantsToBeInStance;                                                         // 0x0000 (size: 0x1)
    uint8 bIsInStance;                                                                // 0x0000 (size: 0x1)
    uint8 bFullyTransitionedIntoStance;                                               // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FFootstepFXSettings
{
    TMap<TEnumAsByte<EPhysicalSurface>, FPerspectiveSound> SoundsToPlay;              // 0x0000 (size: 0x50)
    float VolumeMultiplier;                                                           // 0x0050 (size: 0x4)
    float PitchMultiplier;                                                            // 0x0054 (size: 0x4)
    uint8 bAttachSound;                                                               // 0x0058 (size: 0x1)
    uint8 bPlaySoundsWithPerspMeshOnly;                                               // 0x0058 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0059 (size: 0x7)
    TMap<TEnumAsByte<EPhysicalSurface>, UFXSystemAsset*> EffectsToSpawn;              // 0x0060 (size: 0x50)
    uint8 bAttachEffect;                                                              // 0x00B0 (size: 0x1)
    char padding_1[0x3];                                                              // 0x00B1 (size: 0x3)
    FVector EffectLocationOffset;                                                     // 0x00B4 (size: 0xC)
    FRotator EffectRotationOffset;                                                    // 0x00C0 (size: 0xC)
    FVector EffectScale;                                                              // 0x00CC (size: 0xC)
    uint8 bSpawnEffectsWithPerspMeshOnly;                                             // 0x00D8 (size: 0x1)
    EFootstepVariant FootstepVariant;                                                 // 0x00D9 (size: 0x1)
    char padding_2[0x2];                                                              // 0x00DA (size: 0x2)
    FName FootstepVariantParamName;                                                   // 0x00DC (size: 0x8)
    FName FootBoneName;                                                               // 0x00E4 (size: 0x8)
    float FootTraceOffset;                                                            // 0x00EC (size: 0x4)
    uint8 bDebug;                                                                     // 0x00F0 (size: 0x1)

}; // Size: 0xF8

class UAnimNotify_PlayFootstepFX : public UAnimNotify
{
    TMap<TEnumAsByte<EPhysicalSurface>, FPerspectiveSound> SoundsToPlay;              // 0x0038 (size: 0x50)
    float VolumeMultiplier;                                                           // 0x0088 (size: 0x4)
    float PitchMultiplier;                                                            // 0x008C (size: 0x4)
    uint8 bAttachSound;                                                               // 0x0090 (size: 0x1)
    uint8 bPlaySoundsWithPerspMeshOnly;                                               // 0x0090 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0091 (size: 0x7)
    TMap<TEnumAsByte<EPhysicalSurface>, UFXSystemAsset*> EffectsToSpawn;              // 0x0098 (size: 0x50)
    uint8 bAttachEffect;                                                              // 0x00E8 (size: 0x1)
    char padding_1[0x3];                                                              // 0x00E9 (size: 0x3)
    FVector EffectLocationOffset;                                                     // 0x00EC (size: 0xC)
    FRotator EffectRotationOffset;                                                    // 0x00F8 (size: 0xC)
    char padding_2[0x1C];                                                             // 0x0104 (size: 0x1C)
    FVector EffectScale;                                                              // 0x0120 (size: 0xC)
    uint8 bSpawnEffectsWithPerspMeshOnly;                                             // 0x012C (size: 0x1)
    EFootstepVariant FootstepVariant;                                                 // 0x012D (size: 0x1)
    char padding_3[0x2];                                                              // 0x012E (size: 0x2)
    FName FootstepVariantParamName;                                                   // 0x0130 (size: 0x8)
    FName FootBoneName;                                                               // 0x0138 (size: 0x8)
    float FootTraceOffset;                                                            // 0x0140 (size: 0x4)
    uint8 bDebug;                                                                     // 0x0144 (size: 0x1)

    void SetFootstepNotifyProps(const FFootstepFXSettings& PropsToUse);
    FFootstepFXSettings GetFootstepNotifyProps();
    bool EqualProps(const FFootstepFXSettings& Props, const FFootstepFXSettings& OtherProps);
}; // Size: 0x150

class UDFCharacterAnimInstance : public UAnimInstance
{
    uint8 bPreviewAnimInstance;                                                       // 0x0268 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0269 (size: 0x7)
    class APawn* CachedPawnOwner;                                                     // 0x0270 (size: 0x8)
    class ADFBaseCharacter* DFCharOwner;                                              // 0x0278 (size: 0x8)
    class AController* ControllerOwner;                                               // 0x0280 (size: 0x8)
    class ADFBaseItem* EquippedWeapon;                                                // 0x0288 (size: 0x8)
    TEnumAsByte<EMovementMode> MoveMode;                                              // 0x0290 (size: 0x1)
    ECharacterStance MoveStance;                                                      // 0x0291 (size: 0x1)
    char padding_1[0x2];                                                              // 0x0292 (size: 0x2)
    FVector MoveVelocity;                                                             // 0x0294 (size: 0xC)
    float MoveSpeed;                                                                  // 0x02A0 (size: 0x4)
    float MoveDirectionDeg;                                                           // 0x02A4 (size: 0x4)
    uint8 bMoving;                                                                    // 0x02A8 (size: 0x1)
    uint8 bInAir;                                                                     // 0x02A8 (size: 0x1)
    uint8 bJumped;                                                                    // 0x02A8 (size: 0x1)
    uint8 bSprinting;                                                                 // 0x02A8 (size: 0x1)
    uint8 bAiming;                                                                    // 0x02A8 (size: 0x1)
    uint8 bLeaning;                                                                   // 0x02A8 (size: 0x1)
    FDFCharStanceContext StandState;                                                  // 0x02A9 (size: 0x1)
    FDFCharStanceContext CrouchState;                                                 // 0x02AA (size: 0x1)
    FDFCharStanceContext ProneState;                                                  // 0x02AB (size: 0x1)
    FRotator AimOffsets;                                                              // 0x02AC (size: 0xC)

    class ADFBaseItem* TryGetOwnerWeapon();
    class AController* TryGetControllerOwner();
    void EquippedWeaponChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedWeap, class ADFBaseItem* PrevEquippedWeap);
    void BlueprintUpdatePawnOwnerRefs(class APawn* NewPawn);
    void BlueprintUpdateEquippedWeaponRefs(class ADFBaseItem* NewWeap);
    void BlueprintUpdateControllerOwnerRefs(class AController* NewC);
}; // Size: 0x2C0

class UDFWeaponAnimInstance : public UAnimInstance
{
    uint8 bPreviewAnimInstance;                                                       // 0x0268 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0269 (size: 0x7)
    class ADFBaseWeapon* WeaponOwner;                                                 // 0x0270 (size: 0x8)

    class ADFBaseWeapon* TryGetWeaponOwner();
    void BlueprintUpdateWeaponOwnerRefs(class ADFBaseWeapon* NewWeap);
}; // Size: 0x280

#endif
