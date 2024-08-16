#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=ESpecificItemType -FallbackName=ESpecificItemType
#include "CombatHandlerReceiveHitDamageSignatureDelegate.h"
#include "CombatHandlerReceiveSuppressionSignatureDelegate.h"
#include "CombatHandlerReloadSignatureDelegate.h"
#include "EHDAICombatTargetType.h"
#include "HDAIHandlerBase.h"
#include "HDAIItemData.h"
#include "HDAISpecificItemTypeAttackData.h"
#include "HDAISuppressionSource.h"
#include "HDAICombatHandler.generated.h"

class AActor;
class ADFBasePickup;
class ADFBaseProjectile;
class AHDBaseWeapon;
class UHDAIBehaviorHandler;
class UHDAIVocalHandler;
class UHDKit;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDAICombatHandler : public UHDAIHandlerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorHandler* BehaviorHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIVocalHandler* VocalHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Enemy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CombatTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CustomCombatTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHDAICombatTargetType CombatTargetLocationType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDoNotAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWeaponAutoReload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWeaponMovementFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWeaponHasAmmo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponNextFireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurstAttackProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstAttackNumberMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstAttackNumberMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentBurstAttackNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponStopFireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponStopFireTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponStopFireTimeMax;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWeaponInfiniteAmmo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWeaponInfiniteClipAmmo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreFriendlySuppression: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreFriendlyHits: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatHandlerReloadSignature OnReload;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatHandlerReceiveSuppressionSignature OnReceiveSuppression;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatHandlerReceiveHitDamageSignature OnReceiveHitDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHDAISuppressionSource> SuppressionSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumSuppressionSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionSourceTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionSourceUpdateRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionSourceUpdateTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHDKit* CurrentKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecificItemType CurrentSpecificItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHDAIItemData> EquipmentReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EquipmentHandlingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipmentHandlingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipmentHandlingRateVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpecialtyItemInUse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProjectileWeaponInUse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AfterEquipCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecialtyItemUseTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AfterSpecialtyItemUsedTimeLimit;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpecificItemType, FHDAISpecificItemTypeAttackData> ItemAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHDAISpecificItemTypeAttackData DefaultItemAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeLauncherRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeLauncherRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeLauncherChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RocketLauncherRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RocketLauncherRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RocketLauncherChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FragGrenadeRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FragGrenadeRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FragGrenadeChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmokeGrenadeRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmokeGrenadeChance;
    
    UHDAICombatHandler();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSuppressionSources();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateEquipmentHandling();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAttackParameters();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopUsingSpecialtyItem();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopAttack();
    
    UFUNCTION(BlueprintCallable)
    void StartAttack();
    
    UFUNCTION(BlueprintCallable)
    void SetupEquipmentReferences();
    
    UFUNCTION(BlueprintCallable)
    void SetNextAttackTime();
    
    UFUNCTION(BlueprintCallable)
    void SetItemAttackParameters(const FHDAISpecificItemTypeAttackData& InAttackData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemy(AActor* NewEnemy);
    
    UFUNCTION(BlueprintCallable)
    void Reload(AHDBaseWeapon* InWeapon);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveSuppression(ADFBaseProjectile* OtherProjectile, ADFBasePickup* Pickup);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveHitDamage(ADFBaseProjectile* OtherProjectile, ADFBasePickup* Pickup);
    
    UFUNCTION(BlueprintCallable)
    void PauseAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidEnemy(bool bAliveCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidCustomCombatTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidCombatTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAmmoLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetOldestSuppressionSource();
    
    UFUNCTION(BlueprintCallable)
    FVector GetMostRelevantSuppressionSource();
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomCombatTargetLocation();
    
    UFUNCTION(BlueprintCallable)
    void ClearCombatTargetLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttackEnemy(bool bCheckFireTime, bool bIgnoreAmmoReloadCheck) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddSuppressionSource(FHDAISuppressionSource InSuppressionSource);
    
};

