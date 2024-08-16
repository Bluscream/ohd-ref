#pragma once
#include "CoreMinimal.h"
#include "HDAIBehaviorStateBase.h"
#include "HDAIBehState_BasicAASCapture.generated.h"

class UHDAICaptureHandler;
class UHDAIGroupBehaviorHandler;
class UHDAINavigationHandler;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDAIBehState_BasicAASCapture : public UHDAIBehaviorStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAINavigationHandler* NavigationHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAICaptureHandler* CaptureHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIGroupBehaviorHandler* GroupHandler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SprintTimeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintStaminaThresholdMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintStaminaThresholdMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SprintStaminaThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintStaminaMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintLookAroundTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintLookAroundTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SprintLookAroundTimeEnd;
    
public:
    UHDAIBehState_BasicAASCapture();

protected:
    UFUNCTION(BlueprintCallable)
    void StopSprinting();
    
    UFUNCTION(BlueprintCallable)
    void StartSprinting();
    
    UFUNCTION(BlueprintCallable)
    void StartCapturingTheObjective();
    
    UFUNCTION(BlueprintCallable)
    void PatrolAtObjective();
    
    UFUNCTION(BlueprintCallable)
    void LoneWolfDecisionMaking();
    
    UFUNCTION(BlueprintCallable)
    void HandleSprinting();
    
    UFUNCTION(BlueprintCallable)
    void GroupMemberDecisionMaking();
    
    UFUNCTION(BlueprintCallable)
    void GroupLeaderDecisionMaking();
    
    UFUNCTION(BlueprintCallable)
    void AdvanceToObjective();
    
};

