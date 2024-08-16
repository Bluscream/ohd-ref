#include "ArcVehiclePlayerSeatComponent.h"
#include "Net/UnrealNetwork.h"

UArcVehiclePlayerSeatComponent::UArcVehiclePlayerSeatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StoredPlayerState = NULL;
}

void UArcVehiclePlayerSeatComponent::ServerPrintDebug_Request_Implementation() {
}
bool UArcVehiclePlayerSeatComponent::ServerPrintDebug_Request_Validate() {
    return true;
}

void UArcVehiclePlayerSeatComponent::OnSeatChangeEvent_Implementation(EArcVehicleSeatChangeType SeatChangeType) {
}

void UArcVehiclePlayerSeatComponent::OnRep_StoredPlayerState(APlayerState* InPreviousPlayerState) {
}

void UArcVehiclePlayerSeatComponent::OnRep_ServerDebugStrings() {
}

void UArcVehiclePlayerSeatComponent::OnRep_SeatConfig(const FArcVehicleSeatReference& InPreviousSeatConfig) {
}


void UArcVehiclePlayerSeatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UArcVehiclePlayerSeatComponent, CurrentSeatConfig);
    DOREPLIFETIME(UArcVehiclePlayerSeatComponent, StoredPlayerState);
    DOREPLIFETIME(UArcVehiclePlayerSeatComponent, ServerDebugStrings);
}


