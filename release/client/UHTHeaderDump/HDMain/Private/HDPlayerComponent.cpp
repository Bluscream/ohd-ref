#include "HDPlayerComponent.h"

UHDPlayerComponent::UHDPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartLoadout = NULL;
}

void UHDPlayerComponent::SwitchTeam() {
}

void UHDPlayerComponent::RestartPlayerAtStartSpot(AActor* DesiredStartSpot, UDFLoadout* DesiredStartLoadout) {
}

void UHDPlayerComponent::PickTeam(const EHDTeam DesiredTeam) {
}


