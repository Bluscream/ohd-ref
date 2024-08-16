#include "ArcVehicleSeatConfig.h"
#include "Net/UnrealNetwork.h"

UArcVehicleSeatConfig::UArcVehicleSeatConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerInSeat = NULL;
    this->PlayerSeatComponent = NULL;
    this->bPlayerVisible = false;
}

void UArcVehicleSeatConfig::UnAttachPlayerFromSeat(APlayerState* Player) {
}

void UArcVehicleSeatConfig::SetupSeatAttachment_Implementation() {
}

bool UArcVehicleSeatConfig::IsOpenSeat() const {
    return false;
}

bool UArcVehicleSeatConfig::IsDriverSeat() const {
    return false;
}

AArcBaseVehicle* UArcVehicleSeatConfig::GetVehicleOwner() const {
    return NULL;
}



void UArcVehicleSeatConfig::AttachPlayerToSeat(APlayerState* Player) {
}

void UArcVehicleSeatConfig::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UArcVehicleSeatConfig, AttachSeatToComponent);
    DOREPLIFETIME(UArcVehicleSeatConfig, bPlayerVisible);
}


