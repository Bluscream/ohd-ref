#pragma once
#include "CoreMinimal.h"
#include "HDAIBehaviorStateBase.h"
#include "HDAIBehState_SafeSpotting.generated.h"

class UHDAIBehState_BasicAASCombat;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDAIBehState_SafeSpotting : public UHDAIBehaviorStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSafespottingTimerStarted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SafespottingEndTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafespottingTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafespottingTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehState_BasicAASCombat* CombatState;
    
    UHDAIBehState_SafeSpotting();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleSafeSpotting();
    
};

