#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "DFBaseItem.h"
#include "PerspectiveAnim.h"
#include "PerspectiveSound.h"
#include "RepShotInfo.h"
#include "Templates/SubclassOf.h"
#include "WeaponAnimCollection.h"
#include "WeaponFireSignatureDelegate.h"
#include "WeaponSoundCollection.h"
#include "DFBaseWeapon.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class UAudioComponent;
class UDamageType;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBaseWeapon : public ADFBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponFireSignature OnFire;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bFiring: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bReadyToFirePendingRelease: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireOnRelease: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrefireDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bPrefiring, meta=(AllowPrivateAccess=true))
    uint8 bPrefiring: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bADSFireOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bLastShotFired: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRepCounterPending: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireCounter, meta=(AllowPrivateAccess=true))
    FRepShotInfo FireCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRepShotInfo PreviousRepFireCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRepShotInfo PostStoppedFireCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastFireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastShotFireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseServerSideFiringLogic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSimulateWeaponFireOnDedicatedServer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAnimCollection WeaponAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopAllFireAnimsAfterFireRateDelay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSimulate1PWeaponFireOnPawnOwner1PMesh: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponSoundCollection WeaponSoundCollection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSingleAction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSingleLoad: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponMesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanSprintWhilePrefiring: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DamageFalloffCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageTypeClass;
    
public:
    ADFBaseWeapon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopWeaponPerspectiveAnimation(const FPerspectiveAnim& WeapAnim);
    
    UFUNCTION(BlueprintCallable)
    void StopWeaponMontage(UAnimMontage* WeapMontage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopSimulatingWeaponFire(bool bForceStopAll);
    
    UFUNCTION(BlueprintCallable)
    void SimulateWeaponFire();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSimulateWeaponFire() const;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPreFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireShot(const FVector_NetQuantize& Origin, const FVector_NetQuantizeNormal& ShootDir, int32 RandomSeed, float Timestamp, int32 ShotID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStopSimulatingWeaponFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSimulateWeaponFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnStopFiring();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnStartFiring();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFire();
    
    UFUNCTION(BlueprintCallable)
    void PrefireDelayElapsed(bool bClientSimulation);
    
public:
    UFUNCTION(BlueprintCallable)
    float PlayWeaponUnEquipMontage(UAnimMontage* UnEquipMontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    float PlayWeaponThrowUnderhandMontage(UAnimMontage* ThrowUnderhandMontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    float PlayWeaponThrowOverhandMontage(UAnimMontage* ThrowOverhandMontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* PlayWeaponSound(const FPerspectiveSound& Sound);
    
    UFUNCTION(BlueprintCallable)
    float PlayWeaponPerspectiveAnimation(const FPerspectiveAnim& WeapAnim);
    
    UFUNCTION(BlueprintCallable)
    float PlayWeaponMontage(UAnimMontage* WeapMontage, bool bForceDisableAutoBlendOut);
    
    UFUNCTION(BlueprintCallable)
    float PlayWeaponFireMontage(UAnimMontage* FireMontageToPlay, bool bFireLast, bool bFireADS);
    
    UFUNCTION(BlueprintCallable)
    float PlayWeaponEquipMontage(UAnimMontage* EquipMontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    float PlayWeaponCockMontage(UAnimMontage* CockMontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    float PlayWeaponActionMontage(UAnimMontage* ActionMontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    float PlayThrowAnimations(bool bOverhandThrow, bool bDontPlayAndReturnDominantPlayLengthOnly);
    
    UFUNCTION(BlueprintCallable)
    float PlayCockAnimations(bool bDontPlayAndReturnDominantPlayLengthOnly);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionAnimations(bool bDontPlayAndReturnDominantPlayLengthOnly);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStopFiring();
    
    UFUNCTION(BlueprintCallable)
    void OnStartFiring();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireCounter(const FRepShotInfo& PreviousValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bPrefiring();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleFire();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetWeaponMeshToUse(bool bIgnoreLocalControlOnServer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetWeaponMesh1P() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetWeaponMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetMontageToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMontagePlayLengthToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequenceBase* GetAnimToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimPlayLengthToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair) const;
    
};

