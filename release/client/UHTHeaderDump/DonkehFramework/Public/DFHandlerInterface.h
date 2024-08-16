#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DFHandlerInterface.generated.h"

class APawn;

UINTERFACE(Blueprintable, MinimalAPI)
class UDFHandlerInterface : public UInterface {
    GENERATED_BODY()
};

class IDFHandlerInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventUpdate(float DeltaTime, bool bMakeDecision);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EventShouldUpdateThisFrame(float DeltaTime, bool bActiveAndSpawnedInWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventRespawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnNewPawn(APawn* NewPawn, APawn* PreviousPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInit();
    
};

