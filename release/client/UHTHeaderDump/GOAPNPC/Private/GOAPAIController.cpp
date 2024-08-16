#include "GOAPAIController.h"
#include "GOAPComponent.h"

AGOAPAIController::AGOAPAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GOAPComponent = CreateDefaultSubobject<UGOAPComponent>(TEXT("GOAPComponent"));
}


