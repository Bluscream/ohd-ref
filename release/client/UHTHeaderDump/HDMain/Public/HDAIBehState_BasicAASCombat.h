#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HDAIBehaviorStateBase.h"
#include "Templates/SubclassOf.h"
#include "HDAIBehState_BasicAASCombat.generated.h"

class UHDAIBehaviorDecisionBase;
class UHDAIBehaviorHandler;
class UHDAICombatHandler;
class UHDAIGroupBehaviorHandler;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDAIBehState_BasicAASCombat : public UHDAIBehaviorStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAICombatHandler* CombatHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorHandler* BehaviorHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIGroupBehaviorHandler* GroupHandler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector AttackSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SafeSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSafeSpotIsOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCurrentLocationIsSafe: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenAttackAndSafeSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitCombatStateTimerMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitCombatStateTimerMax;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeToExitCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorStateBase* FindAttackSpotState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorStateBase* FindSafeSpotState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorStateBase* AttackingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorStateBase* SafespottingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorStateBase* RepositionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHDAIBehaviorStateBase> FindSafeSpotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHDAIBehaviorStateBase> FindAttackSpotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHDAIBehaviorStateBase> AttackingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHDAIBehaviorStateBase> SafespottingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHDAIBehaviorStateBase> RepositionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHDAIBehaviorDecisionBase*> CombatRepositioningDecisions;
    
public:
    UHDAIBehState_BasicAASCombat();

    UFUNCTION(BlueprintCallable)
    void StartSafespotting();
    
    UFUNCTION(BlueprintCallable)
    void StartCombatRepositioning(FVector InMoveTarget);
    
    UFUNCTION(BlueprintCallable)
    void StartAttacking();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ProcessCombatLocations();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsValidSafeSpot(const FVector& InSafeSpot);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidAttackSpot(const FVector& InAttackSpot);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool HandleExitCombatStateTimer();
    
    UFUNCTION(BlueprintCallable)
    void HandleCombatRepositioning();
    
public:
    UFUNCTION(BlueprintCallable)
    void FindSafeSpot();
    
    UFUNCTION(BlueprintCallable)
    void FindAttackSpot();
    
};

