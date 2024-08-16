#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "GOAPAIController.generated.h"

class UGOAPComponent;

UCLASS(Blueprintable)
class GOAPNPC_API AGOAPAIController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGOAPComponent* GOAPComponent;
    
public:
    AGOAPAIController(const FObjectInitializer& ObjectInitializer);

};

