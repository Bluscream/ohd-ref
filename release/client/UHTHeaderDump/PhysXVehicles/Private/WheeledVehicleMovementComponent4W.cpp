#include "WheeledVehicleMovementComponent4W.h"

UWheeledVehicleMovementComponent4W::UWheeledVehicleMovementComponent4W(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WheelSetups.AddDefaulted(4);
    this->AckermannAccuracy = 1.00f;
}


