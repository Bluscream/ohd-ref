#include "ArcVehicleTurretMovementComp.h"

UArcVehicleTurretMovementComp::UArcVehicleTurretMovementComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreBaseRotation = false;
    this->bIgnorePitch = false;
    this->bIgnoreYaw = false;
    this->bIgnoreRoll = true;
    this->UpdatedPitchComponent = NULL;
    this->CurrentBase = NULL;
}

void UArcVehicleTurretMovementComp::Server_ServerMove_Implementation(FRotator FullRotation) {
}
bool UArcVehicleTurretMovementComp::Server_ServerMove_Validate(FRotator FullRotation) {
    return true;
}


