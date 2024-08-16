#include "VehicleMovementNWheeledVehicle.h"
#include "WheeledVehicleMovementComponentNW.h"

AVehicleMovementNWheeledVehicle::AVehicleMovementNWheeledVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UWheeledVehicleMovementComponentNW>(TEXT("MovementComp"))) {
}


