#include "DFPOIWidget.h"

UDFPOIWidget::UDFPOIWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->POIActor = NULL;
    this->bSelected = false;
    this->IconSlot = NULL;
}

void UDFPOIWidget::UpdateRotation() {
}

void UDFPOIWidget::UpdatePosition() {
}

void UDFPOIWidget::SetPOISelectionState(const bool bNewSelected) {
}

void UDFPOIWidget::SelectPOI() {
}






void UDFPOIWidget::OnPOIActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UDFPOIWidget::OnOwningMapDirty() {
}

bool UDFPOIWidget::IsSelectable() const {
    return false;
}

bool UDFPOIWidget::IsPOIActorValid() const {
    return false;
}

bool UDFPOIWidget::IsInitialized() const {
    return false;
}

bool UDFPOIWidget::IsDynamic() const {
    return false;
}

void UDFPOIWidget::InitPOI(UDFMinimap* OwningMapWidget, AActor* ActorToTrack, FMinimapPOITableRow& ActorPOIData) {
}

bool UDFPOIWidget::HasFixedRotation() const {
    return false;
}

FSlateBrush UDFPOIWidget::GetDefaultIconBrush() const {
    return FSlateBrush{};
}

void UDFPOIWidget::DeselectPOI() {
}

bool UDFPOIWidget::CanSelect() const {
    return false;
}


