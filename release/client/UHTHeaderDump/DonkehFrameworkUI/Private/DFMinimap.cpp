#include "DFMinimap.h"
#include "Templates/SubclassOf.h"

UDFMinimap::UDFMinimap() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentZoom = 0.00f;
    this->MaxZoom = 0.00f;
    this->MapLength = 0.00f;
    this->POIDataTable = NULL;
    this->OuterCanvas = NULL;
    this->MapCanvas = NULL;
    this->MapImg = NULL;
}

void UDFMinimap::UpdateZoomValue(const float NewZoomValue) {
}

void UDFMinimap::UpdateMapPos(const FVector2D& NewMapPos) {
}

void UDFMinimap::SetMapDirty() {
}

bool UDFMinimap::RemovePOIByActorClass(const TSubclassOf<AActor>& POIActorClass) {
    return false;
}

bool UDFMinimap::RemovePOIByActor(const AActor* POIActorToRemove) {
    return false;
}

bool UDFMinimap::RemovePOIAt(int32 Index) {
    return false;
}

bool UDFMinimap::RemovePOI(UDFPOIWidget* POIToRemove) {
    return false;
}


bool UDFMinimap::ProjectWorldLocationToMap(FVector WorldLocation, FVector2D& MapLocation) const {
    return false;
}

void UDFMinimap::OnPOISelectionStateChanged(UDFPOIWidget* POI, bool bSelected) {
}

bool UDFMinimap::HasPOI(UDFPOIWidget* POI) const {
    return false;
}

bool UDFMinimap::HasAnyPOIs() const {
    return false;
}

int32 UDFMinimap::GetPOIIndex(UDFPOIWidget* POI) const {
    return 0;
}

int32 UDFMinimap::GetPOICount() const {
    return 0;
}

UDFPOIWidget* UDFMinimap::GetPOIAt(int32 Index) const {
    return NULL;
}

FVector2D UDFMinimap::GetMapSizeLocal() const {
    return FVector2D{};
}

FVector2D UDFMinimap::GetMapSizeAbsolute() const {
    return FVector2D{};
}

bool UDFMinimap::FindPOIByActor(const AActor* POIActor, UDFPOIWidget*& OutFoundPOI) {
    return false;
}

bool UDFMinimap::DeprojectMapLocationToWorld(FVector2D MapLocation, FVector& WorldLocation) const {
    return false;
}

bool UDFMinimap::ConvertMapLocationToLocalWidgetLocation(FVector2D MapLocation, FVector2D& WidgetLocation) const {
    return false;
}

int32 UDFMinimap::ClearPOIs() {
    return 0;
}

UDFPOIWidget* UDFMinimap::AddNewPOI(AActor* POIActor) {
    return NULL;
}


