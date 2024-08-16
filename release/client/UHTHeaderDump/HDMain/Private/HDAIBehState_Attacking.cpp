#include "HDAIBehState_Attacking.h"

UHDAIBehState_Attacking::UHDAIBehState_Attacking() {
    this->bAttackingTimerStarted = false;
    this->AttackingEndTime = 0.00f;
    this->AttackingTimeMin = 600.00f;
    this->AttackingTimeMax = 600.00f;
    this->CombatState = NULL;
}

void UHDAIBehState_Attacking::HandleAttacking() {
}


