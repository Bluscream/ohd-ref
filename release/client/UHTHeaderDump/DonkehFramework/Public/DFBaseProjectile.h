#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "CSHitInfo.h"
#include "DFDamageParams.h"
#include "ProjectileProcessHitSignatureDelegate.h"
#include "ProjectileTriggerPayloadSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "DFBaseProjectile.generated.h"

class AController;
class ADFBaseImpactEffect;
class ADFBaseProjectile;
class ADFBaseWeapon;
class UDamageType;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBaseProjectile : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADFBaseImpactEffect> ProjectileImpactFXClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ShotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastLoc;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnImpactFXOnHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysShootable: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreInstigator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreInstigatorOnPayloadActivation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* InstigatingController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDebug: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileProcessHitSignature OnProcessValidHit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreInstigatorHitEventsOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bProcessedAHit: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClientSideHitDetectionEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClientSideHitDamageEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNotifyOfPredictedProjectileHits: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyNotifyOfPredictedProjectileHits: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCSHitInfo PendingHitInfo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ImpactedActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyDamageOnImpact: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyDamageOnBounceImpact: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyDamageToInstigator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDFDamageParams BaseDamageParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> WeaponDamageTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RadialDamageOriginOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> RadialDamagePreventionChannel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWantsToUseClientSidePrediction: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReconcilePredictedProjWithServerProj: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPredictedClientProjectile: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADFBaseProjectile* MyPredictedClientProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADFBaseProjectile* ServerAuthoritativeProjectile;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileTriggerPayloadSignature OnTriggerPayload;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPayloadTriggered: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerPayloadWhenStopped: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTearOffOnPayloadActivation: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableOnPayloadActivation: 1;
    
public:
    ADFBaseProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerPayload(const FHitResult& ImpactHitResult, bool bFromTearOff);
    
    UFUNCTION(BlueprintCallable)
    void SpawnImpactFX(const FHitResult& Impact);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectileUpdatedComponent(USceneComponent* NewProjectileUpdatedComponent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePayloadActivated(const FHitResult& ImpactHitResult);
    
    UFUNCTION(BlueprintCallable)
    void ProjectileStop(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable)
    void ProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_ShouldIgnoreHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_PostProcessValidHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, const FVector& HitLocation, const FVector& HitNormal, const FHitResult& HitResult, bool bFromCSHitNotify);
    
public:
    UFUNCTION(BlueprintCallable)
    void IgnoreInstigatorWhenMoving(bool bShouldIgnore, bool bBidirectional);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidPredictedClientProjectile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetProjectileUpdatedPrimitive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetProjectileUpdatedComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFBaseWeapon* GetOwningWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ADFBaseImpactEffect> GetImpactFXClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDFDamageParams GetAdjustedDamageParams(AActor* OtherActor, const FVector& HitLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableAndDeferDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ApplyDamageToImpactedActor(AActor* OtherActor, UPrimitiveComponent* OtherComp, const FVector& HitLocation, const FVector& HitNormal, const FHitResult& HitResult);
    
};

