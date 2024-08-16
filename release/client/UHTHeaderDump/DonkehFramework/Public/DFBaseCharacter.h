#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EVisibilityBasedAnimTickOption -FallbackName=EVisibilityBasedAnimTickOption
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RootMotionSourceGroup -FallbackName=RootMotionSourceGroup
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "CharacterAbilityTransitionSignatureDelegate.h"
#include "CharacterAnimCollection.h"
#include "CharacterEquippedItemChangedSignatureDelegate.h"
#include "CharacterHealthChangedSignatureDelegate.h"
#include "CharacterOnDeathSignatureDelegate.h"
#include "CharacterSoundCollection.h"
#include "DFTeamAgentInterface.h"
#include "DFVaultTraceData.h"
#include "DFVaultTraceResult.h"
#include "ECharacterStance.h"
#include "EDFItemEnabledMode.h"
#include "EItemType.h"
#include "ELeanDirection.h"
#include "PerspectiveAnim.h"
#include "PerspectiveSound.h"
#include "TakeHitInfo.h"
#include "TeamNumUpdateSignatureDelegate.h"
#include "TeamStateUpdateSignatureDelegate.h"
#include "DFBaseCharacter.generated.h"

class AActor;
class AController;
class ADFBaseItem;
class ADFTeamState;
class APawn;
class UAnimMontage;
class UAnimSequenceBase;
class UAudioComponent;
class UDFCharacterLeanHandler;
class UDFCharacterMovementComponent;
class UDFInventoryComponent;
class UDFLoadout;
class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBaseCharacter : public ACharacter, public IDFTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 RemoteViewYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bClientResimulateSprintStamina: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnimCollection DefaultPawnAnimCollection;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayFootstepFXWithPerspMeshOnly: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTickAllAnimationOnDedicatedServer: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyTickAnimMontagesOnDedicatedServer: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterSoundCollection DefaultPawnSoundCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EquippedItem, meta=(AllowPrivateAccess=true))
    ADFBaseItem* EquippedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADFBaseItem* LastEquippedItem;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterEquippedItemChangedSignature OnEquippedItemChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDFInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDFLoadout* DefaultLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemEnabledMode, meta=(AllowPrivateAccess=true))
    EDFItemEnabledMode ItemEnabledMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ShotIDCounter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowWeaponFireWhileCrawling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDying: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterHealthChangedSignature OnHealthChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollLifeSpan;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterOnDeathSignature OnCharacterDeath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastTakeHitInfo, meta=(AllowPrivateAccess=true))
    FTakeHitInfo LastTakeHitInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> BoneDamageMultipliers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyDamageMomentumOnHit: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAbilityTransitionSignature OnSprintTransition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAbilityTransitionSignature OnAimTransition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAbilityTransitionSignature OnLeanTransition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAbilityTransitionSignature OnVaultTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedStance, meta=(AllowPrivateAccess=true))
    ECharacterStance ReplicatedStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECharacterStance PreviousStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPressedVault: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bSprinting, meta=(AllowPrivateAccess=true))
    uint8 bSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bAiming, meta=(AllowPrivateAccess=true))
    uint8 bAiming: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsProne: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bVaulting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWasVaulting: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDFVaultTraceResult PendingVaultTraceResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDFVaultTraceData VaultParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedLeanAmount, meta=(AllowPrivateAccess=true))
    float ReplicatedLeanAmount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UDFCharacterLeanHandler* LeanHandler;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDFCharacterMovementComponent* DFCharacterMovement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetEyeHeight;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInterpCrouchedEyeHeight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchedTransitionInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInterpProneEyeHeight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProneTransitionInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProneEyeHeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamNum, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamState, meta=(AllowPrivateAccess=true))
    ADFTeamState* TeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADFTeamState* PrevTeamState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowTeamIdOverride: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamNumUpdateSignature OnPawnTeamNumUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamStateUpdateSignature OnPawnTeamStateUpdated;
    
    ADFBaseCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Vault();
    
    UFUNCTION(BlueprintCallable)
    void UnSprint(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void UnLean(ELeanDirection UnDesiredLeanDir, bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void UnAim(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Suicide();
    
    UFUNCTION(BlueprintCallable)
    void StopVaulting();
    
    UFUNCTION(BlueprintCallable)
    void StopFire();
    
    UFUNCTION(BlueprintCallable)
    void StopCharacterPerspectiveAnimation(const FPerspectiveAnim& CharAnim);
    
    UFUNCTION(BlueprintCallable)
    void StopCharacterMontage(UAnimMontage* CharMontage);
    
    UFUNCTION(BlueprintCallable)
    void StopAllAnimMontages(bool bPerspectiveMeshOnly);
    
    UFUNCTION(BlueprintCallable)
    void StartFire();
    
    UFUNCTION(BlueprintCallable)
    void SprintToggle();
    
    UFUNCTION(BlueprintCallable)
    void Sprint(bool bClientSimulation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SpawnHitImpactFX(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void SetRagdollPhysics();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetItemEnabledMode(EDFItemEnabledMode ItemMode);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHealth(float InHealth);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSuicide();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipItem(ADFBaseItem* ItemToEquip);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDoVault(const FDFVaultTraceData& VaultStartParams);
    
    UFUNCTION(BlueprintCallable)
    void Reload();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRestart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayHit(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser, bool bKilled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePawnTeamStateUpdated(ADFTeamState* TeamStateBeforeUpdate, ADFTeamState* NewTeamState, bool bNewTeamStateInit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePawnTeamNumUpdated(uint8 LastTeamNum, uint8 NewTeamNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnStartVault();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnStartSprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnStartLean();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnStartAim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnRepPlayerState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnEndVault();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnEndSprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnEndLean();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnEndAim();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHealthChanged(float NewHealthTotal, float PrevHealthTotal);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEquippedItemChanged(ADFBaseItem* NewEquippedItem, ADFBaseItem* PrevEquippedItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void ProneToggle();
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterUnEquipMontage(UAnimMontage* UnEquipMontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterThrowUnderhandMontage(UAnimMontage* ThrowUnderhandMontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterThrowOverhandMontage(UAnimMontage* ThrowOverhandMontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterStartReloadMontage(UAnimMontage* StartReloadMontageToPlay, bool bDryReload);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* PlayCharacterSound(const FPerspectiveSound& Sound);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterReloadMontage(bool bDryReload);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterPerspectiveAnimation(const FPerspectiveAnim& CharAnim, bool bForceDisableAutoBlendOut);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterMontage(UAnimMontage* CharMontage, bool bForceDisableAutoBlendOut);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterFireMontage(UAnimMontage* FireMontageToPlay, bool bFireLast, bool bFireADS);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterEquipMontage(bool bDontPlayAndReturnDominantPlayLengthOnly);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterEndReloadMontage(UAnimMontage* EndReloadMontageToPlay, bool bDryReload);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterDeathMontage(bool bDontPlayAndReturnDominantPlayLengthOnly);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterCockMontage(UAnimMontage* CockMontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterActionMontage(UAnimMontage* ActionMontageToPlay);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamState(ADFTeamState* TeamStateBeforeUpdate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamNum(uint8 LastTeamNum);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedStance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedLeanAmount(float LastReplicatedLeanAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastTakeHitInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemEnabledMode(EDFItemEnabledMode PreviousItemEnabledMode);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsProne();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Health(const float PreviousValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedItem(ADFBaseItem* LastItem);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bSprinting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bAiming();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeath(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 NextShotID();
    
    UFUNCTION(BlueprintCallable)
    void LeaveProne(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void LeanToggle(ELeanDirection LeanDir);
    
    UFUNCTION(BlueprintCallable)
    void Lean(ELeanDirection DesiredLeanDir, bool bClientSimulation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemEnabledModeChanged(EDFItemEnabledMode PreviousItemEnabledMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrefiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerspectiveMesh(const USkeletalMeshComponent* MeshCompToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeaning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable)
    void GoProne(bool bClientSimulation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GiveLoadout(UDFLoadout* Loadout, bool bEquipFirstItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFBaseItem* GetRelevantEquippedItem() const;
    
    UFUNCTION(BlueprintCallable)
    ADFBaseItem* GetPreviousInventoryItem(bool bEquippable);
    
    UFUNCTION(BlueprintCallable)
    ADFBaseItem* GetNextInventoryItem(bool bEquippable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetMontageToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDFItemEnabledMode GetItemEnabledMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetItemAttachPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFInventoryComponent* GetInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFBaseItem* GetEquippedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDamageMultiplierByBoneName(const FName& BoneName, float& DamageMultiplier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetCharacterMeshToUse(bool bIgnoreLocalControlOnServer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterDeathMontageToUse(UAnimMontage*& OutCharDeathMontage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVisibilityBasedAnimTickOption GetCharacterAnimTickOptionToUse(bool bVisibleMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequenceBase* GetAnimToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAimOffsets() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipPreviousItem();
    
    UFUNCTION(BlueprintCallable)
    void EquipNextItemByType(EItemType ItemType);
    
    UFUNCTION(BlueprintCallable)
    void EquipNextItem();
    
    UFUNCTION(BlueprintCallable)
    void EquipItem(ADFBaseItem* ItemToEquip);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Die(float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void CrouchToggle();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientVeryShortAdjustPosition_CustomStamina(float Timestamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, float ServerSprintStamina);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAdjustRootMotionSourcePosition_CustomStamina(float Timestamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, float ServerSprintStamina);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAdjustRootMotionPosition_CustomStamina(float Timestamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, float ServerSprintStamina);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAdjustPosition_CustomStamina(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, float ServerSprintStamina);
    
    UFUNCTION(BlueprintCallable)
    void ClearCharacterAnimInstances(bool bPerspectiveMeshOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanVault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLean(ELeanDirection DesiredLeanDir) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGoProne() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDie(float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowsWeaponFire() const;
    
    UFUNCTION(BlueprintCallable)
    void AimToggle();
    
    UFUNCTION(BlueprintCallable)
    void Aim(bool bClientSimulation);
    

    // Fix for true pure virtual functions not being implemented
};

