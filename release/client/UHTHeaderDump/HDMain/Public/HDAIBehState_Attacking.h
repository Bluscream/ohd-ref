#pragma once
#include "CoreMinimal.h"
#include "HDAIBehaviorStateBase.h"
#include "HDAIBehState_Attacking.generated.h"

class UHDAIBehState_BasicAASCombat;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDAIBehState_Attacking : public UHDAIBehaviorStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAttackingTimerStarted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AttackingEndTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackingTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackingTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehState_BasicAASCombat* CombatState;
    
    UHDAIBehState_Attacking();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleAttacking();
    
};

