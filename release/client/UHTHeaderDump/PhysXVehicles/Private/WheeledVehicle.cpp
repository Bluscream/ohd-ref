#include "WheeledVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "WheeledVehicleMovementComponent4W.h"

AWheeledVehicle::AWheeledVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VehicleMesh"));
    this->Mesh = (USkeletalMeshComponent*)RootComponent;
    this->VehicleMovement = CreateDefaultSubobject<UWheeledVehicleMovementComponent4W>(TEXT("MovementComp"));
}


