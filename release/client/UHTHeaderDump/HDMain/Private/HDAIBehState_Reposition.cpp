#include "HDAIBehState_Reposition.h"

UHDAIBehState_Reposition::UHDAIBehState_Reposition() {
    this->CombatState = NULL;
    this->bIsSprinting = false;
    this->SprintTimeMin = 3.00f;
    this->SprintTimeMax = 6.00f;
    this->SprintTimeEnd = 0.00f;
    this->SprintStaminaThresholdMin = 50.00f;
    this->SprintStaminaThresholdMax = 80.00f;
    this->SprintStaminaThreshold = 65.00f;
    this->SprintStaminaMin = 5.00f;
    this->SprintLookAroundTimeMin = 1.00f;
    this->SprintLookAroundTimeMax = 3.00f;
    this->SprintLookAroundTimeEnd = 0.00f;
}

void UHDAIBehState_Reposition::StopSprinting() {
}

void UHDAIBehState_Reposition::StartSprinting() {
}

void UHDAIBehState_Reposition::HandleSprinting() {
}


