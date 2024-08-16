#include "HDAIAimingHandler.h"
#include "Templates/SubclassOf.h"

UHDAIAimingHandler::UHDAIAimingHandler() {
    this->CombatHandler = NULL;
    this->NavigationHandler = NULL;
    this->BehaviorHandler = NULL;
    this->VocalHandler = NULL;
    this->PerceptionComponent = NULL;
    this->CurrentTargetStimulusStrength = 0.00f;
    this->CurrentTargetStimulusAge = 340282346638528859811704183484516925440.00f;
    this->RefreshTargetTime = 0.00f;
    this->RefreshTargetRate = 0.10f;
    this->NewTargetStimulusStrengthThreshold = 0.98f;
    this->AimingAtTargetAngleThreshold = 10.00f;
    this->bAimingAtTarget = false;
    this->AimingSpeed = 1.00f;
    this->AimingSpeedNear = 3.00f;
    this->AimingSpeedFar = 4.00f;
    this->AimingSpeedAngleNear = 35.00f;
    this->AimingSpeedAngleFar = 90.00f;
    this->AimingSpeedMultiplier = 100.00f;
    this->WeaponAimingDistance = 800.00f;
    this->WeaponMinConeOfFireAngleDegrees = 5.00f;
    this->WeaponMaxConeOfFireAngleDegrees = 8.00f;
    this->bEnableNoEnemyLookAround = true;
    this->NextFocalPointTime = 0.00f;
    this->NextFocalPointIntervalMin = 0.50f;
    this->NextFocalPointIntervalMax = 1.50f;
    this->NextFocalPointAngleMin = 0.00f;
    this->NextFocalPointAngleMax = 25.00f;
    this->NextFocalPointDistanceMin = 2500.00f;
    this->NextFocalPointDistanceMax = 3500.00f;
    this->ProjectileAimingTime = 0.00f;
    this->ProjectileAimingRate = 1.00f;
    this->ProjectileAimingRateVariation = 0.20f;
}

bool UHDAIAimingHandler::SuggestProjectileVelocity(FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float TossSpeed) {
    return false;
}

bool UHDAIAimingHandler::ShouldChangeNoEnemyFocalPoint() {
    return false;
}

void UHDAIAimingHandler::SetEnableNoEnemyLookAround(bool bInEnableNoEnemyLookAround) {
}

void UHDAIAimingHandler::MakeNoEnemyFocalPoint() {
}

bool UHDAIAimingHandler::IsCandidateTarget(const AActor* ActorToCheck) const {
    return false;
}

bool UHDAIAimingHandler::IsAimingAtTarget() const {
    return false;
}

bool UHDAIAimingHandler::HasValidCustomAimingTarget() const {
    return false;
}

FVector UHDAIAimingHandler::GetNoEnemyFocalPoint() const {
    return FVector{};
}

bool UHDAIAimingHandler::GetIsNewTargetMoreRelevant(float OldTargetStrength, float NewTargetStrength) const {
    return false;
}

bool UHDAIAimingHandler::GetEnableNoEnemyLookAround() const {
    return false;
}

void UHDAIAimingHandler::GetActorStimulusData(const AActor* InActor, FVector& OutLocation, float& OutStrength, float& OutAge) const {
}

void UHDAIAimingHandler::EstablishNewTargetFromPerception(const TSubclassOf<UAISense>& SenseToUse) {
}

bool UHDAIAimingHandler::CheckForTarget(AActor* TargetActor, FAIStimulus Stimulus) {
    return false;
}

void UHDAIAimingHandler::CalcAimingDirection() {
}

void UHDAIAimingHandler::AimAtCurrentTarget() {
}


