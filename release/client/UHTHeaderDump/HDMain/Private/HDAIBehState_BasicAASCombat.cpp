#include "HDAIBehState_BasicAASCombat.h"
#include "HDAIBehState_Attacking.h"
#include "HDAIBehState_FindAttackSpot.h"
#include "HDAIBehState_FindSafeSpot.h"
#include "HDAIBehState_Reposition.h"
#include "HDAIBehState_SafeSpotting.h"

UHDAIBehState_BasicAASCombat::UHDAIBehState_BasicAASCombat() {
    this->CombatHandler = NULL;
    this->BehaviorHandler = NULL;
    this->GroupHandler = NULL;
    this->bSafeSpotIsOpen = false;
    this->bCurrentLocationIsSafe = false;
    this->MinDistanceBetweenAttackAndSafeSpot = 300.00f;
    this->ExitCombatStateTimerMin = 5.00f;
    this->ExitCombatStateTimerMax = 10.00f;
    this->TimeToExitCombatState = 0.00f;
    this->FindAttackSpotState = NULL;
    this->FindSafeSpotState = NULL;
    this->AttackingState = NULL;
    this->SafespottingState = NULL;
    this->RepositionState = NULL;
    this->FindSafeSpotClass = UHDAIBehState_FindSafeSpot::StaticClass();
    this->FindAttackSpotClass = UHDAIBehState_FindAttackSpot::StaticClass();
    this->AttackingClass = UHDAIBehState_Attacking::StaticClass();
    this->SafespottingClass = UHDAIBehState_SafeSpotting::StaticClass();
    this->RepositionClass = UHDAIBehState_Reposition::StaticClass();
    this->CombatRepositioningDecisions.AddDefaulted(1);
}

void UHDAIBehState_BasicAASCombat::StartSafespotting() {
}

void UHDAIBehState_BasicAASCombat::StartCombatRepositioning(FVector InMoveTarget) {
}

void UHDAIBehState_BasicAASCombat::StartAttacking() {
}

void UHDAIBehState_BasicAASCombat::ProcessCombatLocations() {
}

bool UHDAIBehState_BasicAASCombat::IsValidSafeSpot(const FVector& InSafeSpot) {
    return false;
}

bool UHDAIBehState_BasicAASCombat::IsValidAttackSpot(const FVector& InAttackSpot) {
    return false;
}

bool UHDAIBehState_BasicAASCombat::HandleExitCombatStateTimer() {
    return false;
}

void UHDAIBehState_BasicAASCombat::HandleCombatRepositioning() {
}

void UHDAIBehState_BasicAASCombat::FindSafeSpot() {
}

void UHDAIBehState_BasicAASCombat::FindAttackSpot() {
}


