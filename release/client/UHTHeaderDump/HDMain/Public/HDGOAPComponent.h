#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
//CROSS-MODULE INCLUDE V2: -ModuleName=GOAPNPC -ObjectName=GOAPComponent -FallbackName=GOAPComponent
#include "Templates/SubclassOf.h"
#include "HDGOAPComponent.generated.h"

class AActor;
class AHDAIController;
class AHDPlayerCharacter;
class UHDAIAimingHandler;
class UHDAIBehaviorHandler;
class UHDAICaptureHandler;
class UHDAICombatHandler;
class UHDAIGroupBehaviorHandler;
class UHDAIHandlerBase;
class UHDAINavigationHandler;
class UHDAIVocalHandler;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HDMAIN_API UHDGOAPComponent : public UGOAPComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDAIController* HDAIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDPlayerCharacter* HDAICharOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHDAIHandlerBase*> AIHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UHDAINavigationHandler* NavigationHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UHDAICaptureHandler* CaptureHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UHDAICombatHandler* CombatHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UHDAIBehaviorHandler* BehaviorHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UHDAIGroupBehaviorHandler* GroupBehaviorHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UHDAIAimingHandler* AimingHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UHDAIVocalHandler* VocalHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecisionFrequency;
    
public:
    UHDGOAPComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetPlanningTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAIActiveInWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAIActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHDAIHandlerBase* GetAIHandler(TSubclassOf<UHDAIHandlerBase> HandlerClass) const;
    
};

