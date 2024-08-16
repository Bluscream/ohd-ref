#include "ArcVehicleSeatConfig_SeatPawn.h"
#include "Net/UnrealNetwork.h"

UArcVehicleSeatConfig_SeatPawn::UArcVehicleSeatConfig_SeatPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SeatPawnClass = NULL;
    this->bResetControlRotationOnEnter = true;
    this->SeatPawn = NULL;
}

void UArcVehicleSeatConfig_SeatPawn::OnRep_SeatPawn(AArcVehiclePawn* OldSeatPawn) {
}

void UArcVehicleSeatConfig_SeatPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UArcVehicleSeatConfig_SeatPawn, SeatPawnClass);
    DOREPLIFETIME(UArcVehicleSeatConfig_SeatPawn, PlayerCharacterAttachToComponent);
    DOREPLIFETIME(UArcVehicleSeatConfig_SeatPawn, bResetControlRotationOnEnter);
    DOREPLIFETIME(UArcVehicleSeatConfig_SeatPawn, SeatPawn);
}


