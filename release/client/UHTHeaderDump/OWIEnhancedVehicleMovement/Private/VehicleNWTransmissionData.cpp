#include "VehicleNWTransmissionData.h"

FVehicleNWTransmissionData::FVehicleNWTransmissionData() {
    this->bUseGearAutoBox = false;
    this->GearSwitchTime = 0.00f;
    this->GearAutoBoxLatency = 0.00f;
    this->FinalRatio = 0.00f;
    this->ReverseGearRatio = 0.00f;
    this->NeutralGearUpRatio = 0.00f;
    this->NeutralGearDownRatio = 0.00f;
    this->ClutchStrength = 0.00f;
}

