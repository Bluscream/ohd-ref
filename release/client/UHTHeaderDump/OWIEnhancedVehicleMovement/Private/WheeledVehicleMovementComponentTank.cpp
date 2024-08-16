#include "WheeledVehicleMovementComponentTank.h"

UWheeledVehicleMovementComponentTank::UWheeledVehicleMovementComponentTank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WheelSetups.AddDefaulted(4);
    this->RawBothTracksThrottleInput = 0.00f;
    this->RawLeftTrackThrottleInput = 0.00f;
    this->RawRightTrackThrottleInput = 0.00f;
    this->BothTracksThrottleInput = 0.00f;
    this->LeftTrackThrottleInput = 0.00f;
    this->RightTrackThrottleInput = 0.00f;
    this->LeftTrackSpeed = 0.00f;
    this->RightTrackSpeed = 0.00f;
}

void UWheeledVehicleMovementComponentTank::SetRightTrackThrottleInput(float InThrottle) {
}

void UWheeledVehicleMovementComponentTank::SetLeftTrackThrottleInput(float InThrottle) {
}

void UWheeledVehicleMovementComponentTank::SetBothTracksThrottleInput(float InThrottle) {
}

float UWheeledVehicleMovementComponentTank::GetRightTrackSpeed() const {
    return 0.0f;
}

float UWheeledVehicleMovementComponentTank::GetLeftTrackSpeed() const {
    return 0.0f;
}


