#include "MagicLeapSharedWorldGameMode.h"
#include "MagicLeapSharedWorldGameState.h"
#include "MagicLeapSharedWorldPlayerController.h"

AMagicLeapSharedWorldGameMode::AMagicLeapSharedWorldGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AMagicLeapSharedWorldGameState::StaticClass();
    this->PlayerControllerClass = AMagicLeapSharedWorldPlayerController::StaticClass();
    this->PinSelectionConfidenceThreshold = 0.89f;
    this->ChosenOne = NULL;
}

bool AMagicLeapSharedWorldGameMode::SendSharedWorldDataToClients() {
    return false;
}

void AMagicLeapSharedWorldGameMode::SelectChosenOne_Implementation() {
}

void AMagicLeapSharedWorldGameMode::DetermineSharedWorldData_Implementation(FMagicLeapSharedWorldSharedData& NewSharedWorldData) {
}


