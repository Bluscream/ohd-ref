#include "HDAICaptureHandler.h"

UHDAICaptureHandler::UHDAICaptureHandler() {
    this->CurrentCP = NULL;
    this->CurrentCaptureMode = EHDAICaptureMode::None;
    this->AICaptureModePreference = 0.00f;
    this->TotalNumberOfCapturePoints = -1;
}

bool UHDAICaptureHandler::ShouldEstablishNewControlPoint() const {
    return false;
}

void UHDAICaptureHandler::SetCurrentCP(AHDBaseCapturePoint* InCurrentCP) {
}

void UHDAICaptureHandler::SetCurrentCaptureMode(EHDAICaptureMode NewCaptureMode) {
}

int32 UHDAICaptureHandler::GetTotalNumberOfCapturePoints() {
    return 0;
}

AActor* UHDAICaptureHandler::GetStartSpotClosestToControlPoint(AActor* InCapturePoint) const {
    return NULL;
}

FVector UHDAICaptureHandler::GetCurrentCPLocation() {
    return FVector{};
}

bool UHDAICaptureHandler::FindControlPointToCapture(AHDBaseCapturePoint*& OutFoundCP) const {
    return false;
}

AHDBaseCapturePoint* UHDAICaptureHandler::FindControlPointRandom(const TArray<AHDBaseCapturePoint*>& CPs) const {
    return NULL;
}

AHDBaseCapturePoint* UHDAICaptureHandler::FindControlPointClosestToPawn(const TArray<AHDBaseCapturePoint*>& CPs) const {
    return NULL;
}

TArray<AHDBaseCapturePoint*> UHDAICaptureHandler::FindAvailableControlPointsOfTypeV3(EHDAICaptureMode InCaptureMode) const {
    return TArray<AHDBaseCapturePoint*>();
}

TArray<AHDBaseCapturePoint*> UHDAICaptureHandler::FindAvailableControlPointsOfTypeV2(EHDAICaptureMode InCaptureMode) const {
    return TArray<AHDBaseCapturePoint*>();
}

TArray<AHDBaseCapturePoint*> UHDAICaptureHandler::FindAvailableControlPointsOfTypeV1(EHDAICaptureMode InCaptureMode) const {
    return TArray<AHDBaseCapturePoint*>();
}

TArray<AHDBaseCapturePoint*> UHDAICaptureHandler::FindAvailableControlPointsOfType(EHDAICaptureMode InCaptureMode) const {
    return TArray<AHDBaseCapturePoint*>();
}

bool UHDAICaptureHandler::EstablishNewControlPoint() {
    return false;
}


