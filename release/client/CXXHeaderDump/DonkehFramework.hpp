#ifndef UE4SS_SDK_DonkehFramework_HPP
#define UE4SS_SDK_DonkehFramework_HPP

#include "DonkehFramework_enums.hpp"

struct FAnimMontagePlaybackParams
{
    class UAnimMontage* Montage;                                                      // 0x0000 (size: 0x8)
    class USkeletalMeshComponent* SourceMeshComp;                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FAssetDescriptor
{
    FName AssetName;                                                                  // 0x0000 (size: 0x8)
    FText DisplayText;                                                                // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FCSHitInfo
{
    uint8 bBlockingHit;                                                               // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    float Distance;                                                                   // 0x0004 (size: 0x4)
    FVector_NetQuantize Location;                                                     // 0x0008 (size: 0xC)
    FVector_NetQuantizeNormal Normal;                                                 // 0x0014 (size: 0xC)
    FName BoneName;                                                                   // 0x0020 (size: 0x8)
    FVector_NetQuantize ShootLoc;                                                     // 0x0028 (size: 0xC)
    FVector_NetQuantizeNormal ShootDir;                                               // 0x0034 (size: 0xC)
    FVector_NetQuantize TraceStart;                                                   // 0x0040 (size: 0xC)
    FVector_NetQuantize TraceEnd;                                                     // 0x004C (size: 0xC)
    TWeakObjectPtr<class AActor> Actor;                                               // 0x0058 (size: 0x8)
    TWeakObjectPtr<class UPrimitiveComponent> Component;                              // 0x0060 (size: 0x8)
    TWeakObjectPtr<class AController> InstigatingController;                          // 0x0068 (size: 0x8)

}; // Size: 0x70

struct FCharacterAnimCollection
{
    class UAnimSequence* BasePose;                                                    // 0x0000 (size: 0x8)
    class UAnimSequence* BasePoseTPP;                                                 // 0x0008 (size: 0x8)
    class UAnimSequence* AimBasePose;                                                 // 0x0010 (size: 0x8)
    class UAnimMontage* Death;                                                        // 0x0018 (size: 0x8)
    FIntrinsicWeaponAnimSubset Intrinsic;                                             // 0x0020 (size: 0x28)
    FLocomotionWeaponAnimSubset Locomotion;                                           // 0x0048 (size: 0x18)
    FSingleActionWeaponAnimSubset SingleAction;                                       // 0x0060 (size: 0x8)
    FSingleLoadWeaponAnimSubset SingleLoad;                                           // 0x0068 (size: 0x10)
    FThrowableWeaponAnimSubset Throwable;                                             // 0x0078 (size: 0x20)
    FPerspectiveAnim DeathAnim;                                                       // 0x0098 (size: 0x10)
    FPerspectiveAnim EquipAnim;                                                       // 0x00A8 (size: 0x10)
    FPerspectiveAnim UnEquipAnim;                                                     // 0x00B8 (size: 0x10)
    FPerspectiveAnim FireAnim;                                                        // 0x00C8 (size: 0x10)
    FPerspectiveAnim ActionAnim;                                                      // 0x00D8 (size: 0x10)
    FPerspectiveAnim ReloadAnim;                                                      // 0x00E8 (size: 0x10)
    FPerspectiveAnim ReloadFullAnim;                                                  // 0x00F8 (size: 0x10)
    FPerspectiveAnim StartReloadAnim;                                                 // 0x0108 (size: 0x10)
    FPerspectiveAnim EndReloadAnim;                                                   // 0x0118 (size: 0x10)

}; // Size: 0x128

struct FCharacterSoundCollection
{
    FPerspectiveSound DeathSound;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDFActiveVoteInfo
{
    TSubclassOf<class UDFVoteIssue> IssueClass;                                       // 0x0000 (size: 0x8)
    FDFVoteIssueContext IssueContext;                                                 // 0x0008 (size: 0x18)
    float VoteEndTime;                                                                // 0x0020 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0024 (size: 0x4)
    class APlayerState* OwningPlayer;                                                 // 0x0028 (size: 0x8)
    EDFVoteStatus Status;                                                             // 0x0030 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0031 (size: 0x7)
    TArray<FDFPlayerVoteSelection> Votes;                                             // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FDFCharacterVariation
{
    TSoftObjectPtr<USkeletalMesh> Mesh;                                               // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FDFCharacterVariationData : public FTableRowBase
{
    FDFCharacterVariation Variation;                                                  // 0x0008 (size: 0x30)
    FDFCharacterVariation VariationFPP;                                               // 0x0038 (size: 0x30)

}; // Size: 0x68

struct FDFCharacterVariationDataHandle
{
    char padding_0[0x18];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x18

struct FDFCharacterVariationDataSource
{
    char padding_0[0x8];                                                              // 0x0000 (size: 0x0)
}; // Size: 0x8

struct FDFCharacterVariationDataSource_TableRow : public FDFCharacterVariationDataSource
{
    FDataTableRowHandle RowHandle;                                                    // 0x0008 (size: 0x10)
    bool bValidRowHandle;                                                             // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FDFDamageParams : public FRadialDamageParams
{
    char padding_0[0x14];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x14

struct FDFGenericObject : public FFastArraySerializerItem
{
    class UObject* Object;                                                            // 0x0010 (size: 0x8)
    char padding_0[0x8];                                                              // 0x0018 (size: 0x8)
    uint8 bPendingRemoval;                                                            // 0x0020 (size: 0x1)
    uint8 bPredictivelyRemoved;                                                       // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FDFGenericObjectContainer : public FFastArraySerializer
{
    TArray<FDFGenericObject> GenericObjects;                                          // 0x0108 (size: 0x10)
    char padding_0[0x8];                                                              // 0x0118 (size: 0x8)
    UClass* RequiredClass;                                                            // 0x0120 (size: 0x8)

}; // Size: 0x180

struct FDFPlayerVote
{
    class APlayerState* VoterPS;                                                      // 0x0000 (size: 0x8)
    int32 SelectionIdx;                                                               // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FDFPlayerVoteSelection
{
    int32 SelectionIdx;                                                               // 0x0000 (size: 0x4)
    int32 VoteCount;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FDFPropertyAssetBundles
{
    char padding_0[0x1];                                                              // 0x0000 (size: 0x0)
}; // Size: 0x1

struct FDFVaultTargetParams
{
    EVaultBehavior DesiredBehavior;                                                   // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    FVector_NetQuantize10 Location;                                                   // 0x0004 (size: 0xC)

}; // Size: 0x10

struct FDFVaultTraceData
{
    FDFVaultTargetParams TargetParams;                                                // 0x0000 (size: 0x10)
    EVaultBehavior Behavior;                                                          // 0x0010 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0011 (size: 0x3)
    float Height;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FDFVaultTraceResult : public FDFVaultTraceData
{
    bool bSuccess;                                                                    // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FDFVoteIssueContext
{
    class APlayerState* TargetPlayer;                                                 // 0x0000 (size: 0x8)

}; // Size: 0x18

struct FDFVoteIssueDefinition
{
    TSubclassOf<class UDFVoteIssue> IssueClass;                                       // 0x0000 (size: 0x8)
    uint8 bOnlyAdminsCanInitiateVote;                                                 // 0x0008 (size: 0x1)
    uint8 bAllowAdminTargets;                                                         // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FDFVotingComponentConfig
{
    TArray<class TSubclassOf<UDFVoteIssue>> AllowedVoteIssues;                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDecalData
{
    class UMaterialInterface* DecalMaterial;                                          // 0x0000 (size: 0x8)
    float DecalSize;                                                                  // 0x0008 (size: 0x4)
    float LifeSpan;                                                                   // 0x000C (size: 0x4)

}; // Size: 0x10

struct FIntrinsicWeaponAnimSubset
{
    class UAnimMontage* Equip;                                                        // 0x0000 (size: 0x8)
    class UAnimMontage* UnEquip;                                                      // 0x0008 (size: 0x8)
    class UAnimMontage* Fire;                                                         // 0x0010 (size: 0x8)
    class UAnimMontage* Reload;                                                       // 0x0018 (size: 0x8)
    class UAnimMontage* ReloadEmpty;                                                  // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FLocomotionWeaponAnimSubset
{
    class UAnimSequence* Idle;                                                        // 0x0000 (size: 0x8)
    class UAnimSequence* Move;                                                        // 0x0008 (size: 0x8)
    class UAnimSequence* Sprint;                                                      // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FPerspectiveAnim
{
    class UAnimSequenceBase* Anim1P;                                                  // 0x0000 (size: 0x8)
    class UAnimSequenceBase* Anim3P;                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPerspectiveAnimSequence
{
    class UAnimSequence* Anim1P;                                                      // 0x0000 (size: 0x8)
    class UAnimSequence* Anim3P;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPerspectiveSkeletalMesh
{
    class USkeletalMesh* Mesh1P;                                                      // 0x0000 (size: 0x8)
    class USkeletalMesh* Mesh3P;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPerspectiveSound
{
    class USoundBase* Sound1P;                                                        // 0x0000 (size: 0x8)
    class USoundBase* Sound3P;                                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPerspectiveStaticMesh
{
    class UStaticMesh* Mesh1P;                                                        // 0x0000 (size: 0x8)
    class UStaticMesh* Mesh3P;                                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPlayerChatMsg
{
    class APlayerState* SenderPS;                                                     // 0x0000 (size: 0x8)
    FString SenderName;                                                               // 0x0008 (size: 0x10)
    uint8 MsgTeamId;                                                                  // 0x0018 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0019 (size: 0x7)
    FString MsgContent;                                                               // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRepShotInfo
{
    uint16 ShotCounter;                                                               // 0x0000 (size: 0x2)
    bool bIsFiring;                                                                   // 0x0002 (size: 0x1)
    bool bCompressByte;                                                               // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FSingleActionWeaponAnimSubset
{
    class UAnimMontage* Action;                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FSingleLoadWeaponAnimSubset
{
    class UAnimMontage* StartReload;                                                  // 0x0000 (size: 0x8)
    class UAnimMontage* EndReload;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSpawnPointDef
{
    int32 SpawnID;                                                                    // 0x0000 (size: 0x4)
    char padding_0[0xC];                                                              // 0x0004 (size: 0xC)
    FTransform SpawnTransform;                                                        // 0x0010 (size: 0x30)
    class UObject* SpawnContextObject;                                                // 0x0040 (size: 0x8)

}; // Size: 0x50

struct FTakeHitInfo
{
    float ActualDamage;                                                               // 0x0000 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0004 (size: 0x4)
    UClass* DamageTypeClass;                                                          // 0x0008 (size: 0x8)
    TWeakObjectPtr<class APawn> PawnInstigator;                                       // 0x0010 (size: 0x8)
    TWeakObjectPtr<class AActor> DamageCauser;                                        // 0x0018 (size: 0x8)
    int32 DamageEventClassID;                                                         // 0x0020 (size: 0x4)
    uint8 bKilled;                                                                    // 0x0024 (size: 0x1)
    uint8 EnsureReplicationByte;                                                      // 0x0025 (size: 0x1)
    char padding_1[0x2];                                                              // 0x0026 (size: 0x2)
    FDamageEvent GeneralDamageEvent;                                                  // 0x0028 (size: 0x10)
    FPointDamageEvent PointDamageEvent;                                               // 0x0038 (size: 0xA8)
    FRadialDamageEvent RadialDamageEvent;                                             // 0x00E0 (size: 0x40)

}; // Size: 0x120

struct FThrowableWeaponAnimSubset
{
    class UAnimSequence* ReadyBasePose;                                               // 0x0000 (size: 0x8)
    class UAnimMontage* Cock;                                                         // 0x0008 (size: 0x8)
    class UAnimMontage* ThrowOverhand;                                                // 0x0010 (size: 0x8)
    class UAnimMontage* ThrowUnderhand;                                               // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FWeaponAnim
{
    class UAnimSequenceBase* CharAnim;                                                // 0x0000 (size: 0x8)
    class UAnimSequenceBase* WeapAnim;                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWeaponAnimCollection
{
    class UAnimSequence* BasePose;                                                    // 0x0000 (size: 0x8)
    class UAnimSequence* EmptyBasePose;                                               // 0x0008 (size: 0x8)
    FIntrinsicWeaponAnimSubset Intrinsic;                                             // 0x0010 (size: 0x28)
    FSingleActionWeaponAnimSubset SingleAction;                                       // 0x0038 (size: 0x8)
    FSingleLoadWeaponAnimSubset SingleLoad;                                           // 0x0040 (size: 0x10)
    FThrowableWeaponAnimSubset Throwable;                                             // 0x0050 (size: 0x20)
    FPerspectiveAnim EquipAnim;                                                       // 0x0070 (size: 0x10)
    FPerspectiveAnim UnEquipAnim;                                                     // 0x0080 (size: 0x10)
    FPerspectiveAnim FireAnim;                                                        // 0x0090 (size: 0x10)
    FPerspectiveAnim ActionAnim;                                                      // 0x00A0 (size: 0x10)
    FPerspectiveAnim ReloadAnim;                                                      // 0x00B0 (size: 0x10)
    FPerspectiveAnim ReloadFullAnim;                                                  // 0x00C0 (size: 0x10)
    FPerspectiveAnim StartReloadAnim;                                                 // 0x00D0 (size: 0x10)
    FPerspectiveAnim EndReloadAnim;                                                   // 0x00E0 (size: 0x10)

}; // Size: 0xF0

struct FWeaponAnimMontage
{
    class UAnimMontage* CharAnim;                                                     // 0x0000 (size: 0x8)
    class UAnimMontage* WeapAnim;                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWeaponAnimSequence
{
    class UAnimSequence* CharAnim;                                                    // 0x0000 (size: 0x8)
    class UAnimSequence* WeapAnim;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWeaponSoundCollection
{
    FPerspectiveSound EquipSound;                                                     // 0x0000 (size: 0x10)
    FPerspectiveSound UnEquipSound;                                                   // 0x0010 (size: 0x10)
    FPerspectiveSound FireSound;                                                      // 0x0020 (size: 0x10)
    FPerspectiveSound FireLastSound;                                                  // 0x0030 (size: 0x10)
    FPerspectiveSound DryFireSound;                                                   // 0x0040 (size: 0x10)
    FPerspectiveSound ReloadSound;                                                    // 0x0050 (size: 0x10)
    FPerspectiveSound ReloadFullSound;                                                // 0x0060 (size: 0x10)
    FPerspectiveSound FireModeSound;                                                  // 0x0070 (size: 0x10)

}; // Size: 0x80

class ADFBaseAIController : public AAIController
{
    char padding_0[0x330];                                                            // 0x0000 (size: 0x0)

    bool CanRestartPlayer();
}; // Size: 0x330

class ADFBaseAmmoClip : public ADFBaseItem
{
    class ADFBaseGun* GunOwner;                                                       // 0x03A8 (size: 0x8)
    int32 CurrentClipAmmo;                                                            // 0x03B0 (size: 0x4)
    uint8 ReloadCounter;                                                              // 0x03B4 (size: 0x1)
    char padding_0[0x3];                                                              // 0x03B5 (size: 0x3)
    int32 SimulatedCurrentClipAmmo;                                                   // 0x03B8 (size: 0x4)
    char padding_1[0x4];                                                              // 0x03BC (size: 0x4)
    int32 StartingClipAmmo;                                                           // 0x03C0 (size: 0x4)
    int32 MaxClipAmmo;                                                                // 0x03C4 (size: 0x4)

    int32 StoreAmmoInInventory(class UDFInventoryComponent* AmmoStore, int32 AmmoAmt, const TSubclassOf<class ADFBaseAmmoClip>& AmmoType);
    void StoreAmmo(int32 AmmoToStore);
    void SetOwningGun(class ADFBaseGun* NewOwner);
    void SetCurrentClipAmmo(int32 NewClipAmmo);
    void OnRep_ReloadCounter();
    void OnRep_CurrentClipAmmo();
    bool IsLoaded();
    int32 GetStartingClipAmmo();
    int32 GetMaxClipAmmo();
    class ADFBaseGun* GetGunOwner();
    int32 GetCurrentClipAmmo();
    void ConsumeAmmo(int32 AmmoToConsume);
}; // Size: 0x3C8

class ADFBaseCharacter : public ACharacter
{
    uint8 RemoteViewYaw;                                                              // 0x04C0 (size: 0x1)
    char padding_0[0x7];                                                              // 0x04C1 (size: 0x7)
    uint8 bClientResimulateSprintStamina;                                             // 0x04C8 (size: 0x1)
    char padding_1[0x7];                                                              // 0x04C9 (size: 0x7)
    FCharacterAnimCollection DefaultPawnAnimCollection;                               // 0x04D0 (size: 0x128)
    uint8 bPlayFootstepFXWithPerspMeshOnly;                                           // 0x05F8 (size: 0x1)
    uint8 bTickAllAnimationOnDedicatedServer;                                         // 0x05F8 (size: 0x1)
    uint8 bOnlyTickAnimMontagesOnDedicatedServer;                                     // 0x05F8 (size: 0x1)
    char padding_2[0x7];                                                              // 0x05F9 (size: 0x7)
    FCharacterSoundCollection DefaultPawnSoundCollection;                             // 0x0600 (size: 0x10)
    class ADFBaseItem* EquippedItem;                                                  // 0x0610 (size: 0x8)
    class ADFBaseItem* LastEquippedItem;                                              // 0x0618 (size: 0x8)
    FDFBaseCharacterOnEquippedItemChanged OnEquippedItemChanged;                      // 0x0620 (size: 0x10)
    void CharacterEquippedItemChangedSignature(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
    FName ItemAttachPoint;                                                            // 0x0630 (size: 0x8)
    class UDFInventoryComponent* Inventory;                                           // 0x0638 (size: 0x8)
    class UDFLoadout* DefaultLoadout;                                                 // 0x0640 (size: 0x8)
    EDFItemEnabledMode ItemEnabledMode;                                               // 0x0648 (size: 0x1)
    char padding_3[0x3];                                                              // 0x0649 (size: 0x3)
    int32 ShotIDCounter;                                                              // 0x064C (size: 0x4)
    uint8 bAllowWeaponFireWhileCrawling;                                              // 0x0650 (size: 0x1)
    uint8 bDying;                                                                     // 0x0650 (size: 0x1)
    char padding_4[0x7];                                                              // 0x0651 (size: 0x7)
    FDFBaseCharacterOnHealthChanged OnHealthChanged;                                  // 0x0658 (size: 0x10)
    void CharacterHealthChangedSignature(class ADFBaseCharacter* Character, float NewHealthTotal, float PrevHealthTotal);
    float Health;                                                                     // 0x0668 (size: 0x4)
    char padding_5[0x14];                                                             // 0x066C (size: 0x14)
    float RagdollLifeSpan;                                                            // 0x0680 (size: 0x4)
    char padding_6[0x4];                                                              // 0x0684 (size: 0x4)
    FDFBaseCharacterOnCharacterDeath OnCharacterDeath;                                // 0x0688 (size: 0x10)
    void CharacterOnDeathSignature(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    float MaxHealth;                                                                  // 0x0698 (size: 0x4)
    char padding_7[0x4];                                                              // 0x069C (size: 0x4)
    FTakeHitInfo LastTakeHitInfo;                                                     // 0x06A0 (size: 0x120)
    char padding_8[0x8];                                                              // 0x07C0 (size: 0x8)
    TMap<FName, float> BoneDamageMultipliers;                                         // 0x07C8 (size: 0x50)
    uint8 bApplyDamageMomentumOnHit;                                                  // 0x0818 (size: 0x1)
    char padding_9[0x7];                                                              // 0x0819 (size: 0x7)
    FDFBaseCharacterOnSprintTransition OnSprintTransition;                            // 0x0820 (size: 0x10)
    void CharacterAbilityTransitionSignature(bool bIsStartTransition);
    FDFBaseCharacterOnAimTransition OnAimTransition;                                  // 0x0830 (size: 0x10)
    void CharacterAbilityTransitionSignature(bool bIsStartTransition);
    FDFBaseCharacterOnLeanTransition OnLeanTransition;                                // 0x0840 (size: 0x10)
    void CharacterAbilityTransitionSignature(bool bIsStartTransition);
    FDFBaseCharacterOnVaultTransition OnVaultTransition;                              // 0x0850 (size: 0x10)
    void CharacterAbilityTransitionSignature(bool bIsStartTransition);
    ECharacterStance ReplicatedStance;                                                // 0x0860 (size: 0x1)
    ECharacterStance PreviousStance;                                                  // 0x0861 (size: 0x1)
    uint8 bPressedVault;                                                              // 0x0862 (size: 0x1)
    uint8 bSprinting;                                                                 // 0x0862 (size: 0x1)
    uint8 bAiming;                                                                    // 0x0862 (size: 0x1)
    uint8 bIsProne;                                                                   // 0x0862 (size: 0x1)
    uint8 bVaulting;                                                                  // 0x0862 (size: 0x1)
    uint8 bWasVaulting;                                                               // 0x0862 (size: 0x1)
    char padding_10[0x1];                                                             // 0x0863 (size: 0x1)
    FDFVaultTraceResult PendingVaultTraceResult;                                      // 0x0864 (size: 0x1C)
    FDFVaultTraceData VaultParams;                                                    // 0x0880 (size: 0x18)
    float ReplicatedLeanAmount;                                                       // 0x0898 (size: 0x4)
    char padding_11[0x4];                                                             // 0x089C (size: 0x4)
    class UDFCharacterLeanHandler* LeanHandler;                                       // 0x08A0 (size: 0x8)
    class UDFCharacterMovementComponent* DFCharacterMovement;                         // 0x08A8 (size: 0x8)
    float TargetEyeHeight;                                                            // 0x08B0 (size: 0x4)
    uint8 bInterpCrouchedEyeHeight;                                                   // 0x08B4 (size: 0x1)
    char padding_12[0x3];                                                             // 0x08B5 (size: 0x3)
    float CrouchedTransitionInterpSpeed;                                              // 0x08B8 (size: 0x4)
    uint8 bInterpProneEyeHeight;                                                      // 0x08BC (size: 0x1)
    char padding_13[0x3];                                                             // 0x08BD (size: 0x3)
    float ProneTransitionInterpSpeed;                                                 // 0x08C0 (size: 0x4)
    float ProneEyeHeight;                                                             // 0x08C4 (size: 0x4)
    uint8 TeamNum;                                                                    // 0x08C8 (size: 0x1)
    char padding_14[0x7];                                                             // 0x08C9 (size: 0x7)
    class ADFTeamState* TeamState;                                                    // 0x08D0 (size: 0x8)
    class ADFTeamState* PrevTeamState;                                                // 0x08D8 (size: 0x8)
    uint8 bAllowTeamIdOverride;                                                       // 0x08E0 (size: 0x1)
    char padding_15[0x7];                                                             // 0x08E1 (size: 0x7)
    FDFBaseCharacterOnPawnTeamNumUpdated OnPawnTeamNumUpdated;                        // 0x08E8 (size: 0x10)
    void TeamNumUpdateSignature(uint8 LastTeamNum, uint8 NewTeamNum);
    FDFBaseCharacterOnPawnTeamStateUpdated OnPawnTeamStateUpdated;                    // 0x08F8 (size: 0x10)
    void TeamStateUpdateSignature(class ADFTeamState* LastTeamState, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);

    void Vault();
    void UnSprint(bool bClientSimulation);
    void UnLean(ELeanDirection UnDesiredLeanDir, bool bClientSimulation);
    void UnAim(bool bClientSimulation);
    void Suicide();
    void StopVaulting();
    void StopFire();
    void StopCharacterPerspectiveAnimation(const FPerspectiveAnim& CharAnim);
    void StopCharacterMontage(class UAnimMontage* CharMontage);
    void StopAllAnimMontages(bool bPerspectiveMeshOnly);
    void StartFire();
    void SprintToggle();
    void Sprint(bool bClientSimulation);
    void SpawnHitImpactFX(float DamageTaken, const FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser);
    void SetRagdollPhysics();
    void SetItemEnabledMode(EDFItemEnabledMode ItemMode);
    void SetHealth(float InHealth);
    void ServerSuicide();
    void ServerEquipItem(class ADFBaseItem* ItemToEquip);
    void ServerDoVault(const FDFVaultTraceData& VaultStartParams);
    void Reload();
    void ReceiveRestart();
    void ReceivePlayHit(float DamageTaken, const FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bKilled);
    void ReceivePawnTeamStateUpdated(class ADFTeamState* TeamStateBeforeUpdate, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);
    void ReceivePawnTeamNumUpdated(uint8 LastTeamNum, uint8 NewTeamNum);
    void ReceiveOnStartVault();
    void ReceiveOnStartSprint();
    void ReceiveOnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void ReceiveOnStartLean();
    void ReceiveOnStartAim();
    void ReceiveOnRepPlayerState();
    void ReceiveOnEndVault();
    void ReceiveOnEndSprint();
    void ReceiveOnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void ReceiveOnEndLean();
    void ReceiveOnEndAim();
    void ReceiveHealthChanged(float NewHealthTotal, float PrevHealthTotal);
    void ReceiveEquippedItemChanged(class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
    void ProneToggle();
    float PlayCharacterUnEquipMontage(class UAnimMontage* UnEquipMontageToPlay);
    float PlayCharacterThrowUnderhandMontage(class UAnimMontage* ThrowUnderhandMontageToPlay);
    float PlayCharacterThrowOverhandMontage(class UAnimMontage* ThrowOverhandMontageToPlay);
    float PlayCharacterStartReloadMontage(class UAnimMontage* StartReloadMontageToPlay, bool bDryReload);
    class UAudioComponent* PlayCharacterSound(const FPerspectiveSound& Sound);
    float PlayCharacterReloadMontage(bool bDryReload);
    float PlayCharacterPerspectiveAnimation(const FPerspectiveAnim& CharAnim, bool bForceDisableAutoBlendOut);
    float PlayCharacterMontage(class UAnimMontage* CharMontage, bool bForceDisableAutoBlendOut);
    float PlayCharacterFireMontage(class UAnimMontage* FireMontageToPlay, bool bFireLast, bool bFireADS);
    float PlayCharacterEquipMontage(bool bDontPlayAndReturnDominantPlayLengthOnly);
    float PlayCharacterEndReloadMontage(class UAnimMontage* EndReloadMontageToPlay, bool bDryReload);
    float PlayCharacterDeathMontage(bool bDontPlayAndReturnDominantPlayLengthOnly);
    float PlayCharacterCockMontage(class UAnimMontage* CockMontageToPlay);
    float PlayCharacterActionMontage(class UAnimMontage* ActionMontageToPlay);
    void OnRep_TeamState(class ADFTeamState* TeamStateBeforeUpdate);
    void OnRep_TeamNum(uint8 LastTeamNum);
    void OnRep_ReplicatedStance();
    void OnRep_ReplicatedLeanAmount(float LastReplicatedLeanAmount);
    void OnRep_LastTakeHitInfo();
    void OnRep_ItemEnabledMode(EDFItemEnabledMode PreviousItemEnabledMode);
    void OnRep_IsProne();
    void OnRep_Health(const float PreviousValue);
    void OnRep_EquippedItem(class ADFBaseItem* LastItem);
    void OnRep_bSprinting();
    void OnRep_bAiming();
    void OnDeath(float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    int32 NextShotID();
    void LeaveProne(bool bClientSimulation);
    void LeanToggle(ELeanDirection LeanDir);
    void Lean(ELeanDirection DesiredLeanDir, bool bClientSimulation);
    void ItemEnabledModeChanged(EDFItemEnabledMode PreviousItemEnabledMode);
    bool IsPrefiring();
    bool IsPlayer();
    bool IsPerspectiveMesh(const class USkeletalMeshComponent* MeshCompToCheck);
    bool IsLeaning();
    bool IsFiring();
    bool IsEquipped();
    bool IsAlive();
    void GoProne(bool bClientSimulation);
    void GiveLoadout(class UDFLoadout* Loadout, bool bEquipFirstItem);
    class ADFBaseItem* GetRelevantEquippedItem();
    class ADFBaseItem* GetPreviousInventoryItem(bool bEquippable);
    class ADFBaseItem* GetNextInventoryItem(bool bEquippable);
    class UAnimMontage* GetMontageToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair);
    EDFItemEnabledMode GetItemEnabledMode();
    FName GetItemAttachPoint();
    class UDFInventoryComponent* GetInventory();
    class ADFBaseItem* GetEquippedItem();
    bool GetDamageMultiplierByBoneName(const FName& BoneName, float& DamageMultiplier);
    class USkeletalMeshComponent* GetCharacterMeshToUse(bool bIgnoreLocalControlOnServer);
    bool GetCharacterDeathMontageToUse(class UAnimMontage*& OutCharDeathMontage);
    EVisibilityBasedAnimTickOption GetCharacterAnimTickOptionToUse(bool bVisibleMesh);
    class UAnimSequenceBase* GetAnimToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair);
    FRotator GetAimOffsets();
    void EquipPreviousItem();
    void EquipNextItemByType(EItemType ItemType);
    void EquipNextItem();
    void EquipItem(class ADFBaseItem* ItemToEquip);
    bool Die(float KillingDamage, const FDamageEvent& DamageEvent, class AController* Killer, class AActor* DamageCauser);
    void CrouchToggle();
    void ClientVeryShortAdjustPosition_CustomStamina(float Timestamp, FVector NewLoc, class UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, float ServerSprintStamina);
    void ClientAdjustRootMotionSourcePosition_CustomStamina(float Timestamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, float ServerSprintStamina);
    void ClientAdjustRootMotionPosition_CustomStamina(float Timestamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, float ServerSprintStamina);
    void ClientAdjustPosition_CustomStamina(float Timestamp, FVector NewLoc, FVector NewVel, class UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, float ServerSprintStamina);
    void ClearCharacterAnimInstances(bool bPerspectiveMeshOnly);
    bool CanVault();
    bool CanSprint();
    bool CanLean(ELeanDirection DesiredLeanDir);
    bool CanGoProne();
    bool CanDie(float KillingDamage, const FDamageEvent& DamageEvent, class AController* Killer, class AActor* DamageCauser);
    bool CanAim();
    bool AllowsWeaponFire();
    void AimToggle();
    void Aim(bool bClientSimulation);
}; // Size: 0x910

class ADFBaseGameMode : public AGameMode
{
    class ADFGameSession* DFGameSession;                                              // 0x0308 (size: 0x8)
    char padding_0[0x8];                                                              // 0x0310 (size: 0x8)
    TSubclassOf<class ADFTeamState> TeamStateClass;                                   // 0x0318 (size: 0x8)
    TSubclassOf<class AAIController> AIControllerClass;                               // 0x0320 (size: 0x8)
    TArray<uint8> WinningTeams;                                                       // 0x0328 (size: 0x10)
    FTimerHandle TimerHandle_DefaultTimer;                                            // 0x0338 (size: 0x8)
    int32 WarmupTime;                                                                 // 0x0340 (size: 0x4)
    int32 RoundTimeLimit;                                                             // 0x0344 (size: 0x4)
    int32 RoundScoreLimit;                                                            // 0x0348 (size: 0x4)
    int32 TimeBetweenMatches;                                                         // 0x034C (size: 0x4)
    uint8 bBalanceTeams;                                                              // 0x0350 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0351 (size: 0x3)
    float BalanceTimerInterval;                                                       // 0x0354 (size: 0x4)
    uint8 AutoAssignHumanTeam;                                                        // 0x0358 (size: 0x1)
    uint8 bBotAutofill;                                                               // 0x0359 (size: 0x1)
    char padding_2[0x6];                                                              // 0x035A (size: 0x6)
    FText GameDisplayName;                                                            // 0x0360 (size: 0x18)
    int32 NumTeams;                                                                   // 0x0378 (size: 0x4)
    uint8 bAllowUnassignedTeams;                                                      // 0x037C (size: 0x1)
    uint8 bAllowPlayerNameChanges;                                                    // 0x037C (size: 0x1)
    uint8 bAllowPlayerNameChangesUnderNullOSS;                                        // 0x037C (size: 0x1)
    uint8 bAllowPlayerNameChangesUnderSteamOSS;                                       // 0x037C (size: 0x1)
    uint8 bAlwaysDestroyPlayerDuringSeamlessTravel;                                   // 0x037C (size: 0x1)
    uint8 bForceRespawn;                                                              // 0x037C (size: 0x1)
    uint8 bRandomSpawns;                                                              // 0x037C (size: 0x1)
    uint8 bRestartPlayerAtTransformOnly;                                              // 0x037C (size: 0x1)
    uint8 bFriendlyFire;                                                              // 0x037D (size: 0x1)
    uint8 bUpdatePlayerGameplayMuteStates;                                            // 0x037D (size: 0x1)
    uint8 bTeamOnlyVoice;                                                             // 0x037D (size: 0x1)
    ESpawnActorCollisionHandlingMethod DefaultPawnSpawnCollisionHandlingMethodOverride; // 0x037E (size: 0x1)
    uint8 bAllowBots;                                                                 // 0x037F (size: 0x1)
    FTimerHandle TimerHandle_BalanceTimer;                                            // 0x0380 (size: 0x8)
    TSet<TSoftClassPtr<UDFGameRulesetBase>> GameRulesetClasses;                       // 0x0388 (size: 0x50)
    TArray<class AActor*> SignificantActors;                                          // 0x03D8 (size: 0x10)
    TArray<class UDFGameRulesetBase*> GameRulesets;                                   // 0x03E8 (size: 0x10)
    uint8 bAllowVoting;                                                               // 0x03F8 (size: 0x1)
    uint8 bAllowPlayerToChangeVote;                                                   // 0x03F8 (size: 0x1)
    char padding_3[0x7];                                                              // 0x03F9 (size: 0x7)
    TArray<TSoftClassPtr<UDFVoteIssue>> AllowedVoteIssues;                            // 0x0400 (size: 0x10)
    TSubclassOf<class UDFVotingComponent> PlayerVotingGameStateComponentClass;        // 0x0410 (size: 0x8)

    void UpdatePlayerGameplayMuteStates(class ADFBasePlayerController* ForPlayerController);
    void UnregisterSignificantActor(class AActor* ActorToRemove);
    void SwitchToNextMap();
    void SignificantActorEndPlay(class AActor* RemovedActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    bool ShouldHibernate();
    bool ShouldGameplayMuteRemotePlayer(class ADFBasePlayerController* ForPlayer, class ADFBasePlayerController* PlayerToCheck);
    bool ShouldBotAutofill();
    void RemoveTeamBots(uint8 TeamId, int32 Num);
    void RemovePlayerByAge(bool bNewest, bool bExcludeBots, bool bExcludeHumans);
    void RemoveOldestPlayer();
    void RemoveOldestBot();
    void RemoveNewestPlayer();
    void RemoveNewestBot();
    bool RemoveBotByName(FString PlayerName);
    bool RemoveBot(class APlayerState* BotPS);
    void RemoveAllBots();
    void RegisterSignificantActor(class AActor* ActorToRegister);
    void ReceiveOnSwapAIControllers(class AAIController* OldAIC, class AAIController* NewAIC);
    void ReceiveOnMatchIsWaitingToStart();
    void ReceiveOnMatchHasStarted();
    void ReceiveOnMatchHasEnded();
    void ReceiveOnMatchAborted();
    void ReceiveOnLeavingMap();
    bool PlayerCanRestartGeneric(class AController* Player);
    bool PlayerBotCanRestart(class AAIController* Player);
    void NextMap();
    float ModifyDamage(float Damage, class AActor* DamagedActor, const FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
    bool KickPlayerByName(FString KickedPlayerName, const FText& KickReason);
    bool KickPlayerById(int32 KickedPlayerId, const FText& KickReason);
    bool IsValidTeamId(uint8 TeamId);
    bool IsMatchWinner(class ADFBasePlayerState* PlayerStateToCheck);
    bool IsHibernating();
    bool IsFriendlyFireEnabled();
    int32 GetTotalNumPlayers(bool bIncludeTravellingPlayers);
    int32 GetNumPlayersOnTeam(uint8 TeamId, EPlayerKind PlayerType);
    FString GetNextMapName();
    FString GetNextGameName();
    uint8 GetAutoAssignHumanTeam();
    bool ForceTeamId(int32 SwitchedPlayerId, uint8 TeamIdToAssign);
    bool ForceTeam(FString SwitchedPlayerName, uint8 TeamIdToAssign);
    bool FindPlayerStartTransform(class AController* Player, FTransform& OutFoundSpawnTransform, FString IncomingName);
    void DumpActiveRulesets();
    void DetermineMatchWinner();
    class ADFTeamState* CreateTeam(const class UDFTeamDefinition* NewTeamDef, const uint8 NewTeamIdToUse);
    uint8 ChooseTeam(class ADFBasePlayerState* ForPlayerState);
    bool ChooseSpawnPointFromPlayerStart(class AController* Player, class AActor* StartSpot, FSpawnPointDef& OutChosenSpawnPoint, ESpawnActorCollisionHandlingMethod& OutCollisionHandlingMethod);
    bool CheckWinConditions();
    bool CheckRulesetWinConditions();
    bool CanRegisterSignificantActor(const class AActor* ActorToRegister, FString& ActorDenialReason);
    bool CanDealDamage(class ADFBasePlayerState* DamageInstigator, class ADFBasePlayerState* DamagedPlayer);
    bool CanAddRuleset(TSubclassOf<class UDFGameRulesetBase>& RulesetClassToAdd, FString& RulesetDenialReason);
    bool BanPlayerByName(FString BannedPlayerName, const FText& BanReason, float BanDuration);
    bool BanPlayerById(int32 BannedPlayerId, const FText& BanReason, float BanDuration);
    void AutofillWithBots();
    void AssignTeam(class AController* ForController, uint8 AssignedTeam);
    void AddTeamBots(uint8 TeamId, int32 Num);
    void AddNamedBot(FString BotName);
    void AddBots(int32 Num);
    class APlayerState* AddBot(uint8 PlayerTeamID, FString PlayerName);
}; // Size: 0x418

class ADFBaseGameState : public AGameState
{
    uint8 NumTeams;                                                                   // 0x0290 (size: 0x1)
    bool bTimerPaused;                                                                // 0x0291 (size: 0x1)
    char padding_0[0x2];                                                              // 0x0292 (size: 0x2)
    int32 RemainingTime;                                                              // 0x0294 (size: 0x4)
    int32 ReplicatedRemainingTime;                                                    // 0x0298 (size: 0x4)
    char padding_1[0x4];                                                              // 0x029C (size: 0x4)
    TArray<float> TeamScores;                                                         // 0x02A0 (size: 0x10)
    TArray<class ADFTeamState*> TeamArray;                                            // 0x02B0 (size: 0x10)
    FDFBaseGameStateOnTeamStateAdded OnTeamStateAdded;                                // 0x02C0 (size: 0x10)
    void GameStateTSAddRemove(class ADFTeamState* TeamState);
    FDFBaseGameStateOnTeamStateRemoved OnTeamStateRemoved;                            // 0x02D0 (size: 0x10)
    void GameStateTSAddRemove(class ADFTeamState* TeamState);
    FDFBaseGameStateOnPlayerStateAdded OnPlayerStateAdded;                            // 0x02E0 (size: 0x10)
    void GameStatePSAddRemove(class APlayerState* PlayerState);
    FDFBaseGameStateOnPlayerStateRemoved OnPlayerStateRemoved;                        // 0x02F0 (size: 0x10)
    void GameStatePSAddRemove(class APlayerState* PlayerState);
    uint8 bAllowVoting;                                                               // 0x0300 (size: 0x1)
    uint8 bAllowPlayerToChangeVote;                                                   // 0x0300 (size: 0x1)
    char padding_2[0x7];                                                              // 0x0301 (size: 0x7)
    class UDFVotingComponent* GameStateVotingComponent;                               // 0x0308 (size: 0x8)

    void SetTimerPauseState(bool bNewPauseState);
    void SetRemainingTime(int32 NewRemainingTime);
    void OnRep_ReplicatedRemainingTime();
    void OnRep_NumTeams();
    bool IsValidTeamId(const uint8 TeamId);
    class ADFTeamState* GetTeamStateById(const uint8 TeamIdNum);
    class UDFVotingComponent* GetGameStateVotingComponent();
}; // Size: 0x310

class ADFBaseGame_DeathMatch : public ADFBaseGameMode
{
    class ADFBasePlayerState* WinningPlayerState;                                     // 0x0418 (size: 0x8)

}; // Size: 0x420

class ADFBaseGame_TeamDeathMatch : public ADFBaseGameMode
{
    char padding_0[0x418];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x418

class ADFBaseGun : public ADFBaseWeapon
{
    FDFBaseGunOnFireModeChanged OnFireModeChanged;                                    // 0x0648 (size: 0x10)
    void GunFireModeSignature(class ADFBaseGun* Gun, EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput);
    char padding_0[0x10];                                                             // 0x0658 (size: 0x10)
    float TimerIntervalAdjustment;                                                    // 0x0668 (size: 0x4)
    bool bAllowAutomaticWeaponCatchup;                                                // 0x066C (size: 0x1)
    char padding_1[0x3];                                                              // 0x066D (size: 0x3)
    float FireRate;                                                                   // 0x0670 (size: 0x4)
    int32 ShotsPerBurst;                                                              // 0x0674 (size: 0x4)
    uint8 SupportedFireModes;                                                         // 0x0678 (size: 0x1)
    EFireMode SelectedFireMode;                                                       // 0x0679 (size: 0x1)
    char padding_2[0x6];                                                              // 0x067A (size: 0x6)
    class UDFGunRecoilHandler* RecoilHandler;                                         // 0x0680 (size: 0x8)
    FDFBaseGunOnReloadStarted OnReloadStarted;                                        // 0x0688 (size: 0x10)
    void GunReloadSignature(class ADFBaseGun* Gun);
    FDFBaseGunOnReloadFinished OnReloadFinished;                                      // 0x0698 (size: 0x10)
    void GunReloadSignature(class ADFBaseGun* Gun);
    EGunReloadState PendingReloadState;                                               // 0x06A8 (size: 0x1)
    EGunReloadState PreviousReloadState;                                              // 0x06A9 (size: 0x1)
    uint8 bKeepLoadedAmmoOnLeaveInventory;                                            // 0x06AA (size: 0x1)
    uint8 bUsesAmmo;                                                                  // 0x06AA (size: 0x1)
    uint8 bExhaustible;                                                               // 0x06AA (size: 0x1)
    uint8 bCanSprintWhileReloading;                                                   // 0x06AA (size: 0x1)
    char padding_3[0x4D];                                                             // 0x06AB (size: 0x4D)
    uint8 bReloadOnEquip;                                                             // 0x06F8 (size: 0x1)
    uint8 bInstantReloadOnEquip;                                                      // 0x06F8 (size: 0x1)
    uint8 bInstantReloadOnInitialEquip;                                               // 0x06F8 (size: 0x1)
    uint8 bInstantReloadOnInitialEnterInventory;                                      // 0x06F8 (size: 0x1)
    uint8 bReloadOnDryFire;                                                           // 0x06F8 (size: 0x1)
    uint8 bReloadOnStopFire;                                                          // 0x06F8 (size: 0x1)
    uint8 bSimulateGunReloadOnDedicatedServer;                                        // 0x06F8 (size: 0x1)
    EAmmoClipReloadBehavior AmmoClipReloadBehavior;                                   // 0x06F9 (size: 0x1)
    char padding_4[0x6];                                                              // 0x06FA (size: 0x6)
    TSet<TSubclassOf<ADFBaseAmmoClip>> SupportedAmmoClips;                            // 0x0700 (size: 0x50)
    int32 StartingAmmoClips;                                                          // 0x0750 (size: 0x4)
    uint8 bDispensedStartingAmmoClips;                                                // 0x0754 (size: 0x1)
    char padding_5[0x3];                                                              // 0x0755 (size: 0x3)
    class ADFBaseAmmoClip* CurrentAmmoClip;                                           // 0x0758 (size: 0x8)
    int32 CurrentAmmoClipInvIndex;                                                    // 0x0760 (size: 0x4)
    char padding_6[0x4];                                                              // 0x0764 (size: 0x4)
    class ADFBaseAmmoClip* PreviousAmmoClip;                                          // 0x0768 (size: 0x8)
    int32 CurrentAmmoInClipBeforeReload;                                              // 0x0770 (size: 0x4)
    int32 TotalAvailableAmmoBeforeReload;                                             // 0x0774 (size: 0x4)
    int32 ReloadCycleIterations;                                                      // 0x0778 (size: 0x4)
    uint8 bInfiniteClipAmmo;                                                          // 0x077C (size: 0x1)
    uint8 bInfiniteAmmo;                                                              // 0x077C (size: 0x1)
    uint8 bNoRecoil;                                                                  // 0x077C (size: 0x1)
    char padding_7[0x3];                                                              // 0x077D (size: 0x3)
    FComponentReference CustomMuzzleAttachComponentToUse;                             // 0x0780 (size: 0x28)
    FName MuzzleAttachComponentName;                                                  // 0x07A8 (size: 0x8)
    FName MuzzleAttachPoint;                                                          // 0x07B0 (size: 0x8)
    class UParticleSystem* MuzzleFX;                                                  // 0x07B8 (size: 0x8)
    FVector MuzzleLocationOffset;                                                     // 0x07C0 (size: 0xC)
    FRotator MuzzleRotationOffset;                                                    // 0x07CC (size: 0xC)
    uint8 bLoopedMuzzleFX;                                                            // 0x07D8 (size: 0x1)
    char padding_8[0x7];                                                              // 0x07D9 (size: 0x7)
    class UParticleSystemComponent* MuzzlePSC;                                        // 0x07E0 (size: 0x8)
    FName ShellEjectAttachPoint;                                                      // 0x07E8 (size: 0x8)
    class UParticleSystem* ShellEjectFX;                                              // 0x07F0 (size: 0x8)
    FVector ShellEjectLocationOffset;                                                 // 0x07F8 (size: 0xC)
    FRotator ShellEjectRotationOffset;                                                // 0x0804 (size: 0xC)
    uint8 bLoopedShellEjectFX;                                                        // 0x0810 (size: 0x1)
    uint8 bPlayShellEjectFXOnFireLast;                                                // 0x0810 (size: 0x1)
    char padding_9[0x3];                                                              // 0x0811 (size: 0x3)
    float ShellEjectDelay;                                                            // 0x0814 (size: 0x4)
    class UParticleSystemComponent* ShellEjectPSC;                                    // 0x0818 (size: 0x8)

    void UnloadCurrentAmmoClip();
    void StopSimulatingGunReload();
    void StartReload(bool bClientSimulation);
    void SimulateGunReload();
    bool ShouldUseRecoil();
    bool ShouldSimulateGunReload();
    void SetReloadState(EGunReloadState NewReloadState);
    void SetFireModeBP(EFireMode NewFireMode);
    bool SetFireMode(EFireMode NewFireMode, bool bFromPlayerInput, bool bForce);
    void ServerStartReload();
    void ServerSetFireMode(EFireMode NewFireMode);
    void ReceiveReloadStarted();
    void ReceiveReloadFinished();
    void ReceiveFireModeChanged(EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput);
    void ReceiveAmmoExhausted();
    float PlayWeaponStartReloadMontage(class UAnimMontage* StartReloadMontageToPlay, bool bDryReload);
    float PlayWeaponReloadMontage(bool bDryReload);
    float PlayWeaponEndReloadMontage(class UAnimMontage* EndReloadMontageToPlay, bool bDryReload);
    float PlayReloadTransitionAnimations(bool bStartReload, bool bDontPlayAndReturnDominantPlayLengthOnly);
    float PlayReloadAnimations(bool bDryReload, bool bDontPlayAndReturnDominantPlayLengthOnly);
    void OnRep_SelectedFireMode(EFireMode PrevSelectedFireMode);
    void OnRep_PendingReloadState(EGunReloadState PrevReloadState);
    void OnRep_CurrentAmmoClip(class ADFBaseAmmoClip* PrevAmmoClip);
    void OnReload(bool bClientSimulation);
    void LoadPreviousAmmoClip();
    void LoadNextAmmoClip();
    void LoadAmmoClip(class ADFBaseAmmoClip* ClipToLoad);
    bool IsReloading();
    bool IsDryReloading();
    bool HasExhaustedAllAmmo();
    bool HasAmmoClip();
    int32 GetTotalAmmo(bool bIncludeLoadedMags);
    uint8 GetSupportedFireModes();
    FName GetShellEjectAttachPoint();
    EFireMode GetSelectedFireMode();
    EGunReloadState GetReloadState();
    EGunReloadState GetPreviousReloadState();
    int32 GetPostReloadClipAmmo();
    int32 GetNumFreeAmmoClips(bool bIncludeEmptyMags, bool bIncludeCurrentMag);
    FVector GetMuzzleLocation(bool bIgnoreLocalControlOnServer);
    FVector GetMuzzleDirection(bool bIgnoreLocalControlOnServer);
    FName GetMuzzleAttachPoint();
    class USceneComponent* GetMuzzleAttachComponent(bool bIgnoreLocalControlOnServer);
    int32 GetClipAmmo();
    void ClientRejectFiredShot(int32 ShotID, class ADFBaseAmmoClip* ShotAmmoClip, int32 ServerClipAmmo);
    bool CanReload();
}; // Size: 0x830

class ADFBaseGun_Projectile : public ADFBaseGun
{
    TSubclassOf<class ADFBaseProjectile> ProjectileClass;                             // 0x0830 (size: 0x8)
    float ProjectileSpawnDistance;                                                    // 0x0838 (size: 0x4)
    float TargetTraceDistance;                                                        // 0x083C (size: 0x4)
    bool bUseMuzzleAsTrace;                                                           // 0x0840 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0841 (size: 0x3)
    FVector MuzzleSightOffset;                                                        // 0x0844 (size: 0xC)
    FDFBaseGun_ProjectileOnProcessValidProjCSHit OnProcessValidProjCSHit;             // 0x0850 (size: 0x1)
    void GunProjProcessCSHitSignature(class ADFBaseGun_Projectile* Gun, const FHitResult& SimulatedCSHitResult);

    void ServerNotifyCSHitPredicted(const FCSHitInfo& HitInfo, int32 ShotID);
    void ServerNotifyCSHit(class ADFBaseProjectile* HitProj, const FCSHitInfo& HitInfo, int32 ShotID);
    void ClientProjDebugInfo(class ADFBaseProjectile* Proj, const FVector& NewProjLoc, const FVector& LastProjLoc, const FRotator& NewProjRot, const FVector& NewProjVel);
    void ClientProjDebugImpactInfo(class ADFBaseProjectile* Proj, const FVector& ImpactLoc, const FVector_NetQuantizeNormal& ImpactNorm);
    void ClientDrawDebugFireCone(const FVector& ConeOrig, const FVector_NetQuantizeNormal& ConeDir);
    void CalcShotVector(FVector& OutProjOrigin, FVector& OutProjDir);
}; // Size: 0x858

class ADFBaseImpactEffect : public AActor
{
    TArray<FDecalData> ConcreteDecals;                                                // 0x0220 (size: 0x10)
    TArray<FDecalData> MetalSolidDecals;                                              // 0x0230 (size: 0x10)
    TArray<FDecalData> WoodDecals;                                                    // 0x0240 (size: 0x10)
    TArray<FDecalData> GlassBPDecals;                                                 // 0x0250 (size: 0x10)
    TArray<FDecalData> GlassDecals;                                                   // 0x0260 (size: 0x10)
    TArray<FDecalData> GlassWHDecals;                                                 // 0x0270 (size: 0x10)
    TArray<FDecalData> MetalThinDecals;                                               // 0x0280 (size: 0x10)
    TArray<FDecalData> SandbagDecals;                                                 // 0x0290 (size: 0x10)
    TArray<FDecalData> BrickWallDecals;                                               // 0x02A0 (size: 0x10)
    TArray<FDecalData> RubberDecals;                                                  // 0x02B0 (size: 0x10)
    TArray<FDecalData> DrywallDecals;                                                 // 0x02C0 (size: 0x10)
    TArray<FDecalData> ElectricDevicesDecals;                                         // 0x02D0 (size: 0x10)
    TArray<FDecalData> OilBarrelDecals;                                               // 0x02E0 (size: 0x10)
    class UParticleSystem* SnowFX;                                                    // 0x02F0 (size: 0x8)
    class UParticleSystem* WaterFX;                                                   // 0x02F8 (size: 0x8)
    class UParticleSystem* ConcreteFX;                                                // 0x0300 (size: 0x8)
    class UParticleSystem* DirtFX;                                                    // 0x0308 (size: 0x8)
    class UParticleSystem* MetalSolidFX;                                              // 0x0310 (size: 0x8)
    class UParticleSystem* WoodFX;                                                    // 0x0318 (size: 0x8)
    class UParticleSystem* GlassBPFX;                                                 // 0x0320 (size: 0x8)
    class UParticleSystem* GlassFX;                                                   // 0x0328 (size: 0x8)
    class UParticleSystem* GlassWHFX;                                                 // 0x0330 (size: 0x8)
    class UParticleSystem* GrassFX;                                                   // 0x0338 (size: 0x8)
    class UParticleSystem* MetalThinFX;                                               // 0x0340 (size: 0x8)
    class UParticleSystem* SandbagFX;                                                 // 0x0348 (size: 0x8)
    class UParticleSystem* BrickWallFX;                                               // 0x0350 (size: 0x8)
    class UParticleSystem* RubberFX;                                                  // 0x0358 (size: 0x8)
    class UParticleSystem* DrywallFX;                                                 // 0x0360 (size: 0x8)
    class UParticleSystem* ElectricDevicesFX;                                         // 0x0368 (size: 0x8)
    class UParticleSystem* OilBarrelFX;                                               // 0x0370 (size: 0x8)
    class UParticleSystem* SandFX;                                                    // 0x0378 (size: 0x8)
    class UParticleSystem* SoftFX;                                                    // 0x0380 (size: 0x8)
    class UParticleSystem* GroundFX;                                                  // 0x0388 (size: 0x8)
    class UParticleSystem* RockFX;                                                    // 0x0390 (size: 0x8)
    class UParticleSystem* FleshFX;                                                   // 0x0398 (size: 0x8)
    class USoundCue* ConcreteSound;                                                   // 0x03A0 (size: 0x8)
    class USoundCue* DirtSound;                                                       // 0x03A8 (size: 0x8)
    class USoundCue* SnowSound;                                                       // 0x03B0 (size: 0x8)
    class USoundCue* SandbagSound;                                                    // 0x03B8 (size: 0x8)
    class USoundCue* BrickWallSound;                                                  // 0x03C0 (size: 0x8)
    class USoundCue* WaterSound;                                                      // 0x03C8 (size: 0x8)
    class USoundCue* MetalSolidSound;                                                 // 0x03D0 (size: 0x8)
    class USoundCue* MetalThinSound;                                                  // 0x03D8 (size: 0x8)
    class USoundCue* WoodSound;                                                       // 0x03E0 (size: 0x8)
    class USoundCue* GlassSound;                                                      // 0x03E8 (size: 0x8)
    class USoundCue* GlassBPSound;                                                    // 0x03F0 (size: 0x8)
    class USoundCue* GlassWHSound;                                                    // 0x03F8 (size: 0x8)
    class USoundCue* GrassSound;                                                      // 0x0400 (size: 0x8)
    class USoundCue* RubberSound;                                                     // 0x0408 (size: 0x8)
    class USoundCue* DrywallSound;                                                    // 0x0410 (size: 0x8)
    class USoundCue* GroundSound;                                                     // 0x0418 (size: 0x8)
    class USoundCue* ElectricDevicesSound;                                            // 0x0420 (size: 0x8)
    class USoundCue* OilBarrelSound;                                                  // 0x0428 (size: 0x8)
    class USoundCue* RockSound;                                                       // 0x0430 (size: 0x8)
    class USoundCue* FleshSound;                                                      // 0x0438 (size: 0x8)
    FDecalData DefaultDecal;                                                          // 0x0440 (size: 0x10)
    class UParticleSystem* DefaultFX;                                                 // 0x0450 (size: 0x8)
    class USoundCue* DefaultSound;                                                    // 0x0458 (size: 0x8)
    FHitResult SurfaceHit;                                                            // 0x0460 (size: 0x88)

    class USoundCue* GetImpactSound(TEnumAsByte<EPhysicalSurface> SurfaceType);
    class UParticleSystem* GetImpactFX(TEnumAsByte<EPhysicalSurface> SurfaceType);
}; // Size: 0x4E8

class ADFBaseItem : public AActor
{
    class ADFBaseCharacter* PawnOwner;                                                // 0x0220 (size: 0x8)
    class UStaticMeshComponent* ItemMesh;                                             // 0x0228 (size: 0x8)
    class UStaticMeshComponent* ItemMesh1P;                                           // 0x0230 (size: 0x8)
    class USkeletalMesh* PawnMesh1P;                                                  // 0x0238 (size: 0x8)
    TSubclassOf<class UAnimInstance> PawnMesh1PAnimClass;                             // 0x0240 (size: 0x8)
    FVector PawnMesh1PLocationOffset;                                                 // 0x0248 (size: 0xC)
    FRotator PawnMesh1PRotationOffset;                                                // 0x0254 (size: 0xC)
    EItemType ItemType;                                                               // 0x0260 (size: 0x1)
    ESpecificItemType SpecificItemType;                                               // 0x0261 (size: 0x1)
    uint8 bCanEquip;                                                                  // 0x0262 (size: 0x1)
    uint8 bCanAimWhileEquipped;                                                       // 0x0262 (size: 0x1)
    uint8 bDisableFireInput;                                                          // 0x0262 (size: 0x1)
    uint8 bEquipped;                                                                  // 0x0262 (size: 0x1)
    uint8 bPendingEquip;                                                              // 0x0262 (size: 0x1)
    uint8 bPendingUnEquip;                                                            // 0x0262 (size: 0x1)
    uint8 bWantsToFire;                                                               // 0x0262 (size: 0x1)
    char padding_0[0x1];                                                              // 0x0263 (size: 0x1)
    int32 LastFiredShotID;                                                            // 0x0264 (size: 0x4)
    char padding_1[0x10];                                                             // 0x0268 (size: 0x10)
    uint8 bDebug;                                                                     // 0x0278 (size: 0x1)
    char padding_2[0x7];                                                              // 0x0279 (size: 0x7)
    FCharacterAnimCollection CharacterAnimCollection;                                 // 0x0280 (size: 0x128)

    void StopFire();
    void StartFire();
    void SetOwningPawn(class ADFBaseCharacter* NewOwner);
    void SetMeshVisibility(bool bFirstPerson);
    void ServerStopFire();
    void ServerStartFire(const FVector_NetQuantize& Origin, const FVector_NetQuantizeNormal& ShootDir, int32 RandomSeed, float Timestamp, int32 ShotID);
    bool RemoveLegacyLocomotionAnims(bool bFPP);
    void ReceiveVisibilityChanged(bool bFirstPerson);
    void ReceiveStopFire();
    void ReceiveStartFire();
    void ReceiveOnUnEquipFinished(bool bLeavingPawnInventory);
    void ReceiveOnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory);
    void ReceiveOnTurnOff();
    void ReceiveOnLeaveInventory(class ADFBaseCharacter* LastOwner);
    void ReceiveOnEquipFinished();
    void ReceiveOnEquip(const class ADFBaseItem* LastItem);
    void ReceiveOnEnterInventory(class ADFBaseCharacter* NewOwner, class ADFBaseCharacter* LastOwner);
    bool OwnerIsSprinting();
    bool OwnerIsAiming();
    void OnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory);
    void OnTurnOff();
    void OnRep_PawnOwner(class ADFBaseCharacter* LastOwner);
    void OnLeaveInventory(class ADFBaseCharacter* LastOwner);
    void OnEquip(const class ADFBaseItem* LastItem);
    void OnEnterInventory(class ADFBaseCharacter* NewOwner, class ADFBaseCharacter* LastOwner);
    bool IsUnEquipping();
    bool IsLocallyControlled();
    bool IsEquipping();
    bool IsEquipped();
    bool IsClientSimulated();
    ESpecificItemType GetSpecificItemType();
    class ADFBaseCharacter* GetPawnOwner();
    class UDFInventoryComponent* GetPawnInventory();
    FRotator GetOwnerViewRotation();
    bool GetOwnerViewPoint(FVector& OutViewLoc, FRotator& OutViewRot);
    FVector GetOwnerViewLocation();
    TMap<class FName, class UAnimSequenceBase*> GetLegacyLocomotionAnims(bool bFPP);
    EItemType GetItemType();
    class UStaticMeshComponent* GetItemMeshToUse(bool bIgnoreLocalControlOnServer);
    class UStaticMeshComponent* GetItemMesh1P();
    class UStaticMeshComponent* GetItemMesh();
    FVector GetAdjustedAimDirection();
    void ForceStopFiring();
    bool CanTriggerFire();
    bool CanStartFire();
    bool CanSprintWhileEquipped();
    bool CanFire();
    bool CanEquip();
    bool CanAimWhileEquipped();
}; // Size: 0x3A8

class ADFBasePickup : public AActor
{
    class UStaticMeshComponent* Mesh;                                                 // 0x0228 (size: 0x8)
    uint8 bActive;                                                                    // 0x0230 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0231 (size: 0x7)
    class ADFBaseCharacter* InvokingPawn;                                             // 0x0238 (size: 0x8)
    char padding_1[0x8];                                                              // 0x0240 (size: 0x8)
    uint8 bUseable;                                                                   // 0x0248 (size: 0x1)
    uint8 bOverlap;                                                                   // 0x0248 (size: 0x1)
    char padding_2[0x3];                                                              // 0x0249 (size: 0x3)
    float RespawnDelay;                                                               // 0x024C (size: 0x4)
    class USoundCue* PickupSound;                                                     // 0x0250 (size: 0x8)

    void UpdatePickupState(bool bNewActive);
    void RespawnPickup();
    void OnRespawn();
    void OnRep_Active();
    void OnPickup();
    void InitializePickup();
    void GivePickupTo(class ADFBaseCharacter* PickupOwner);
    bool CanBePickedUp(class ADFBaseCharacter* Invoker);
}; // Size: 0x258

class ADFBasePickup_Health : public ADFBasePickup
{
    float Health;                                                                     // 0x0258 (size: 0x4)

}; // Size: 0x260

class ADFBasePickup_Item : public ADFBasePickup
{
    class UDFInventoryComponent* Inventory;                                           // 0x0258 (size: 0x8)

}; // Size: 0x260

class ADFBasePlayerCharacter : public ADFBaseCharacter
{
    float BaseTurnRate;                                                               // 0x0908 (size: 0x4)
    float BaseLookUpRate;                                                             // 0x090C (size: 0x4)
    char padding_0[0x8];                                                              // 0x0910 (size: 0x8)
    float InteractionDistance;                                                        // 0x0918 (size: 0x4)
    uint8 bFirstPerson;                                                               // 0x091C (size: 0x1)
    char padding_1[0x3];                                                              // 0x091D (size: 0x3)
    class UCameraComponent* Camera;                                                   // 0x0920 (size: 0x8)
    class USpringArmComponent* CameraBoom;                                            // 0x0928 (size: 0x8)
    class UCameraComponent* Camera1P;                                                 // 0x0930 (size: 0x8)
    uint8 bStartInFirstPerson;                                                        // 0x0938 (size: 0x1)
    uint8 bTrueFirstPerson;                                                           // 0x0938 (size: 0x1)
    uint8 bDisableOrientationOfRotationToMovementInFirstPerson;                       // 0x0938 (size: 0x1)
    uint8 bDisableUsageOfControllerRotationYawInThirdPerson;                          // 0x0938 (size: 0x1)
    char padding_2[0x7];                                                              // 0x0939 (size: 0x7)
    class USkeletalMeshComponent* Mesh1P;                                             // 0x0940 (size: 0x8)
    uint8 bUseFirstPersonMesh;                                                        // 0x0948 (size: 0x1)
    char padding_3[0x3];                                                              // 0x0949 (size: 0x3)
    FName ItemAttachPoint1P;                                                          // 0x094C (size: 0x8)
    char padding_4[0x4];                                                              // 0x0954 (size: 0x4)
    FDFBasePlayerCharacterOnPlayerToggleFirstPerson OnPlayerToggleFirstPerson;        // 0x0958 (size: 0x10)
    void PlayerToggleFirstPerson(bool bFirstPerson);

    void Use();
    void TurnAtRate(float Rate);
    void SwitchFireMode();
    void SetMeshVisibility(bool bFirstPersonVisibility);
    void ServerUse(class AActor* UseTarget, const FVector_NetQuantize& UseTraceStart, const FVector_NetQuantize& UseTraceEnd);
    void ServerOnToggleFirstPerson(bool bNewFirstPerson);
    class USkeletalMesh* ReceiveGetDefaultPawnMesh1P();
    void OnToggleFirstPerson(bool bNewFirstPerson);
    void OnFireReleased();
    void OnFirePressed();
    void MoveUp(float Value);
    void MoveRight(float Value);
    void MoveForward(float Value);
    void LookUpAtRate(float Rate);
    void JumpVaultPressed();
    bool IsUsingFirstPersonMesh();
    bool IsTrueFirstPerson();
    bool IsLocalFirstPerson();
    bool IsFirstPerson();
    class USkeletalMeshComponent* GetMesh1P();
    FName GetItemAttachPoint1P();
    class USkeletalMesh* GetDefaultPawnMesh1P();
    class USpringArmComponent* GetCameraBoom();
    class UCameraComponent* GetCamera1P();
    class UCameraComponent* GetCamera();
}; // Size: 0x970

class ADFBasePlayerController : public APlayerController
{
    FDFBasePlayerControllerOnPossessPawn OnPossessPawn;                               // 0x0578 (size: 0x10)
    void PawnPossessionSignature(class APawn* Pawn);
    FDFBasePlayerControllerOnUnpossessPawn OnUnpossessPawn;                           // 0x0588 (size: 0x10)
    void PawnPossessionSignature(class APawn* Pawn);
    char padding_0[0x8];                                                              // 0x0598 (size: 0x8)
    class ADFBaseCharacter* DFCharacter;                                              // 0x05A0 (size: 0x8)
    char padding_1[0x18];                                                             // 0x05A8 (size: 0x18)
    uint8 bSetGameOnlyInputOnBeginPlay;                                               // 0x05C0 (size: 0x1)
    char padding_2[0x7];                                                              // 0x05C1 (size: 0x7)
    FDFBasePlayerControllerOnPlayerTeamNumUpdated OnPlayerTeamNumUpdated;             // 0x05C8 (size: 0x10)
    void TeamNumUpdateSignature(uint8 LastTeamNum, uint8 NewTeamNum);
    FDFBasePlayerControllerOnPlayerTeamStateUpdated OnPlayerTeamStateUpdated;         // 0x05D8 (size: 0x10)
    void TeamStateUpdateSignature(class ADFTeamState* LastTeamState, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);
    class ADFTeamState* TeamState;                                                    // 0x05E8 (size: 0x8)
    int32 MaxChatMsgLen;                                                              // 0x05F0 (size: 0x4)

    void TeamSay(FString Msg);
    void ServerTeamSay(FString Msg);
    void ServerSay(FString Msg);
    void ServerNotifyProjCSHit(class ADFBaseProjectile* HitProj, class APawn* HitProjDamageInstigator, const FCSHitInfo& HitInfo, int32 ShotID);
    void ServerInitiateVote(TSubclassOf<class UDFVoteIssue> IssueClass, FDFVoteIssueContext IssueContext, int32 VoteSelectionIndex, EDFVotingChannel VotingChannel);
    void ServerEnableCheats();
    void ServerCastVote(int32 VoteSelectionIndex, EDFVotingChannel VotingChannel);
    void ServerAdmin(FString Cmd);
    void Say(FString Msg);
    void ReceiveUnpossessPawn(class APawn* UnpossessedPawn);
    void ReceivePreClientTravel(FString PendingURL, bool bIsSeamlessTravelWithRelativeTravelType);
    void ReceivePossessPawn(class APawn* NewPawn);
    void ReceivePlayerTeamStateUpdated(class ADFTeamState* LastTeamState, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);
    void ReceivePlayerTeamNumUpdated(uint8 LastTeamNum, uint8 NewTeamNum);
    void ReceiveOnRepPlayerState();
    void ReceiveNewChatMsg(const FPlayerChatMsg& ChatMsg);
    void ReceiveGameHasEnded(class AActor* EndGameFocus, bool bIsWinner);
    void OnFireReleased();
    void OnFirePressed();
    bool IsServerAdministrator();
    bool IsGameInputAllowed();
    bool InitiateVote(TSubclassOf<class UDFVoteIssue> IssueClass, const FDFVoteIssueContext& IssueContext, int32 VoteSelectionIndex, EDFVotingChannel VotingChannel);
    class UDFVotingComponent* GetVotingComponentByChannel(EDFVotingChannel VotingChannel);
    FTimerHandle GetUnFreezeTimerHandle();
    void ClientEnableCheats();
    bool CastVote(int32 VoteSelectionIndex, EDFVotingChannel VotingChannel);
    void Admin(FString Cmd);
}; // Size: 0x5F8

class ADFBasePlayerState : public APlayerState
{
    FDFBasePlayerStateOnRepPlayerName OnRepPlayerName;                                // 0x0328 (size: 0x10)
    void RepPlayerNameSignature(class APlayerState* PlayerState, FString NewPlayerName);
    FDFBasePlayerStateOnPlayerTeamNumUpdated OnPlayerTeamNumUpdated;                  // 0x0338 (size: 0x10)
    void PlayerTeamNumUpdateSignature(class APlayerState* PlayerState, uint8 LastTeamNum, uint8 NewTeamNum);
    uint8 TeamNum;                                                                    // 0x0348 (size: 0x1)
    uint8 PrevTeamNum;                                                                // 0x0349 (size: 0x1)
    char padding_0[0x6];                                                              // 0x034A (size: 0x6)
    class ADFTeamState* TeamState;                                                    // 0x0350 (size: 0x8)
    class ADFTeamState* PrevTeamState;                                                // 0x0358 (size: 0x8)
    uint8 bAdmin;                                                                     // 0x0360 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0361 (size: 0x3)
    int32 NumKills;                                                                   // 0x0364 (size: 0x4)
    int32 NumAssists;                                                                 // 0x0368 (size: 0x4)
    int32 NumDeaths;                                                                  // 0x036C (size: 0x4)
    int32 TeamStartTime;                                                              // 0x0370 (size: 0x4)

    void SetTeam(const uint8 NewTeamNum, bool bCopyToInactivePlayerState);
    void SetAdminStatus(bool bNewAdminStatus);
    void ScorePoints(float Points, bool bForceNetUpdate);
    void ScoreKillPlayer(class ADFBasePlayerState* Victim, float Points);
    void ScoreDeath(class ADFBasePlayerState* KilledBy, float Points);
    void ScoreAssistPlayer(class ADFBasePlayerState* Killer, class ADFBasePlayerState* Victim, float Points);
    void ReceiveOnRepPlayerName();
    void OnTeamStateUpdated(class ADFTeamState* TeamStateBeforeUpdate);
    void OnTeamNumUpdated(uint8 TeamNumBeforeUpdate);
    void OnRep_TeamState(class ADFTeamState* TeamStateBeforeUpdate);
    void OnRep_TeamNum(uint8 TeamNumBeforeUpdate);
    void OnRep_NumKills(int32 PrevNumKills);
    void OnRep_NumDeaths(int32 PrevNumDeaths);
    void OnRep_NumAssists(int32 PrevNumAssists);
    void OnRep_bAdmin(bool bAdminStatusBeforeUpdate);
    uint8 GetTeam();
    uint8 GetPreviousTeam();
    int32 GetKills();
    int32 GetDeaths();
    int32 GetAssists();
}; // Size: 0x378

class ADFBaseProjectile : public AActor
{
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0220 (size: 0x8)
    TSubclassOf<class ADFBaseImpactEffect> ProjectileImpactFXClass;                   // 0x0228 (size: 0x8)
    FTransform SpawnTransform;                                                        // 0x0230 (size: 0x30)
    int32 ShotID;                                                                     // 0x0260 (size: 0x4)
    FVector LastLoc;                                                                  // 0x0264 (size: 0xC)
    uint8 bSpawnImpactFXOnHit;                                                        // 0x0270 (size: 0x1)
    uint8 bAlwaysShootable;                                                           // 0x0270 (size: 0x1)
    uint8 bIgnoreInstigator;                                                          // 0x0270 (size: 0x1)
    uint8 bIgnoreInstigatorOnPayloadActivation;                                       // 0x0270 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0271 (size: 0x7)
    class AController* InstigatingController;                                         // 0x0278 (size: 0x8)
    uint8 bDebug;                                                                     // 0x0280 (size: 0x1)
    FDFBaseProjectileOnProcessValidHit OnProcessValidHit;                             // 0x0281 (size: 0x1)
    void ProjectileProcessHitSignature(class ADFBaseProjectile* Projectile, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FVector& HitLocation, const FVector& HitNormal, const FHitResult& HitResult, bool bFromCSHitNotify);
    uint8 bIgnoreInstigatorHitEventsOnly;                                             // 0x0282 (size: 0x1)
    uint8 bProcessedAHit;                                                             // 0x0282 (size: 0x1)
    uint8 bClientSideHitDetectionEnabled;                                             // 0x0282 (size: 0x1)
    uint8 bClientSideHitDamageEnabled;                                                // 0x0282 (size: 0x1)
    uint8 bNotifyOfPredictedProjectileHits;                                           // 0x0282 (size: 0x1)
    uint8 bOnlyNotifyOfPredictedProjectileHits;                                       // 0x0282 (size: 0x1)
    char padding_1[0x1];                                                              // 0x0283 (size: 0x1)
    FCSHitInfo PendingHitInfo;                                                        // 0x0284 (size: 0x70)
    char padding_2[0x4];                                                              // 0x02F4 (size: 0x4)
    class AActor* ImpactedActor;                                                      // 0x02F8 (size: 0x8)
    uint8 bApplyDamageOnImpact;                                                       // 0x0300 (size: 0x1)
    uint8 bApplyDamageOnBounceImpact;                                                 // 0x0300 (size: 0x1)
    uint8 bApplyDamageToInstigator;                                                   // 0x0300 (size: 0x1)
    char padding_3[0x3];                                                              // 0x0301 (size: 0x3)
    FDFDamageParams BaseDamageParams;                                                 // 0x0304 (size: 0x14)
    TSubclassOf<class UDamageType> WeaponDamageTypeClass;                             // 0x0318 (size: 0x8)
    FVector RadialDamageOriginOffset;                                                 // 0x0320 (size: 0xC)
    TEnumAsByte<ECollisionChannel> RadialDamagePreventionChannel;                     // 0x032C (size: 0x1)
    uint8 bWantsToUseClientSidePrediction;                                            // 0x032D (size: 0x1)
    uint8 bReconcilePredictedProjWithServerProj;                                      // 0x032D (size: 0x1)
    uint8 bPredictedClientProjectile;                                                 // 0x032D (size: 0x1)
    char padding_4[0x2];                                                              // 0x032E (size: 0x2)
    class ADFBaseProjectile* MyPredictedClientProjectile;                             // 0x0330 (size: 0x8)
    class ADFBaseProjectile* ServerAuthoritativeProjectile;                           // 0x0338 (size: 0x8)
    char padding_5[0x31];                                                             // 0x0340 (size: 0x31)
    FDFBaseProjectileOnTriggerPayload OnTriggerPayload;                               // 0x0371 (size: 0x1)
    void ProjectileTriggerPayloadSignature(class ADFBaseProjectile* Projectile, const FHitResult& ImpactHitResult, bool bFromTearOff);
    uint8 bPayloadTriggered;                                                          // 0x0372 (size: 0x1)
    uint8 bTriggerPayloadWhenStopped;                                                 // 0x0372 (size: 0x1)
    uint8 bTearOffOnPayloadActivation;                                                // 0x0372 (size: 0x1)
    uint8 bDisableOnPayloadActivation;                                                // 0x0372 (size: 0x1)

    void TriggerPayload(const FHitResult& ImpactHitResult, bool bFromTearOff);
    void SpawnImpactFX(const FHitResult& Impact);
    void SetProjectileUpdatedComponent(class USceneComponent* NewProjectileUpdatedComponent);
    void ReceivePayloadActivated(const FHitResult& ImpactHitResult);
    void ProjectileStop(const FHitResult& ImpactResult);
    void ProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    bool K2_ShouldIgnoreHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& HitResult);
    void K2_PostProcessValidHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FVector& HitLocation, const FVector& HitNormal, const FHitResult& HitResult, bool bFromCSHitNotify);
    void IgnoreInstigatorWhenMoving(bool bShouldIgnore, bool bBidirectional);
    bool HasValidPredictedClientProjectile();
    class UPrimitiveComponent* GetProjectileUpdatedPrimitive();
    class USceneComponent* GetProjectileUpdatedComponent();
    class ADFBaseWeapon* GetOwningWeapon();
    TSubclassOf<class ADFBaseImpactEffect> GetImpactFXClass();
    FDFDamageParams GetAdjustedDamageParams(class AActor* OtherActor, const FVector& HitLocation);
    void DisableAndDeferDestroy();
    float ApplyDamageToImpactedActor(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FVector& HitLocation, const FVector& HitNormal, const FHitResult& HitResult);
}; // Size: 0x380

class ADFBaseProjectileLegacy : public AActor
{
    class UPrimitiveComponent* ProjectileCollision;                                   // 0x0220 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0228 (size: 0x8)
    TSubclassOf<class ADFBaseImpactEffect> ProjectileImpactFXClass;                   // 0x0230 (size: 0x8)
    char padding_0[0x8];                                                              // 0x0238 (size: 0x8)
    FTransform SpawnTransform;                                                        // 0x0240 (size: 0x30)
    FVector LastLoc;                                                                  // 0x0270 (size: 0xC)
    uint8 bListenForImpactEvents;                                                     // 0x027C (size: 0x1)
    uint8 bIgnoreInstigator;                                                          // 0x027C (size: 0x1)
    char padding_1[0x3];                                                              // 0x027D (size: 0x3)
    class AController* InstigatingController;                                         // 0x0280 (size: 0x8)
    float ActiveLifeSpan;                                                             // 0x0288 (size: 0x4)
    char padding_2[0xC];                                                              // 0x028C (size: 0xC)
    TSubclassOf<class UDamageType> WeaponDamageTypeClass;                             // 0x0298 (size: 0x8)
    uint8 bDebug;                                                                     // 0x02A0 (size: 0x1)
    uint8 bApplyDamageFromPayload;                                                    // 0x02A0 (size: 0x1)
    char padding_3[0x3];                                                              // 0x02A1 (size: 0x3)
    float HitDamage;                                                                  // 0x02A4 (size: 0x4)
    uint8 bApplyRadialDamage;                                                         // 0x02A8 (size: 0x1)
    char padding_4[0x3];                                                              // 0x02A9 (size: 0x3)
    FVector RadialDamageLocOffset;                                                    // 0x02AC (size: 0xC)
    TEnumAsByte<ECollisionChannel> RadialDamagePreventionChannel;                     // 0x02B8 (size: 0x1)
    char padding_5[0x3];                                                              // 0x02B9 (size: 0x3)
    float DamageRadius;                                                               // 0x02BC (size: 0x4)
    uint8 bPayloadTriggered;                                                          // 0x02C0 (size: 0x1)
    uint8 bTriggerPayloadWhenStopped;                                                 // 0x02C0 (size: 0x1)
    uint8 bTriggerPayloadOnDelay;                                                     // 0x02C0 (size: 0x1)
    char padding_6[0x3];                                                              // 0x02C1 (size: 0x3)
    float PayloadTriggerDelay;                                                        // 0x02C4 (size: 0x4)
    class UParticleSystem* PayloadTriggerFX;                                          // 0x02C8 (size: 0x8)
    uint8 bAttachTriggerFXToRoot;                                                     // 0x02D0 (size: 0x1)
    char padding_7[0x7];                                                              // 0x02D1 (size: 0x7)
    class UParticleSystemComponent* TriggerFXPSC;                                     // 0x02D8 (size: 0x8)
    class USoundBase* PayloadTriggerSnd;                                              // 0x02E0 (size: 0x8)
    uint8 bAttachTriggerSndToRoot;                                                    // 0x02E8 (size: 0x1)
    char padding_8[0x7];                                                              // 0x02E9 (size: 0x7)
    class UAudioComponent* TriggerSnd;                                                // 0x02F0 (size: 0x8)

    void TriggerPayload(const FHitResult& ImpactHitResult);
    void StopSimulatingPayloadActivation();
    void SpawnImpactFX(const FHitResult& Impact);
    void SimulatePayloadActivation();
    void ReceiveStopSimulatingPayloadActivation();
    void ReceiveSimulatePayloadActivation();
    void ReceivePayloadActivated(const FHitResult& ImpactHitResult);
    void ProjectileStop(const FHitResult& ImpactResult);
    void ProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void PayloadDelayElapsed();
    void OnRep_bPayloadTriggered();
    class ADFBaseWeapon* GetOwningWeapon();
}; // Size: 0x340

class ADFBaseWeapon : public ADFBaseItem
{
    FDFBaseWeaponOnFire OnFire;                                                       // 0x03A8 (size: 0x10)
    void WeaponFireSignature(class ADFBaseWeapon* FiredWeapon, bool bLastFire);
    uint8 bFiring;                                                                    // 0x03B8 (size: 0x1)
    uint8 bReadyToFirePendingRelease;                                                 // 0x03B8 (size: 0x1)
    uint8 bFireOnRelease;                                                             // 0x03B8 (size: 0x1)
    char padding_0[0x3];                                                              // 0x03B9 (size: 0x3)
    float PrefireDelayMin;                                                            // 0x03BC (size: 0x4)
    uint8 bPrefiring;                                                                 // 0x03C0 (size: 0x1)
    char padding_1[0x3F];                                                             // 0x03C1 (size: 0x3F)
    uint8 bADSFireOnly;                                                               // 0x0400 (size: 0x1)
    uint8 bLastShotFired;                                                             // 0x0400 (size: 0x1)
    uint8 bRepCounterPending;                                                         // 0x0400 (size: 0x1)
    char padding_2[0x1];                                                              // 0x0401 (size: 0x1)
    FRepShotInfo FireCounter;                                                         // 0x0402 (size: 0x4)
    FRepShotInfo PreviousRepFireCounter;                                              // 0x0406 (size: 0x4)
    FRepShotInfo PostStoppedFireCounter;                                              // 0x040A (size: 0x4)
    char padding_3[0x2];                                                              // 0x040E (size: 0x2)
    float LastFireTime;                                                               // 0x0410 (size: 0x4)
    float LastShotFireTime;                                                           // 0x0414 (size: 0x4)
    char padding_4[0x4];                                                              // 0x0418 (size: 0x4)
    uint8 bUseServerSideFiringLogic;                                                  // 0x041C (size: 0x1)
    uint8 bSimulateWeaponFireOnDedicatedServer;                                       // 0x041C (size: 0x1)
    char padding_5[0x3];                                                              // 0x041D (size: 0x3)
    FWeaponAnimCollection WeaponAnimCollection;                                       // 0x0420 (size: 0xF0)
    uint8 bStopAllFireAnimsAfterFireRateDelay;                                        // 0x0510 (size: 0x1)
    uint8 bSimulate1PWeaponFireOnPawnOwner1PMesh;                                     // 0x0510 (size: 0x1)
    char padding_6[0x7];                                                              // 0x0511 (size: 0x7)
    FWeaponSoundCollection WeaponSoundCollection;                                     // 0x0518 (size: 0x80)
    uint8 bSingleAction;                                                              // 0x0598 (size: 0x1)
    uint8 bSingleLoad;                                                                // 0x0598 (size: 0x1)
    char padding_7[0x7];                                                              // 0x0599 (size: 0x7)
    class USkeletalMeshComponent* WeaponMesh;                                         // 0x05A0 (size: 0x8)
    class USkeletalMeshComponent* WeaponMesh1P;                                       // 0x05A8 (size: 0x8)
    uint8 bCanSprintWhilePrefiring;                                                   // 0x05B0 (size: 0x1)
    char padding_8[0x7];                                                              // 0x05B1 (size: 0x7)
    FRuntimeFloatCurve DamageFalloffCurve;                                            // 0x05B8 (size: 0x88)
    TSubclassOf<class UDamageType> DamageTypeClass;                                   // 0x0640 (size: 0x8)

    void StopWeaponPerspectiveAnimation(const FPerspectiveAnim& WeapAnim);
    void StopWeaponMontage(class UAnimMontage* WeapMontage);
    void StopSimulatingWeaponFire(bool bForceStopAll);
    void SimulateWeaponFire();
    bool ShouldSimulateWeaponFire();
    void ServerPreFire();
    void ServerFireShot(const FVector_NetQuantize& Origin, const FVector_NetQuantizeNormal& ShootDir, int32 RandomSeed, float Timestamp, int32 ShotID);
    void ReceiveStopSimulatingWeaponFire();
    void ReceiveSimulateWeaponFire();
    void ReceiveOnStopFiring();
    void ReceiveOnStartFiring();
    void ReceiveFire();
    void PrefireDelayElapsed(bool bClientSimulation);
    float PlayWeaponUnEquipMontage(class UAnimMontage* UnEquipMontageToPlay);
    float PlayWeaponThrowUnderhandMontage(class UAnimMontage* ThrowUnderhandMontageToPlay);
    float PlayWeaponThrowOverhandMontage(class UAnimMontage* ThrowOverhandMontageToPlay);
    class UAudioComponent* PlayWeaponSound(const FPerspectiveSound& Sound);
    float PlayWeaponPerspectiveAnimation(const FPerspectiveAnim& WeapAnim);
    float PlayWeaponMontage(class UAnimMontage* WeapMontage, bool bForceDisableAutoBlendOut);
    float PlayWeaponFireMontage(class UAnimMontage* FireMontageToPlay, bool bFireLast, bool bFireADS);
    float PlayWeaponEquipMontage(class UAnimMontage* EquipMontageToPlay);
    float PlayWeaponCockMontage(class UAnimMontage* CockMontageToPlay);
    float PlayWeaponActionMontage(class UAnimMontage* ActionMontageToPlay);
    float PlayThrowAnimations(bool bOverhandThrow, bool bDontPlayAndReturnDominantPlayLengthOnly);
    float PlayCockAnimations(bool bDontPlayAndReturnDominantPlayLengthOnly);
    void PlayActionAnimations(bool bDontPlayAndReturnDominantPlayLengthOnly);
    void OnStopFiring();
    void OnStartFiring();
    void OnRep_FireCounter(const FRepShotInfo& PreviousValue);
    void OnRep_bPrefiring();
    bool IsFiring();
    void HandleFire();
    class USkeletalMeshComponent* GetWeaponMeshToUse(bool bIgnoreLocalControlOnServer);
    class USkeletalMeshComponent* GetWeaponMesh1P();
    class USkeletalMeshComponent* GetWeaponMesh();
    class UAnimMontage* GetMontageToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair);
    float GetMontagePlayLengthToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair);
    class UAnimSequenceBase* GetAnimToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair);
    float GetAnimPlayLengthToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair);
}; // Size: 0x648

class ADFGameSession : public AGameSession
{
    FString ServerName;                                                               // 0x0238 (size: 0x10)
    char padding_0[0x10];                                                             // 0x0248 (size: 0x10)
    int32 MinPlayers;                                                                 // 0x0258 (size: 0x4)
    char padding_1[0x4];                                                              // 0x025C (size: 0x4)
    FString Password;                                                                 // 0x0260 (size: 0x10)

}; // Size: 0x270

class ADFInfo : public AInfo
{
    char padding_0[0x220];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x220

class ADFLevelScriptActor : public ALevelScriptActor
{
    char padding_0[0x228];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x228

class ADFPlayerCameraManager : public APlayerCameraManager
{
    float AimingFOV;                                                                  // 0x2738 (size: 0x4)
    float AimInterpSpeed;                                                             // 0x273C (size: 0x4)

}; // Size: 0x2740

class ADFRecastNavMesh : public ARecastNavMesh
{
    char padding_0[0x4B8];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x4B8

class ADFReplInfo : public ADFInfo
{
    char padding_0[0x220];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x220

class ADFTeamState : public AInfo
{
    uint8 bInitialized;                                                               // 0x0228 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0229 (size: 0x7)
    TSubclassOf<class UDFFactionInfo> FactionInfoClass;                               // 0x0230 (size: 0x8)
    uint8 TeamNum;                                                                    // 0x0238 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0239 (size: 0x7)
    FDFTeamStateOnPostInitTeam OnPostInitTeam;                                        // 0x0240 (size: 0x10)
    void TSInitSignature(class ADFTeamState* TeamState);

    void ReceivePostInitTeam();
    void ReceiveInitTeam(const class UDFTeamDefinition* InTeamDef);
    bool IsReadyToInitialize();
    bool IsPendingSetupBP();
    class UDFFactionInfo* GetFactionInfo();
}; // Size: 0x250

class ADFWorldSettings : public AWorldSettings
{
    uint8 bVisibleInMapSelectUI;                                                      // 0x03A0 (size: 0x1)
    char padding_0[0x7];                                                              // 0x03A1 (size: 0x7)
    FText MapDisplayName;                                                             // 0x03A8 (size: 0x18)
    FText MapDescription;                                                             // 0x03C0 (size: 0x18)
    TSoftObjectPtr<UTexture2D> MapPreviewImg;                                         // 0x03D8 (size: 0x28)
    TSoftObjectPtr<UTexture2D> MapPreviewBannerImg;                                   // 0x0400 (size: 0x28)
    TSet<TSoftClassPtr<AGameModeBase>> SupportedGameModes;                            // 0x0428 (size: 0x50)
    TSet<TSoftClassPtr<UDFGameRulesetBase>> GameRulesetClasses;                       // 0x0478 (size: 0x50)

}; // Size: 0x4C8

class IDFHandlerInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void EventUpdate(float DeltaTime, bool bMakeDecision);
    bool EventShouldUpdateThisFrame(float DeltaTime, bool bActiveAndSpawnedInWorld);
    void EventRespawn();
    void EventReset();
    void EventOnNewPawn(class APawn* NewPawn, class APawn* PreviousPawn);
    void EventInit();
}; // Size: 0x28

class IDFIntrinsicCharAnimInstInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    float PlayDeathMontage(class UAnimMontage* MontageToPlay);
}; // Size: 0x28

class IDFIntrinsicWeapAnimInstInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    float PlayUnEquipMontage(class UAnimMontage* MontageToPlay);
    float PlayReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
    float PlayFireMontage(class UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming);
    float PlayEquipMontage(class UAnimMontage* MontageToPlay);
}; // Size: 0x28

class IDFSingleActionWeapAnimInstInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    float PlayActionMontage(class UAnimMontage* MontageToPlay);
}; // Size: 0x28

class IDFSingleLoadWeapAnimInstInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    float PlayStartReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
    float PlayEndReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
}; // Size: 0x28

class IDFTeamAgentInterface : public IGenericTeamAgentInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void EventSetTeamNum(const uint8 NewTeamNum);
    uint8 EventGetTeamNum();
}; // Size: 0x28

class IDFThrowableWeapAnimInstInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    float PlayThrowUnderhandMontage(class UAnimMontage* MontageToPlay);
    float PlayThrowOverhandMontage(class UAnimMontage* MontageToPlay);
    float PlayCockMontage(class UAnimMontage* MontageToPlay);
}; // Size: 0x28

class ISpawnPointProviderInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    bool GetSpawnPointCollisionHandlingOverrideBP(const FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod& OutSpawnCollisionMethod);
    int32 GetAllSpawnPointsBP(TArray<FSpawnPointDef>& SpawnPoints);
    bool FindSpawnPointBP(int32 SpawnPointID, FSpawnPointDef& FoundSpawnPoint);
    bool CanSpawnActorFromSpawnPointBP(const FSpawnPointDef& SpawnPoint, TSubclassOf<class AActor> SpawnActorClass);
    bool CanRestartPlayerFromSpawnPointBP(const FSpawnPointDef& SpawnPoint, class AController* Player, TSubclassOf<class APawn> PlayerPawnClass);
}; // Size: 0x28

class IUseableInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void Used(class AActor* Invoker);
}; // Size: 0x28

class IVisibilityInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    FVector EventGetFocalPoint();
}; // Size: 0x28

class UDFAssetManager : public UAssetManager
{
    char padding_0[0x440];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x440

class UDFBaseGameInstance : public UGameInstance
{
    class UDFGameDialogDescriptor* PendingReturnToMainMenuMessage;                    // 0x0208 (size: 0x8)
    char padding_0[0x68];                                                             // 0x0210 (size: 0x68)
    FDFBaseGameInstanceOnPlayerStateTalkingStateChanged OnPlayerStateTalkingStateChanged; // 0x0278 (size: 0x10)
    void PlayerTalkingStateChanged(class APlayerState* TalkerPS, bool bTalking);

    void ProjectVersion();
    void OnTravelFailure(class UWorld* World, TEnumAsByte<ETravelFailure::Type> FailureType, FString ErrorString);
    void OnNetworkLagStateChanged(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkLagState::Type> LagType);
    void OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> FailureType, FString ErrorString);
    void JoinGameByIP(FString IPAddress, FString JoinPassword);
    void JoinGame(int32 SearchResultIndex, FString JoinPassword);
    bool IsHibernating();
    void HostGame(FString TravelURL, bool bLANGame, int32 MaxPlayers, FString HostName, FString Password);
    void ForceUpdateSession();
    void FindGames(const ESessionSearchPresenceType SearchPresenceType);
    void DumpOnlineSessionState();
}; // Size: 0x288

class UDFBlueprintFunctions : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    bool WasShotFired(const FRepShotInfo& Counter, const FRepShotInfo& OtherCounter);
    void TransferInventoryItems(class UDFInventoryComponent* FromInv, class UDFInventoryComponent* ToInv, bool bKeepLoadedAmmo);
    bool TextIsEmptyOrWhitespace(const FText& InText);
    class ADFBaseImpactEffect* SpawnImpactFXFromHitResult(class UObject* WorldContextObject, TSubclassOf<class ADFBaseImpactEffect> ImpactClass, const FHitResult& Impact);
    class ADFBaseImpactEffect* SpawnImpactFXFromDamageEvent(class UObject* WorldContextObject, TSubclassOf<class ADFBaseImpactEffect> ImpactClass, float DamageTaken, const FDamageEvent& DamageEvent, const class AActor* HitActor, const class AActor* HitInstigator, const class AActor* DamageCauser);
    void SetTeamNum(class AActor* Target, const uint8 NewTeamNum);
    void SetStartSpot(class AController* Controller, class AActor* NewStartSpot);
    void SetNetAddressable(class UActorComponent* ActorComp);
    void SetCastStaticShadow(class UPrimitiveComponent* PrimitiveComponent, bool bCastStaticShadow);
    void ResetPlayerVoiceTalker(class APlayerState* InPlayerState);
    void ResetAllPlayerVoiceTalkers();
    void PrintTextToLog(class UObject* WorldContextObject, const FText InText, ELogVerbosityBP InLogVerbosity, bool bPrintStackTrace);
    void PrintStringToLog(class UObject* WorldContextObject, FString inString, ELogVerbosityBP InLogVerbosity, bool bPrintStackTrace);
    bool IsVOIPTalkerStillAlive(class UVOIPTalker* InTalker);
    bool IsValidActor(const class AActor* Actor);
    bool IsPlayInEditor(class UObject* WorldContextObject);
    bool IsPlayerTalking(class APlayerState* PlayerPS);
    bool IsPlayerMuted(class APlayerController* PC, class APlayerState* PSToCheck);
    bool IsPendingKillPending(const class AActor* Actor);
    bool IsLocallyPlayerControlled(const class APawn* Pawn);
    bool IsEmptyOrWhitespace(FString inString);
    bool HasOptions(FString Options, const TArray<FString>& Keys, bool bMatchAll);
    bool HasFiringStopped(const FRepShotInfo& Counter);
    class AWorldSettings* GetWorldSettings(class UObject* WorldContextObject);
    class UVOIPTalker* GetVOIPTalkerForPlayer(class APlayerState* InPlayerState);
    ESlateVisibility GetVisibilityDefault(class UWidget* Widget);
    class ADFTeamState* GetTeamStateFromTeamId(class UObject* WorldContextObject, const uint8 TeamIdNum);
    uint8 GetTeamNum(const class AActor* Target);
    FVector GetTargetLocation(const class AActor* Actor, class AActor* RequestedBy);
    FName GetSurfaceName(TEnumAsByte<EPhysicalSurface> SurfaceType);
    class AActor* GetStartSpot(class AController* Controller);
    int32 GetShotCounterBPCompat(const FRepShotInfo& Counter);
    FString GetPluginFriendlyName(FString PluginName);
    int32 GetNumShotsFiredBPCompat(const FRepShotInfo& Counter, const FRepShotInfo& PreviousCounter);
    FText GetMapNameForDisplay(class UObject* WorldContextObject);
    FString GetMapName(class UObject* WorldContextObject);
    bool GetMapAssetVisibleInMapSelectUI(const FPrimaryAssetId& WorldAssetId, bool& bOutVisibleInMapSelectUI);
    bool GetMapAssetSupportedGameModes(const FPrimaryAssetId& WorldAssetId, TSet<TSoftClassPtr<AGameModeBase>>& OutSupportedGameModes);
    bool GetMapAssetPreviewImg(const FPrimaryAssetId& WorldAssetId, TSoftObjectPtr<UTexture2D>& OutMapPreviewImgRef);
    bool GetMapAssetPreviewBannerImg(const FPrimaryAssetId& WorldAssetId, TSoftObjectPtr<UTexture2D>& OutMapPreviewBannerImgRef);
    FText GetMapAssetNameForDisplay(const FPrimaryAssetId& WorldAssetId);
    bool GetMapAssetGameRulesetClasses(const FPrimaryAssetId& WorldAssetId, TSet<TSoftClassPtr<UDFGameRulesetBase>>& OutGameRulesetClasses);
    bool GetMapAssetDescription(const FPrimaryAssetId& WorldAssetId, FString& OutMapDescription);
    bool GetMapAssetDefaultGameMode(const FPrimaryAssetId& WorldAssetId, TSoftClassPtr<AGameModeBase>& OutDefaultGameModeRef);
    bool GetMapAssetDataSupportedGameModes(const FAssetData& WorldAsset, TSet<TSoftClassPtr<AGameModeBase>>& OutSupportedGameModes);
    bool GetMapAssetDataPreviewImg(const FAssetData& WorldAsset, TSoftObjectPtr<UTexture2D>& OutMapPreviewImgRef);
    bool GetMapAssetDataPreviewBannerImg(const FAssetData& WorldAsset, TSoftObjectPtr<UTexture2D>& OutMapPreviewBannerImgRef);
    FText GetMapAssetDataNameForDisplay(const FAssetData& WorldAsset);
    bool GetMapAssetDataGameRulesetClasses(const FAssetData& WorldAsset, TSet<TSoftClassPtr<UDFGameRulesetBase>>& OutGameRulesetClasses);
    bool GetMapAssetDataDisplayName(const FAssetData& WorldAsset, FText& OutMapDisplayName);
    bool GetMapAssetDataDescription(const FAssetData& WorldAsset, FString& OutMapDescription);
    bool GetMapAssetDataDefaultGameMode(const FAssetData& WorldAsset, TSoftClassPtr<AGameModeBase>& OutDefaultGameModeRef);
    FString GetGlobalDefaultGameMode();
    FString GetGameVersion();
    FText GetGameNameForDisplay(class UObject* WorldContextObject);
    FString GetGameModeForName(FString GameModeName);
    FString GetGameModeForMapName(FString MapName);
    FString GetGameDefaultMap();
    FString GetGameBuildInfo();
    FVector GetFocalPoint(const class AActor* Actor);
    void GetDefaultBoundingCylinder(const class AActor* Actor, float& CylinderRadius, float& CylinderHalfHeight);
    FString GetCopyrightNotice();
    TArray<FString> GetAllMapNames();
    void GameHasEnded(class AController* Controller, class AActor* EndGameFocus, bool bIsWinner);
    void FlushPressedKeys(class APlayerController* PC);
    FPrimaryAssetId FindMapIdByDisplayName(const FText& MapDisplayName, const TArray<FPrimaryAssetId>& MapIds);
    bool EqualEqual_WeaponSoundCollection(const FWeaponSoundCollection& A, const FWeaponSoundCollection& B);
    bool EqualEqual_WeaponAnimSequence(const FWeaponAnimSequence& A, const FWeaponAnimSequence& B);
    bool EqualEqual_WeaponAnimMontage(const FWeaponAnimMontage& A, const FWeaponAnimMontage& B);
    bool EqualEqual_WeaponAnimCollection(const FWeaponAnimCollection& A, const FWeaponAnimCollection& B);
    bool EqualEqual_WeaponAnim(const FWeaponAnim& A, const FWeaponAnim& B);
    bool EqualEqual_PerspectiveSound(const FPerspectiveSound& A, const FPerspectiveSound& B);
    bool EqualEqual_PerspectiveAnimSequence(const FPerspectiveAnimSequence& A, const FPerspectiveAnimSequence& B);
    bool EqualEqual_PerspectiveAnim(const FPerspectiveAnim& A, const FPerspectiveAnim& B);
    bool EqualEqual_CharacterSoundCollection(const FCharacterSoundCollection& A, const FCharacterSoundCollection& B);
    bool EqualEqual_CharacterAnimCollection(const FCharacterAnimCollection& A, const FCharacterAnimCollection& B);
    bool DoesMapIDSupportGMDefinition(const FPrimaryAssetId& MapId, const class UDFGameModeDefinition* GMDef);
    bool CharacterVariationIsValid(FDFCharacterVariationDataHandle VariationData);
    FDFCharacterVariationData CharacterVariationGetData(FDFCharacterVariationDataHandle VariationData);
    FDFCharacterVariationDataHandle CharacterVariationDataFromTableRow(class UObject* WorldContextObject, FDataTableRowHandle RowHandle);
    void Array_UInt8Sort(TArray<uint8>& ArrayToSort, bool bDescending);
    void Array_TextSort(TArray<FText>& ArrayToSort, bool bDescending);
    void Array_StringSort(TArray<FString>& ArrayToSort, bool bDescending);
    void Array_Reverse(const TArray<int32>& TargetArray);
    void Array_NameSort(TArray<FName>& ArrayToSort, bool bDescending);
    void Array_Int64Sort(TArray<int64>& ArrayToSort, bool bDescending);
    void Array_Int32Sort(TArray<int32>& ArrayToSort, bool bDescending);
    void Array_FloatSort(TArray<float>& ArrayToSort, bool bDescending);
    void Array_AssetDescriptorSort(TArray<FAssetDescriptor>& ArrayToSort, bool bDescending, bool bCompareDisplayText);
}; // Size: 0x28

class UDFCfgDataManager : public UObject
{
    char padding_0[0x78];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x78

class UDFCharacterLeanHandler : public UObject
{
    FRuntimeFloatCurve StationaryStandLeanCurve;                                      // 0x0028 (size: 0x88)
    FRuntimeFloatCurve MobileStandLeanCurve;                                          // 0x00B0 (size: 0x88)
    FRuntimeFloatCurve StationaryCrouchLeanCurve;                                     // 0x0138 (size: 0x88)
    FRuntimeFloatCurve MobileCrouchLeanCurve;                                         // 0x01C0 (size: 0x88)
    float LeanTransitionSpeed;                                                        // 0x0248 (size: 0x4)
    float StandLeanInYOffset;                                                         // 0x024C (size: 0x4)
    float CrouchLeanInYOffset;                                                        // 0x0250 (size: 0x4)
    float LeanRollAmount;                                                             // 0x0254 (size: 0x4)
    ELeanDirection LeanDirection;                                                     // 0x0258 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0259 (size: 0x3)
    float LeanTarget;                                                                 // 0x025C (size: 0x4)
    uint8 bAtFullLeanTarget;                                                          // 0x0260 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0261 (size: 0x3)
    float LeanAmount;                                                                 // 0x0264 (size: 0x4)

    void UpdateLeanDirection(ELeanDirection NewLeanDir);
    void ReceiveTick(float DeltaTime);
    void ReceiveReset();
    bool IsMoving();
    bool IsLeaning();
    ECharacterStance GetStance();
    ECharacterStance GetPreviousStance();
    class UDFCharacterMovementComponent* GetOwningCharacterMovement();
    class ADFBaseCharacter* GetOwningCharacter();
    float GetMaxLeanXOffset(ELeanDirection NewLeanDir, ECharacterStance LeanStance, bool bMoving);
    float GetLeanYOffset(float DesiredLeanAmt);
    float GetLeanXOffset(float DesiredLeanAmt);
    float GetLeanRollRot(float DesiredLeanAmt);
    float DetermineLeanTargetAmount(ELeanDirection DesiredLeanDir, bool bMoving);
}; // Size: 0x280

class UDFCharacterMovementComponent : public UCharacterMovementComponent
{
    class ADFBaseCharacter* DFCharacterOwner;                                         // 0x0610 (size: 0x8)
    TEnumAsByte<EMovementMode> LastMovementMode;                                      // 0x0618 (size: 0x1)
    uint8 LastCustomMovementMode;                                                     // 0x0619 (size: 0x1)
    char padding_0[0x2];                                                              // 0x061A (size: 0x2)
    FFloatRange StandWalkSpeedMultiplierRange;                                        // 0x061C (size: 0x10)
    FFloatRange CrouchedWalkSpeedMultiplierRange;                                     // 0x062C (size: 0x10)
    FFloatRange ProneWalkSpeedMultiplierRange;                                        // 0x063C (size: 0x10)
    float LeanSpeedMultiplier;                                                        // 0x064C (size: 0x4)
    uint8 bUseLeanSpeedMultiplierWhileAiming;                                         // 0x0650 (size: 0x1)
    uint8 bCanCrouchWhileFalling;                                                     // 0x0650 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0651 (size: 0x3)
    uint8 bUseJumpStamina;                                                            // 0x0654 (size: 0x1)
    char padding_2[0x3];                                                              // 0x0655 (size: 0x3)
    float JumpMaxStamina;                                                             // 0x0658 (size: 0x4)
    float JumpStaminaCost;                                                            // 0x065C (size: 0x4)
    float JumpStaminaRecoveryRate;                                                    // 0x0660 (size: 0x4)
    float JumpStaminaThreshold;                                                       // 0x0664 (size: 0x4)
    class UCurveVector* VaultOverVelocityCurve;                                       // 0x0668 (size: 0x8)
    class UCurveVector* SprintVaultOverVelocityCurve;                                 // 0x0670 (size: 0x8)
    class UCurveVector* ClimbOntoVelocityCurve;                                       // 0x0678 (size: 0x8)
    class UCurveVector* SprintClimbOntoVelocityCurve;                                 // 0x0680 (size: 0x8)
    float VaultViewPitch;                                                             // 0x0688 (size: 0x4)
    float VaultReachDistance;                                                         // 0x068C (size: 0x4)
    float SprintVaultReachDistance;                                                   // 0x0690 (size: 0x4)
    float VaultReachRadius;                                                           // 0x0694 (size: 0x4)
    float VaultCapsuleLOSRadius;                                                      // 0x0698 (size: 0x4)
    float MaxVaultObstacleVelocitySquared;                                            // 0x069C (size: 0x4)
    float VaultOverDisplacementXOffset;                                               // 0x06A0 (size: 0x4)
    float ClimbOntoDisplacementXOffset;                                               // 0x06A4 (size: 0x4)
    float VaultOverDisplacementZOffset;                                               // 0x06A8 (size: 0x4)
    float ClimbOntoDisplacementZOffset;                                               // 0x06AC (size: 0x4)
    float VaultOverLedgeSurfaceThreshold;                                             // 0x06B0 (size: 0x4)
    float ClimbOntoLedgeSurfaceThreshold;                                             // 0x06B4 (size: 0x4)
    float MinVaultOverLedgeHeight;                                                    // 0x06B8 (size: 0x4)
    float MaxVaultOverLedgeHeight;                                                    // 0x06BC (size: 0x4)
    float MinClimbOntoLedgeHeight;                                                    // 0x06C0 (size: 0x4)
    float MaxClimbOntoLedgeHeight;                                                    // 0x06C4 (size: 0x4)
    uint8 bWantsToSprint;                                                             // 0x06C8 (size: 0x1)
    char padding_3[0x3];                                                              // 0x06C9 (size: 0x3)
    float SprintSpeedMultiplier;                                                      // 0x06CC (size: 0x4)
    float SprintAccelerationMultiplier;                                               // 0x06D0 (size: 0x4)
    float SprintStrafingThreshold;                                                    // 0x06D4 (size: 0x4)
    uint8 bUseSprintStamina;                                                          // 0x06D8 (size: 0x1)
    char padding_4[0x3];                                                              // 0x06D9 (size: 0x3)
    float SprintMaxStamina;                                                           // 0x06DC (size: 0x4)
    float SprintStaminaDelta;                                                         // 0x06E0 (size: 0x4)
    float SprintStaminaThreshold;                                                     // 0x06E4 (size: 0x4)
    uint8 bWantsToAim;                                                                // 0x06E8 (size: 0x1)
    char padding_5[0x3];                                                              // 0x06E9 (size: 0x3)
    float AimSpeedMultiplier;                                                         // 0x06EC (size: 0x4)
    uint8 bWantsToLeanLeft;                                                           // 0x06F0 (size: 0x1)
    uint8 bWantsToLeanRight;                                                          // 0x06F0 (size: 0x1)
    char padding_6[0x3];                                                              // 0x06F1 (size: 0x3)
    float ProneHalfHeight;                                                            // 0x06F4 (size: 0x4)
    uint8 bCanWalkOffLedgesWhenProne;                                                 // 0x06F8 (size: 0x1)
    uint8 bCanAimWhileCrawling;                                                       // 0x06F8 (size: 0x1)
    uint8 bProneMaintainsBaseLocation;                                                // 0x06F8 (size: 0x1)
    char padding_7[0x3];                                                              // 0x06F9 (size: 0x3)
    float MaxWalkSpeedProne;                                                          // 0x06FC (size: 0x4)
    uint8 bWantsToBeProne;                                                            // 0x0700 (size: 0x1)
    uint8 bCanSwimUnderwater;                                                         // 0x0700 (size: 0x1)
    char padding_8[0x3];                                                              // 0x0701 (size: 0x3)
    float JumpStamina;                                                                // 0x0704 (size: 0x4)
    uint8 bCanSprint;                                                                 // 0x0708 (size: 0x1)
    char padding_9[0x3];                                                              // 0x0709 (size: 0x3)
    float SprintStamina;                                                              // 0x070C (size: 0x4)
    uint8 bCanAim;                                                                    // 0x0710 (size: 0x1)
    uint8 bCanLean;                                                                   // 0x0710 (size: 0x1)
    uint8 bCanBeProne;                                                                // 0x0710 (size: 0x1)
    uint8 bCanVault;                                                                  // 0x0710 (size: 0x1)
    char padding_10[0x2F];                                                            // 0x0711 (size: 0x2F)
    uint8 bJustLeftWater;                                                             // 0x0740 (size: 0x1)

    FDFVaultTraceResult VaultTrace();
    bool IsVaulting();
    bool IsStrafing(float Threshold);
    bool IsStanding();
    bool IsSprinting();
    bool IsReloading();
    bool IsProne();
    bool IsMovingForward();
    bool IsMoving(bool bIgnoreZVel);
    bool IsLeaning();
    bool IsCrawling();
    bool IsAlive();
    bool IsAiming();
    ECharacterStance GetStance();
    ECharacterStance GetPreviousStance();
    ELeanDirection GetLeanDirection();
    float GetLeanAmount();
    class ADFBaseCharacter* GetDFCharacterOwner();
    float ClampSpeedMultiplier(float MultValue);
}; // Size: 0x750

class UDFCheatManager : public UCheatManager
{
    char padding_0[0x78];                                                             // 0x0000 (size: 0x0)

    void ToggleItemDebug();
    void ToggleGunRecoil();
    void ToggleGunInfiniteClipAmmo();
    void ToggleGunInfiniteAmmo();
}; // Size: 0x78

class UDFDamageType : public UDamageType
{
    TSubclassOf<class ADFBaseImpactEffect> ImpactFXClass;                             // 0x0040 (size: 0x8)

}; // Size: 0x48

class UDFFactionInfo : public UDFPrimaryDataAsset
{
    FPrimaryAssetType FactionType;                                                    // 0x0030 (size: 0x8)
    FName FactionName;                                                                // 0x0038 (size: 0x8)
    uint8 bVisibleInFactionSelectUI;                                                  // 0x0040 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0041 (size: 0x7)
    FText DisplayName;                                                                // 0x0048 (size: 0x18)
    FText DisplayNameShort;                                                           // 0x0060 (size: 0x18)
    FText DisplayNameAcronym;                                                         // 0x0078 (size: 0x18)

}; // Size: 0x90

class UDFFunctionLibrary : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void SetEnableAutoBlendOutForActiveMontage(const class UAnimMontage* AnimMontage, const class USkeletalMeshComponent* AnimSourceMesh, bool bNewEnableAutoBlendOut);
    void ClearMeshAnimInstance(class USkeletalMeshComponent* MeshToClear);
}; // Size: 0x28

class UDFGameEngine : public UGameEngine
{
    char padding_0[0xE30];                                                            // 0x0000 (size: 0x0)
}; // Size: 0xE30

class UDFGameModeDefinition : public UPrimaryDataAsset
{
    bool bSupportsAllMaps;                                                            // 0x0030 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0031 (size: 0x7)
    TSet<FPrimaryAssetId> SpecificMapsToSupport;                                      // 0x0038 (size: 0x50)
    bool bShowInFrontEnd;                                                             // 0x0088 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0089 (size: 0x7)
    FText Title;                                                                      // 0x0090 (size: 0x18)
    FText Description;                                                                // 0x00A8 (size: 0x18)
    TSoftObjectPtr<UTexture2D> PreviewBannerImg;                                      // 0x00C0 (size: 0x28)

}; // Size: 0xE8

class UDFGameRulesetBase : public UObject
{
    uint8 bTickable;                                                                  // 0x0030 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0031 (size: 0x7)
    FText DisplayName;                                                                // 0x0038 (size: 0x18)
    int32 Priority;                                                                   // 0x0050 (size: 0x4)

    void UnregisterActor(class AActor* UnregisteredActor);
    void RegisterActor(class AActor* RegisteredActor);
    void ReceiveTick(float DeltaTime);
    void PlayerWounded(class AController* Victim, float DamageAmount, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void PlayerSuicide(class AController* Victim);
    void PlayerSpawn(class AController* Player, class APawn* NewPlayerPawn);
    void PlayerPostLogout(class AController* ExitingPlayer);
    void PlayerPostLogin(class APlayerController* NewPlayer);
    void PlayerKilled(class AController* Killer, class AController* Victim);
    void PlayerJoinedTeam(class AController* JoiningPlayer, uint8 TeamNum);
    void PlayerJoined(class APlayerController* NewPlayer);
    void PlayerDied(class AController* Victim);
    void MatchHasEnded();
    void Init();
    class ADFBaseGameState* GetGameState();
    class ADFBaseGameMode* GetGameMode();
}; // Size: 0x58

class UDFGunRecoilHandler : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void OnWeaponStopFire();
    void OnWeaponStartFire();
    void OnWeaponFire();
    void OnTick(float DeltaTime);
    bool IsFiring();
    class APawn* GetOwningPawn();
    class ADFBaseGun* GetOwningGun();
    FVector GetConeOfFireOffset();
}; // Size: 0x28

class UDFInventoryComponent : public UActorComponent
{
    FDFInventoryComponentOnItemAdded OnItemAdded;                                     // 0x00B0 (size: 0x10)
    void InventoryOnItemAddedSignature(class ADFBaseItem* AddedItem);
    FDFInventoryComponentOnItemRemoved OnItemRemoved;                                 // 0x00C0 (size: 0x10)
    void InventoryOnItemRemovedSignature(class ADFBaseItem* RemovedItem);
    TArray<class ADFBaseItem*> Items;                                                 // 0x00D0 (size: 0x10)
    TArray<class TSubclassOf<ADFBaseItem>> DefaultItemClasses;                        // 0x00E0 (size: 0x10)

    int32 Size();
    bool RemoveItemAt(const int32 Index, class ADFBaseItem*& OutRemovedItem, bool bDestroyItem);
    bool Remove(const class ADFBaseItem* Item, bool bDestroyItem);
    bool IsValidIndex(int32 Index);
    bool GetItem(const int32 Index, class ADFBaseItem*& OutItem);
    bool FindItemByClass(const TSubclassOf<class ADFBaseItem>& ItemClass, class ADFBaseItem*& OutItem);
    bool Find(const class ADFBaseItem* ItemToCompare, int32& OutIndex);
    void Clear(bool bDestroyItems);
    void AddDefaultInventoryItems();
    bool Add(const class ADFBaseItem* Item);
}; // Size: 0xF0

class UDFLoadout : public UDataAsset
{
    TArray<class TSubclassOf<ADFBaseItem>> ItemClasses;                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UDFLocalPlayer : public ULocalPlayer
{
    char padding_0[0x258];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x258

class UDFMapRotationManager : public UDFCfgDataManager
{
    char padding_0[0x90];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x90

class UDFNavigationSystem : public UNavigationSystemV1
{
    char padding_0[0x538];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x538

class UDFNavigationSystemConfig : public UNavigationSystemModuleConfig
{
    uint8 bGenerateNavigationOnlyAroundNavigationInvokers;                            // 0x0058 (size: 0x1)

}; // Size: 0x60

class UDFNetworkEventSubsystem : public UWorldSubsystem
{
    FDFNetworkEventSubsystemOnPlayersUpdatedDynamic OnPlayersUpdatedDynamic;          // 0x0030 (size: 0x10)
    void OnGameStateEventDynamic(class AGameStateBase* GameState);
    FDFNetworkEventSubsystemOnTeamsUpdatedDynamic OnTeamsUpdatedDynamic;              // 0x0040 (size: 0x10)
    void OnGameStateEventDynamic(class AGameStateBase* GameState);

    void OnGameStateEventDynamic__DelegateSignature(class AGameStateBase* GameState);
    class UDFNetworkEventSubsystem* Get(const class UObject* WorldContextObject);
}; // Size: 0xA0

class UDFOnlineSessionClient : public UOnlineSessionClient
{
    char padding_0[0x1A8];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x1A8

class UDFPhysicalMaterial : public UPhysicalMaterial
{
    class UParticleSystem* CollisionFX;                                               // 0x0080 (size: 0x8)
    class USoundCue* CollisionSound;                                                  // 0x0088 (size: 0x8)

}; // Size: 0x90

class UDFPhysicsCollisionHandler : public UPhysicsCollisionHandler
{
    char padding_0[0x40];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x40

class UDFPlayerAdminList : public UDFCfgDataManager
{
    char padding_0[0xC8];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xC8

class UDFPlayerBanList : public UDFCfgDataManager
{
    char padding_0[0xC8];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xC8

class UDFPlayerComponent : public UActorComponent
{
    class AController* ControllerOwner;                                               // 0x00B0 (size: 0x8)
    uint8 bWantsToRestart;                                                            // 0x00B8 (size: 0x1)

    void RestartPlayer();
    void ReceiveSeamlessTravelToCommon(class AController* NewC, class UDFPlayerComponent* NewCPlayerComp);
    void ReceiveSeamlessTravelFromCommon(class AController* OldC, class UDFPlayerComponent* OldCPlayerComp);
    void ReceivePawnLeavingGame();
    void ReceiveGameHasEnded(class AActor* EndGameFocus, bool bIsWinner);
    bool IsPendingRestart();
    class ADFTeamState* GetTeamState();
    class APlayerState* GetPlayerState();
    class APawn* GetPawnOwner();
    float GetMinRestartDelay();
    bool CanRestartPlayer();
}; // Size: 0xC8

class UDFPlayerWhitelist : public UDFCfgDataManager
{
    char padding_0[0xC8];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xC8

class UDFPrimaryDataAsset : public UPrimaryDataAsset
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x30

class UDFProjectileSubsystem : public UWorldSubsystem
{
    TArray<class ADFBaseProjectile*> PredictedProjectiles;                            // 0x0030 (size: 0x10)
    int32 MaxFiredShots;                                                              // 0x0040 (size: 0x4)

}; // Size: 0x58

class UDFServerAdminSubsystem : public UEngineSubsystem
{
    TArray<class UDFCfgDataManager*> DataMgrs;                                        // 0x0030 (size: 0x10)

}; // Size: 0x50

class UDFTableLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    int32 GetRowInvFromIndex(int32 Index, int32 TableHeight);
    int32 GetRowFromIndex(int32 Index, int32 TableWidth);
    int32 GetIndexFromRowColumnPair(int32 Row, int32 Column, int32 TableWidth);
    int32 GetIndexFromColumnRowPair(int32 Column, int32 Row, int32 TableHeight);
    int32 GetColumnInvFromIndex(int32 Index, int32 TableHeight);
    int32 GetColumnFromIndex(int32 Index, int32 TableWidth);
}; // Size: 0x28

class UDFTeamDefinition : public UObject
{
    FName TeamName;                                                                   // 0x0028 (size: 0x8)
    TSoftClassPtr<UDFFactionInfo> FactionInfoClass;                                   // 0x0030 (size: 0x28)

}; // Size: 0x58

class UDFTokenStore : public UDFCfgDataManager
{
    char padding_0[0xC8];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xC8

class UDFVoteIssue : public UObject
{
    float PassRatio;                                                                  // 0x0028 (size: 0x4)
    float Duration;                                                                   // 0x002C (size: 0x4)
    float PassedVoteCooldown;                                                         // 0x0030 (size: 0x4)
    float FailedVoteCooldown;                                                         // 0x0034 (size: 0x4)
    bool bDenyVACBannedUsersFromVoting;                                               // 0x0038 (size: 0x1)
    bool bDisableVACBanCheckWhileAdminIsOnline;                                       // 0x0039 (size: 0x1)
    bool bOnlyAdminsCanInitiateVote;                                                  // 0x003A (size: 0x1)
    char padding_0[0x5];                                                              // 0x003B (size: 0x5)
    FText IssueDisplayNameText;                                                       // 0x0040 (size: 0x18)
    FText VotePromptFormatText;                                                       // 0x0058 (size: 0x18)
    int32 NumEligibleVoters;                                                          // 0x0070 (size: 0x4)
    char padding_1[0x4];                                                              // 0x0074 (size: 0x4)
    TArray<FDFPlayerVote> Votes;                                                      // 0x0078 (size: 0x10)
    float VoteStartTime;                                                              // 0x0088 (size: 0x4)
    float VoteEndTime;                                                                // 0x008C (size: 0x4)
    EDFVoteStatus VoteEndStatus;                                                      // 0x0090 (size: 0x1)
    char padding_2[0x7];                                                              // 0x0091 (size: 0x7)
    class APlayerState* VoteOwner;                                                    // 0x0098 (size: 0x8)
    FDFVoteIssueContext IssueContext;                                                 // 0x00A0 (size: 0x18)

    void VotePassed();
    void VoteFailed();
    void ResetVote();
    void ReceiveVoteReset();
    void ReceiveVoteInit();
    void GetYesNoVoteCounts(int32& OutYesVotes, int32& OutNoVotes);
    void GetVoteSelections(TArray<FDFPlayerVoteSelection>& OutVoteSelections);
    int32 GetRequiredVoteCountToPass();
    class UDFVotingComponent* GetOwningVotingComponent();
    void GetEligibleVoters(TArray<class APlayerState*>& OutEligibleVoters);
    int32 GetEligibleVoterCount();
    EDFVoteStatus DetermineVoteStatus();
    bool CanVoteOn(class APlayerState* VoterPS);
    bool CanStartVote(class APlayerState* InvokingPlayer);
    bool AllowsVoteFrom(class APlayerState* VoterPS);
    bool AllowsStartVoteBy(class APlayerState* InvokingPlayer);
}; // Size: 0xC8

class UDFVoteIssuePlayer : public UDFVoteIssue
{
    bool bAllowAdminTargets;                                                          // 0x00C8 (size: 0x1)

    bool CanInitiateVoteWithTarget(class APlayerState* TargetPS);
}; // Size: 0xD0

class UDFVoteIssuePlayerKick : public UDFVoteIssuePlayer
{
    float BanDuration;                                                                // 0x00D0 (size: 0x4)

}; // Size: 0xD8

class UDFVotingComponent : public UActorComponent
{
    FDFVotingComponentOnPlayerVoteInitiatedDynamic OnPlayerVoteInitiatedDynamic;      // 0x00F8 (size: 0x10)
    void OnPlayerVoteIssueEventDynamic(class UDFVotingComponent* SourceVotingComponent);
    FDFVotingComponentOnPlayerVoteEndedDynamic OnPlayerVoteEndedDynamic;              // 0x0108 (size: 0x10)
    void OnPlayerVoteIssueEventDynamic(class UDFVotingComponent* SourceVotingComponent);
    FDFVotingComponentOnPlayerVoteStateUpdatedDynamic OnPlayerVoteStateUpdatedDynamic; // 0x0118 (size: 0x10)
    void OnPlayerVoteIssueEventDynamic(class UDFVotingComponent* SourceVotingComponent);
    FDFActiveVoteInfo ActiveVoteInfo;                                                 // 0x0128 (size: 0x48)
    class UDFVoteIssue* ActiveVoteIssue;                                              // 0x0170 (size: 0x8)
    TArray<class UDFVoteIssue*> VoteIssues;                                           // 0x0178 (size: 0x10)
    TArray<FDFVoteIssueDefinition> VoteIssueDefinitions;                              // 0x0188 (size: 0x10)

    void OnRep_ActiveVoteInfo(const FDFActiveVoteInfo& PreviousValue);
    void OnPlayerVoteIssueEventDynamic__DelegateSignature(class UDFVotingComponent* SourceVotingComponent);
    bool IsVotingInProgress();
    bool InitiateVote(class APlayerState* InvokingPlayer, TSubclassOf<class UDFVoteIssue> IssueClass, const FDFVoteIssueContext& IssueContext);
    class UDFVoteIssue* GetVoteIssueForClass(TSubclassOf<class UDFVoteIssue> IssueClass);
    bool GetVoteIssueDefinitionForClass(TSubclassOf<class UDFVoteIssue> IssueClass, FDFVoteIssueDefinition& OutIssueDefinition);
    bool CastVote(class APlayerState* InvokingPlayer, int32 VoteSelectionID);
    bool CanVoteTargetPlayer(class APlayerState* TargetPS, TSubclassOf<class UDFVoteIssue> IssueClass);
    bool CanInitiateVote(class APlayerState* InvokingPlayer, TSubclassOf<class UDFVoteIssue> IssueClass);
    bool CanCastVote(class APlayerState* VotingPlayer, int32 VoteSelectionID);
}; // Size: 0x1B0

class UDFVotingStatics : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    FText VoteInfoGetPromptTextForDisplay(const FDFActiveVoteInfo& VoteInfo);
    FDFVoteIssueContext MakeVoteContext(class APlayerState* TargetPlayer);
    bool IsValidVotingPlayer(class APlayerState* PlayerState);
    class UDFVotingComponent* GetGameStateVotingComponent(const class UObject* WorldContextObject);
}; // Size: 0x28

class UGameSessionBlueprintLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void RemoveAdmin(class UObject* WorldContextObj, class APlayerController* AdminPlayer);
    int32 GetMinPlayers(class UObject* WorldContextObj);
    int32 GetMaxSpectators(class UObject* WorldContextObj);
    int32 GetMaxPlayers(class UObject* WorldContextObj);
    void AddAdmin(class UObject* WorldContextObj, class APlayerController* AdminPlayer);
}; // Size: 0x28

class USpawnPointStatics : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    bool SpawnPointExists(const class UObject* Target, int32 SpawnPointID);
    bool GetSpawnPointCollisionHandlingOverride(const class UObject* Target, const FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod& OutSpawnCollisionMethod);
    int32 GetAllSpawnPointTransforms(const class UObject* Target, TArray<FTransform>& SpawnPointTransforms);
    int32 GetAllSpawnPoints(const class UObject* Target, TArray<FSpawnPointDef>& SpawnPoints);
    bool FindSpawnPoint(const class UObject* Target, int32 SpawnPointID, FSpawnPointDef& FoundSpawnPoint);
    bool CanSpawnActorFromSpawnPoint(const class UObject* Target, const FSpawnPointDef& SpawnPoint, const TSubclassOf<class AActor>& SpawnActorClass);
    bool CanSpawnActorFromAnySpawnPoint(const class UObject* Target, const TSubclassOf<class AActor>& SpawnActorClass);
    bool CanRestartPlayerFromSpawnPoint(const class UObject* Target, const FSpawnPointDef& SpawnPoint, class AController* Player, const TSubclassOf<class APawn>& PlayerPawnClass);
    bool CanRestartPlayerFromAnySpawnPoint(const class UObject* Target, class AController* Player, const TSubclassOf<class APawn>& PlayerPawnClass);
}; // Size: 0x28

#endif
