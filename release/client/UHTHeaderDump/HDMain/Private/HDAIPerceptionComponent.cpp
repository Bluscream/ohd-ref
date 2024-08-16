#include "HDAIPerceptionComponent.h"

UHDAIPerceptionComponent::UHDAIPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerPlayer = NULL;
    this->bEnableAdvancedLineTracing = true;
    this->ObserverSightRadius = 30000.00f;
    this->ObserverLoseSightRadius = 32000.00f;
    this->DistanceToObserverRangeFar = 6000.00f;
    this->DistanceToObserverRangeNear = 3000.00f;
    this->bComplexSightLineTrace = true;
    this->ShoulderLocationFactor = 0.30f;
    this->RangeFactorWeight = 1.00f;
    this->StanceFactorWeight = 0.00f;
    this->MovementFactorWeight = 0.00f;
    this->StanceFactorMaxValue = 1.00f;
    this->StanceFactorMinValue = 0.00f;
    this->OwnerMaxMovementSpeed = 600.00f;
    this->OwnerDefaultHalfHeight = 95.00f;
}

bool UHDAIPerceptionComponent::CanBeSeenFrom(const FVector& ObserverLocation, FVector& OutSeenLocation, int32& NumberOfLoSChecksPerformed, float& OutSightStrength, const AActor* IgnoreActor) const {
    return false;
}

float UHDAIPerceptionComponent::CalcSightStrength(const float Distance) const {
    return 0.0f;
}


