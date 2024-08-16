#include "ArcVehicleBPFunctionLibrary.h"

UArcVehicleBPFunctionLibrary::UArcVehicleBPFunctionLibrary() {
}

bool UArcVehicleBPFunctionLibrary::IsSeatRefValid(FArcVehicleSeatReference SeatRef) {
    return false;
}

UArcVehicleSeatConfig* UArcVehicleBPFunctionLibrary::GetVehicleSeatConfigFromRef(FArcVehicleSeatReference SeatRef) {
    return NULL;
}

AArcBaseVehicle* UArcVehicleBPFunctionLibrary::GetVehicleFromSeatConfig(FArcVehicleSeatReference SeatRef) {
    return NULL;
}


