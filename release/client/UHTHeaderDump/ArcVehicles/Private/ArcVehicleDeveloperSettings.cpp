#include "ArcVehicleDeveloperSettings.h"
#include "ArcVehiclePlayerStateComponent.h"

UArcVehicleDeveloperSettings::UArcVehicleDeveloperSettings() {
    this->PlayerStateComponentClass = UArcVehiclePlayerStateComponent::StaticClass();
}


