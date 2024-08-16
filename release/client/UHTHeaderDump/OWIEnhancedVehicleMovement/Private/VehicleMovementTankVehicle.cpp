#include "VehicleMovementTankVehicle.h"
#include "WheeledVehicleMovementComponentTank.h"

AVehicleMovementTankVehicle::AVehicleMovementTankVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UWheeledVehicleMovementComponentTank>(TEXT("MovementComp"))) {
}


