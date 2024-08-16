#include "HDAIBehState_BasicAAS.h"
#include "HDAIBehState_BasicAASCapture.h"
#include "HDAIBehState_BasicAASCombat.h"
#include "HDAIBehState_BasicAASIdle.h"

UHDAIBehState_BasicAAS::UHDAIBehState_BasicAAS() {
    this->CombatHandler = NULL;
    this->BehaviorHandler = NULL;
    this->GroupHandler = NULL;
    this->CaptureHandler = NULL;
    this->CombatState = NULL;
    this->CaptureState = NULL;
    this->IdleState = NULL;
    this->CombatStateClass = UHDAIBehState_BasicAASCombat::StaticClass();
    this->CaptureStateClass = UHDAIBehState_BasicAASCapture::StaticClass();
    this->IdleStateClass = UHDAIBehState_BasicAASIdle::StaticClass();
    this->MinDistanceToStartCombatState = 10000.00f;
}

void UHDAIBehState_BasicAAS::StartCombatState(FVector InCombatTarget, FVector InNavigationAnchor) {
}

void UHDAIBehState_BasicAAS::StartCombatRepositioning(FVector InMoveTarget) {
}

void UHDAIBehState_BasicAAS::StartCaptureState() {
}

void UHDAIBehState_BasicAAS::SelectBehaviorState() {
}


