#include "HDAIBehState_SafeSpotting.h"

UHDAIBehState_SafeSpotting::UHDAIBehState_SafeSpotting() {
    this->bSafespottingTimerStarted = false;
    this->SafespottingEndTime = 0.00f;
    this->SafespottingTimeMin = 600.00f;
    this->SafespottingTimeMax = 600.00f;
    this->CombatState = NULL;
}

void UHDAIBehState_SafeSpotting::HandleSafeSpotting() {
}


