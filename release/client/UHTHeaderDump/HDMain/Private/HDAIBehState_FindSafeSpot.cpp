#include "HDAIBehState_FindSafeSpot.h"

UHDAIBehState_FindSafeSpot::UHDAIBehState_FindSafeSpot() {
    this->NavigationHandler = NULL;
    this->CombatHandler = NULL;
    this->AimingHandler = NULL;
    this->OwnerChar = NULL;
    this->InitialDirectionRandomizationAngle = 10.00f;
    this->FindSafeSpotMaxDistanceMin = 850.00f;
    this->FindSafeSpotMaxDistanceMax = 1050.00f;
    this->NumOfRandomAttemptsRemaining = 0;
    this->MaxNumOfRandomAttempts = 2;
    this->RandomAttemptNavRadius = 500.00f;
    this->bIsAtLocation = false;
    this->WaitEndTime = 0.00f;
    this->WaitTimeMin = 0.00f;
    this->WaitTimeMax = 1.00f;
    this->bAutoUpdateAttackSpot = false;
    this->bSprintWhileFindingSafeSpot = false;
    this->CombatState = NULL;
}


