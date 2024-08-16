#pragma once
#include "CoreMinimal.h"
#include "EEndPlayReason.h"
#include "WorldSubsystem.h"
#include "AutoDestroySubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class UAutoDestroySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToPoll;
    
public:
    UAutoDestroySubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

