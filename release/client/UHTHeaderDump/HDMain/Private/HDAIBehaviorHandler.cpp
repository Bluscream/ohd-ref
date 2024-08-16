#include "HDAIBehaviorHandler.h"
#include "HDAIBehState_BasicAAS.h"

UHDAIBehaviorHandler::UHDAIBehaviorHandler() {
    this->NavigationHandler = NULL;
    this->CombatHandler = NULL;
    this->AimingHandler = NULL;
    this->VocalHandler = NULL;
    this->CaptureHandler = NULL;
    this->GroupHandler = NULL;
    this->SuppressionThreatLevel = 0.00f;
    this->SuppressionLevelPerShot = 0.05f;
    this->SuppressionThreatThreshold = 0.10f;
    this->SuppressionFalloff = 0.05f;
    this->SuppressionTime = 0.00f;
    this->SuppressionFallingOffDelay = 3.00f;
    this->BeingHitThreatLevel = 0.00f;
    this->BeingHitThreatThreshold = 0.10f;
    this->BeingHitFalloff = 0.05f;
    this->BeingHitThreatLevelSpikeProbability = 0.15f;
    this->BeingHitThreatLevelSpikeAmount = 0.50f;
    this->BeingHitFallingOffDelay = 5.00f;
    this->BeingHitTime = 0.00f;
    this->CurrentBehaviorState = NULL;
    this->DefaultBehaviorStateClass = UHDAIBehState_BasicAAS::StaticClass();
    this->MinDistanceToStartCombatState = 5000.00f;
    this->bIsInCombat = false;
}

void UHDAIBehaviorHandler::UpdateCurrentBehaviorState(float DeltaTime) {
}

void UHDAIBehaviorHandler::StartMoveToObjectiveBehaviorState() {
}

void UHDAIBehaviorHandler::StartCombatRepositioning(FVector InMoveTarget) {
}

void UHDAIBehaviorHandler::StartCombatBehaviorState(FVector InCombatTarget, FVector InNavigationAnchor) {
}

void UHDAIBehaviorHandler::ReceiveSuppression() {
}

void UHDAIBehaviorHandler::ReceiveHitDamage() {
}

void UHDAIBehaviorHandler::OnOwnerDeath(APawn* VictimPawn, AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) {
}

void UHDAIBehaviorHandler::HandleBehaviorStates(float DeltaTime) {
}

bool UHDAIBehaviorHandler::GetIsUnderSuppression() const {
    return false;
}

bool UHDAIBehaviorHandler::GetIsBeingHit() const {
    return false;
}

void UHDAIBehaviorHandler::ExitCurrentBehaviorState() {
}

void UHDAIBehaviorHandler::EnterCurrentBehaviorState() {
}

void UHDAIBehaviorHandler::CalcThreatLevels() {
}


