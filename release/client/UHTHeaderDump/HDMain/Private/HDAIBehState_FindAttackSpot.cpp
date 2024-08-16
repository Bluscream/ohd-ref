#include "HDAIBehState_FindAttackSpot.h"

UHDAIBehState_FindAttackSpot::UHDAIBehState_FindAttackSpot() {
    this->NavigationHandler = NULL;
    this->InitialDirectionRandomizationAngle = 10.00f;
    this->FindAttackSpotMaxDistanceMin = 850.00f;
    this->FindAttackSpotMaxDistanceMax = 1050.00f;
    this->NumOfRandomAttemptsRemaining = 0;
    this->MaxNumOfRandomAttempts = 2;
    this->RandomAttemptNavRadius = 500.00f;
    this->bIsAtLocation = false;
    this->WaitEndTime = 0.00f;
    this->WaitTimeMin = 1.00f;
    this->WaitTimeMax = 2.50f;
    this->bAutoUpdateSafeSpot = false;
    this->CombatState = NULL;
}


