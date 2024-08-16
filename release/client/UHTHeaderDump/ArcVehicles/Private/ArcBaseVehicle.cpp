#include "ArcBaseVehicle.h"
#include "Net/UnrealNetwork.h"

AArcBaseVehicle::AArcBaseVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DriverSeatConfig = NULL;
}

void AArcBaseVehicle::SetupSeat_Implementation(UArcVehicleSeatConfig* SeatConfig) {
}

void AArcBaseVehicle::ServerPrintDebug_Request_Implementation() {
}
bool AArcBaseVehicle::ServerPrintDebug_Request_Validate() {
    return true;
}

void AArcBaseVehicle::RequestLeaveVehicle(APlayerState* InPlayerState) {
}

void AArcBaseVehicle::RequestEnterSeat(APlayerState* InPlayerState, int32 RequestedSeatIndex, bool bIgnoreRestrictions) {
}

void AArcBaseVehicle::RequestEnterAnySeat(APlayerState* InPlayerState) {
}

void AArcBaseVehicle::OnRep_ServerDebugStrings() {
}

bool AArcBaseVehicle::IsValidSeatIndex(int32 InSeatIndex) const {
    return false;
}

void AArcBaseVehicle::GetSortedExitPoints(FTransform InputLocation, TArray<FTransform>& OutTransformArray) const {
}

FTransform AArcBaseVehicle::GetNearestExitTransform_Implementation(FTransform InputLocation) {
    return FTransform{};
}

UArcVehicleSeatConfig* AArcBaseVehicle::GetDriverSeat() {
    return NULL;
}

void AArcBaseVehicle::GetAllSeats(TArray<UArcVehicleSeatConfig*>& Seats) {
}

void AArcBaseVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArcBaseVehicle, ReplicatedSeatConfigs);
    DOREPLIFETIME(AArcBaseVehicle, ServerDebugStrings);
}


