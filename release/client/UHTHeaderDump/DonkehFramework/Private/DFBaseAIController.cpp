#include "DFBaseAIController.h"

ADFBaseAIController::ADFBaseAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ADFBaseAIController::CanRestartPlayer_Implementation() {
    return false;
}


