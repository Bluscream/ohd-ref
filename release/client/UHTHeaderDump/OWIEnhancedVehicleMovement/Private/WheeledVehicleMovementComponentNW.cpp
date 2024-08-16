#include "WheeledVehicleMovementComponentNW.h"

UWheeledVehicleMovementComponentNW::UWheeledVehicleMovementComponentNW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WheelSetups.AddDefaulted(4);
    this->DifferentialSetup.AddDefaulted(4);
}


