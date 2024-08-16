#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HDAIBehaviorStateBase.h"
#include "Templates/SubclassOf.h"
#include "HDAIBehState_BasicAAS.generated.h"

class UHDAIBehaviorHandler;
class UHDAICaptureHandler;
class UHDAICombatHandler;
class UHDAIGroupBehaviorHandler;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDAIBehState_BasicAAS : public UHDAIBehaviorStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAICombatHandler* CombatHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorHandler* BehaviorHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIGroupBehaviorHandler* GroupHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAICaptureHandler* CaptureHandler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorStateBase* CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorStateBase* CaptureState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorStateBase* IdleState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHDAIBehaviorStateBase> CombatStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHDAIBehaviorStateBase> CaptureStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHDAIBehaviorStateBase> IdleStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToStartCombatState;
    
    UHDAIBehState_BasicAAS();

    UFUNCTION(BlueprintCallable)
    void StartCombatState(FVector InCombatTarget, FVector InNavigationAnchor);
    
    UFUNCTION(BlueprintCallable)
    void StartCombatRepositioning(FVector InMoveTarget);
    
    UFUNCTION(BlueprintCallable)
    void StartCaptureState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectBehaviorState();
    
};

