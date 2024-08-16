#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AimingHandlerContactSignatureDelegate.h"
#include "HDAIHandlerBase.h"
#include "Templates/SubclassOf.h"
#include "HDAIAimingHandler.generated.h"

class AActor;
class UAIPerceptionComponent;
class UAISense;
class UHDAIBehaviorHandler;
class UHDAICombatHandler;
class UHDAINavigationHandler;
class UHDAIVocalHandler;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDAIAimingHandler : public UHDAIHandlerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAICombatHandler* CombatHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAINavigationHandler* NavigationHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorHandler* BehaviorHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIVocalHandler* VocalHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* PerceptionComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AimingTargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CurrentTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentTargetStimulusStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentTargetStimulusAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RefreshTargetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefreshTargetRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewTargetStimulusStrengthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingAtTargetAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAimingAtTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingSpeedNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingSpeedFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingSpeedAngleNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingSpeedAngleFar;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DefaultRotationRate;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAimingHandlerContactSignature OnContactStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponAimingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponMinConeOfFireAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponMaxConeOfFireAngleDegrees;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnableNoEnemyLookAround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector NoEnemyFocalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NextFocalPointTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextFocalPointIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextFocalPointIntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextFocalPointAngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextFocalPointAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextFocalPointDistanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextFocalPointDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ProjectileAimingTossVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProjectileAimingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileAimingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileAimingRateVariation;
    
public:
    UHDAIAimingHandler();

protected:
    UFUNCTION(BlueprintCallable)
    bool SuggestProjectileVelocity(FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float TossSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldChangeNoEnemyFocalPoint();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnableNoEnemyLookAround(bool bInEnableNoEnemyLookAround);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MakeNoEnemyFocalPoint();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCandidateTarget(const AActor* ActorToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAimingAtTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidCustomAimingTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNoEnemyFocalPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsNewTargetMoreRelevant(float OldTargetStrength, float NewTargetStrength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableNoEnemyLookAround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorStimulusData(const AActor* InActor, FVector& OutLocation, float& OutStrength, float& OutAge) const;
    
    UFUNCTION(BlueprintCallable)
    void EstablishNewTargetFromPerception(const TSubclassOf<UAISense>& SenseToUse);
    
    UFUNCTION(BlueprintCallable)
    bool CheckForTarget(AActor* TargetActor, FAIStimulus Stimulus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CalcAimingDirection();
    
    UFUNCTION(BlueprintCallable)
    void AimAtCurrentTarget();
    
};

