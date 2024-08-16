#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HDAIBehaviorStateBase.generated.h"

class AHDAIController;
class UHDAIBehaviorStateBase;
class UHDGOAPComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDAIBehaviorStateBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDAIController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHDGOAPComponent* GOAPComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanEverTick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StateUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorStateBase* CurrentSubState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorStateBase* CurrentParentState;
    
public:
    UHDAIBehaviorStateBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateState(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool UpdateCurrentSubState(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SwitchToSubState(UHDAIBehaviorStateBase* InNewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetUpdateTimer(float InTimerInterval);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init(AHDAIController* InController, UHDGOAPComponent* InGOAPComponent, UHDAIBehaviorStateBase* InParentState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitState();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ExitCurrentSubState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUpdateState(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanExitState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanEnterState();
    
};

