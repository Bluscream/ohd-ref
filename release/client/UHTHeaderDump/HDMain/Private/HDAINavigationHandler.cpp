#include "HDAINavigationHandler.h"

UHDAINavigationHandler::UHDAINavigationHandler() {
    this->NavSystem = NULL;
    this->bMoving = false;
    this->AcceptanceRadius = 30.00f;
    this->bIgnoreZeroVectorGoto = false;
    this->MasterNavPathLength = 0.00f;
    this->TargetNavPointIndex = -1;
    this->RemainingNavPathLength = 0.00f;
    this->bPawnIsAtTheEndOfPath = false;
    this->NavPathSegmentLengthMin = 3000.00f;
    this->NavPathSegmentLengthMax = 5000.00f;
    this->bCompensatePartialPathForGroupFormationRadius = true;
    this->PartialPathGroupRadiusMultiplier = 0.71f;
    this->NavigationAnchorRandomRange = 250.00f;
    this->MoveToFailedTime = 0.00f;
    this->MoveToFailedTimeDelay = 1.00f;
    this->MoveToFailedRandomizationRadiusBase = 150.00f;
    this->MoveToFailedRandomizationRadiusIncrement = 100.00f;
    this->MaxMoveToFailedRandomizationRadius = 1000.00f;
    this->MoveToFailedAttemptNumber = 0;
    this->MoveToFailedAttemptResetTimer = 10.00f;
    this->bMoveToFailedIsBeingHandled = false;
    this->SavedCapturePoint = NULL;
    this->StuckCheckTime = 0.00f;
    this->StuckCheckInterval = 0.20f;
    this->StuckCheckDistance = 20.00f;
    this->bEnableRVOAvoidance = true;
    this->RVOAvoidanceConsiderationRadius = 200.00f;
    this->RVOAvoidanceWeight = 0.50f;
}

void UHDAINavigationHandler::SetupRVOAvoidance() {
}

void UHDAINavigationHandler::SetDesiredLocation(const FVector& InDesiredLocation) {
}

bool UHDAINavigationHandler::PointsAreEqualXY(const FVector& Vector1, const FVector& Vector2, float Tolerance) {
    return false;
}

void UHDAINavigationHandler::OnMoveToFailed() {
}

void UHDAINavigationHandler::MoveToLocationFailed() {
}

bool UHDAINavigationHandler::MakePathToDesiredLocation() {
    return false;
}

bool UHDAINavigationHandler::MakeNewMasterNavPath(FVector InStart, FVector InDestination) {
    return false;
}

void UHDAINavigationHandler::MakeNavPathSegment() {
}

bool UHDAINavigationHandler::IsPawnAtDestination() const {
    return false;
}

bool UHDAINavigationHandler::IsNavigationPossible() const {
    return false;
}

bool UHDAINavigationHandler::IsNavDataValidForAllControlPoints() const {
    return false;
}

bool UHDAINavigationHandler::IsMoving() const {
    return false;
}

void UHDAINavigationHandler::HandleMoveToFailed() {
}

void UHDAINavigationHandler::GotoLocationRandomized(const FVector& InLocation, float InRandomizationRadius) {
}

void UHDAINavigationHandler::GotoLocation(const FVector& InLocation) {
}

void UHDAINavigationHandler::FixVectorValuesNaN(FVector& InVector, bool bRandomize) const {
}

bool UHDAINavigationHandler::FindNavLocationInsideControlPoint(AHDBaseCapturePoint* CP, FVector& OutNavLoc) const {
    return false;
}

bool UHDAINavigationHandler::CheckPawnStuckStatus() {
    return false;
}


