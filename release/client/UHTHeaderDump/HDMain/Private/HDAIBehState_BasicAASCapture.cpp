#include "HDAIBehState_BasicAASCapture.h"

UHDAIBehState_BasicAASCapture::UHDAIBehState_BasicAASCapture() {
    this->NavigationHandler = NULL;
    this->CaptureHandler = NULL;
    this->GroupHandler = NULL;
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

void UHDAIBehState_BasicAASCapture::StopSprinting() {
}

void UHDAIBehState_BasicAASCapture::StartSprinting() {
}

void UHDAIBehState_BasicAASCapture::StartCapturingTheObjective() {
}

void UHDAIBehState_BasicAASCapture::PatrolAtObjective() {
}

void UHDAIBehState_BasicAASCapture::LoneWolfDecisionMaking() {
}

void UHDAIBehState_BasicAASCapture::HandleSprinting() {
}

void UHDAIBehState_BasicAASCapture::GroupMemberDecisionMaking() {
}

void UHDAIBehState_BasicAASCapture::GroupLeaderDecisionMaking() {
}

void UHDAIBehState_BasicAASCapture::AdvanceToObjective() {
}


