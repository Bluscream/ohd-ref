#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "DFTeamAgentInterface.h"
#include "DFBaseAIController.generated.h"

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBaseAIController : public AAIController, public IDFTeamAgentInterface {
    GENERATED_BODY()
public:
    ADFBaseAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanRestartPlayer();
    

    // Fix for true pure virtual functions not being implemented
};

