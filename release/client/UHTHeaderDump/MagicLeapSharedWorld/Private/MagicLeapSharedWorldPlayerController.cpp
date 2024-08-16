#include "MagicLeapSharedWorldPlayerController.h"

AMagicLeapSharedWorldPlayerController::AMagicLeapSharedWorldPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void AMagicLeapSharedWorldPlayerController::ServerSetLocalWorldData_Implementation(const FMagicLeapSharedWorldLocalData& LocalWorldReplicationData) {
}

void AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms_Implementation(const FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms) {
}

bool AMagicLeapSharedWorldPlayerController::IsChosenOne() const {
    return false;
}

void AMagicLeapSharedWorldPlayerController::ClientSetChosenOne_Implementation(bool bChosenOne) {
}

void AMagicLeapSharedWorldPlayerController::ClientMarkReadyForSendingLocalData_Implementation() {
}

bool AMagicLeapSharedWorldPlayerController::CanSendLocalDataToServer() const {
    return false;
}


