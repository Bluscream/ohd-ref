#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "DFBaseWeapon.h"
#include "EAmmoClipReloadBehavior.h"
#include "EFireMode.h"
#include "EGunReloadState.h"
#include "GunFireModeSignatureDelegate.h"
#include "GunReloadSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "DFBaseGun.generated.h"

class ADFBaseAmmoClip;
class UAnimMontage;
class UDFGunRecoilHandler;
class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class DONKEHFRAMEWORK_API ADFBaseGun : public ADFBaseWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGunFireModeSignature OnFireModeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimerIntervalAdjustment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAutomaticWeaponCatchup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotsPerBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SupportedFireModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedFireMode, meta=(AllowPrivateAccess=true))
    EFireMode SelectedFireMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDFGunRecoilHandler* RecoilHandler;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGunReloadSignature OnReloadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGunReloadSignature OnReloadFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PendingReloadState, meta=(AllowPrivateAccess=true))
    EGunReloadState PendingReloadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EGunReloadState PreviousReloadState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bKeepLoadedAmmoOnLeaveInventory: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesAmmo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExhaustible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanSprintWhileReloading: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReloadOnEquip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInstantReloadOnEquip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInstantReloadOnInitialEquip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInstantReloadOnInitialEnterInventory: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReloadOnDryFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReloadOnStopFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSimulateGunReloadOnDedicatedServer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAmmoClipReloadBehavior AmmoClipReloadBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<ADFBaseAmmoClip>> SupportedAmmoClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingAmmoClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDispensedStartingAmmoClips: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentAmmoClip, meta=(AllowPrivateAccess=true))
    ADFBaseAmmoClip* CurrentAmmoClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentAmmoClipInvIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADFBaseAmmoClip* PreviousAmmoClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentAmmoInClipBeforeReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalAvailableAmmoBeforeReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReloadCycleIterations;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInfiniteClipAmmo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInfiniteAmmo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoRecoil: 1;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference CustomMuzzleAttachComponentToUse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MuzzleAttachComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MuzzleAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MuzzleLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MuzzleRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLoopedMuzzleFX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MuzzlePSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShellEjectAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ShellEjectFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShellEjectLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ShellEjectRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLoopedShellEjectFX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayShellEjectFXOnFireLast: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShellEjectDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ShellEjectPSC;
    
public:
    ADFBaseGun(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnloadCurrentAmmoClip();
    
    UFUNCTION(BlueprintCallable)
    void StopSimulatingGunReload();
    
    UFUNCTION(BlueprintCallable)
    void StartReload(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void SimulateGunReload();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseRecoil() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSimulateGunReload() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetReloadState(EGunReloadState NewReloadState);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetFireModeBP(EFireMode NewFireMode);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetFireMode(EFireMode NewFireMode, bool bFromPlayerInput, bool bForce);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartReload();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetFireMode(EFireMode NewFireMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveReloadStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveReloadFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFireModeChanged(EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAmmoExhausted();
    
public:
    UFUNCTION(BlueprintCallable)
    float PlayWeaponStartReloadMontage(UAnimMontage* StartReloadMontageToPlay, bool bDryReload);
    
    UFUNCTION(BlueprintCallable)
    float PlayWeaponReloadMontage(bool bDryReload);
    
    UFUNCTION(BlueprintCallable)
    float PlayWeaponEndReloadMontage(UAnimMontage* EndReloadMontageToPlay, bool bDryReload);
    
    UFUNCTION(BlueprintCallable)
    float PlayReloadTransitionAnimations(bool bStartReload, bool bDontPlayAndReturnDominantPlayLengthOnly);
    
    UFUNCTION(BlueprintCallable)
    float PlayReloadAnimations(bool bDryReload, bool bDontPlayAndReturnDominantPlayLengthOnly);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedFireMode(EFireMode PrevSelectedFireMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PendingReloadState(EGunReloadState PrevReloadState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentAmmoClip(ADFBaseAmmoClip* PrevAmmoClip);
    
    UFUNCTION(BlueprintCallable)
    void OnReload(bool bClientSimulation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LoadPreviousAmmoClip();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LoadNextAmmoClip();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LoadAmmoClip(ADFBaseAmmoClip* ClipToLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDryReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasExhaustedAllAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAmmoClip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalAmmo(bool bIncludeLoadedMags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSupportedFireModes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetShellEjectAttachPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFireMode GetSelectedFireMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGunReloadState GetReloadState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGunReloadState GetPreviousReloadState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPostReloadClipAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumFreeAmmoClips(bool bIncludeEmptyMags, bool bIncludeCurrentMag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMuzzleLocation(bool bIgnoreLocalControlOnServer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMuzzleDirection(bool bIgnoreLocalControlOnServer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMuzzleAttachPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetMuzzleAttachComponent(bool bIgnoreLocalControlOnServer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClipAmmo() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRejectFiredShot(int32 ShotID, ADFBaseAmmoClip* ShotAmmoClip, int32 ServerClipAmmo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReload() const;
    
};

