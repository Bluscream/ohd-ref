#include "DFPOIComponent.h"

UDFPOIComponent::UDFPOIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoRegisterPOI = true;
}

void UDFPOIComponent::UnregisterPOI() {
}

void UDFPOIComponent::RegisterPOI(UDFMinimap* MinimapWidget) {
}

void UDFPOIComponent::OnMinimapLateInit(UDFMinimap* NewMinimap) {
}

bool UDFPOIComponent::IsPOIRegistered() const {
    return false;
}

UDFPOIWidget* UDFPOIComponent::GetPOIWidget() const {
    return NULL;
}

UDFMinimap* UDFPOIComponent::GetMinimap() const {
    return NULL;
}


