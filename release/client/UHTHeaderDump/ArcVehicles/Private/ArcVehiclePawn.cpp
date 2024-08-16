#include "ArcVehiclePawn.h"

AArcVehiclePawn::AArcVehiclePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AArcVehiclePawn::NotifyPlayerSeatChangeEvent_Implementation(APlayerState* Player, UArcVehicleSeatConfig* ToSeat, UArcVehicleSeatConfig* FromSeat, EArcVehicleSeatChangeType SeatChangeEvent) {
}

UArcVehicleSeatConfig* AArcVehiclePawn::GetSeatConfig() {
    return NULL;
}

AArcBaseVehicle* AArcVehiclePawn::GetOwningVehicle() {
    return NULL;
}


