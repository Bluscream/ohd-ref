#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "HDAIHandlerBase.h"
#include "Templates/SubclassOf.h"
#include "HDAIBehaviorHandler.generated.h"

class AActor;
class AController;
class APawn;
class UHDAIAimingHandler;
class UHDAIBehaviorStateBase;
class UHDAICaptureHandler;
class UHDAICombatHandler;
class UHDAIGroupBehaviorHandler;
class UHDAINavigationHandler;
class UHDAIVocalHandler;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDAIBehaviorHandler : public UHDAIHandlerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAINavigationHandler* NavigationHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAICombatHandler* CombatHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIAimingHandler* AimingHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIVocalHandler* VocalHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAICaptureHandler* CaptureHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIGroupBehaviorHandler* GroupHandler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionThreatLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionLevelPerShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionThreatThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionFalloff;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SuppressionTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionFallingOffDelay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeingHitThreatLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeingHitThreatThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeingHitFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeingHitThreatLevelSpikeProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeingHitThreatLevelSpikeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeingHitFallingOffDelay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BeingHitTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorStateBase* CurrentBehaviorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHDAIBehaviorStateBase> DefaultBehaviorStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToStartCombatState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsInCombat: 1;
    
public:
    UHDAIBehaviorHandler();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentBehaviorState(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartMoveToObjectiveBehaviorState();
    
    UFUNCTION(BlueprintCallable)
    void StartCombatRepositioning(FVector InMoveTarget);
    
    UFUNCTION(BlueprintCallable)
    void StartCombatBehaviorState(FVector InCombatTarget, FVector InNavigationAnchor);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveSuppression();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveHitDamage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(APawn* VictimPawn, AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void HandleBehaviorStates(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUnderSuppression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBeingHit() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExitCurrentBehaviorState();
    
    UFUNCTION(BlueprintCallable)
    void EnterCurrentBehaviorState();
    
    UFUNCTION(BlueprintCallable)
    void CalcThreatLevels();
    
};

