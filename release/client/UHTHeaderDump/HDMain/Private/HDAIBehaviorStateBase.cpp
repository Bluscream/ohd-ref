#include "HDAIBehaviorStateBase.h"

UHDAIBehaviorStateBase::UHDAIBehaviorStateBase() {
    this->Controller = NULL;
    this->GOAPComponent = NULL;
    this->bCanEverTick = true;
    this->StateUpdateTime = 0.00f;
    this->StateUpdateRate = 0.15f;
    this->CurrentSubState = NULL;
    this->CurrentParentState = NULL;
}

void UHDAIBehaviorStateBase::UpdateState_Implementation(float DeltaTime) {
}

bool UHDAIBehaviorStateBase::UpdateCurrentSubState(float DeltaTime) {
    return false;
}

bool UHDAIBehaviorStateBase::SwitchToSubState(UHDAIBehaviorStateBase* InNewState) {
    return false;
}

void UHDAIBehaviorStateBase::ResetUpdateTimer(float InTimerInterval) {
}

void UHDAIBehaviorStateBase::Init_Implementation(AHDAIController* InController, UHDGOAPComponent* InGOAPComponent, UHDAIBehaviorStateBase* InParentState) {
}

void UHDAIBehaviorStateBase::ExitState_Implementation() {
}

bool UHDAIBehaviorStateBase::ExitCurrentSubState() {
    return false;
}

void UHDAIBehaviorStateBase::EnterState_Implementation() {
}

bool UHDAIBehaviorStateBase::CanUpdateState_Implementation(float DeltaTime) {
    return false;
}

bool UHDAIBehaviorStateBase::CanExitState_Implementation() {
    return false;
}

bool UHDAIBehaviorStateBase::CanEnterState_Implementation() {
    return false;
}


