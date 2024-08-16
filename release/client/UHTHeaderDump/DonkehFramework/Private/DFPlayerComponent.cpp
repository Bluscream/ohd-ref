#include "DFPlayerComponent.h"

UDFPlayerComponent::UDFPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControllerOwner = NULL;
    this->bWantsToRestart = false;
}

void UDFPlayerComponent::RestartPlayer() {
}





bool UDFPlayerComponent::IsPendingRestart() const {
    return false;
}

ADFTeamState* UDFPlayerComponent::GetTeamState() const {
    return NULL;
}

APlayerState* UDFPlayerComponent::GetPlayerState() const {
    return NULL;
}

APawn* UDFPlayerComponent::GetPawnOwner() const {
    return NULL;
}

float UDFPlayerComponent::GetMinRestartDelay() {
    return 0.0f;
}

bool UDFPlayerComponent::CanRestartPlayer() {
    return false;
}


