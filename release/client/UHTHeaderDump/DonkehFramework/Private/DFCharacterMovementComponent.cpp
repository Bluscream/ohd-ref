#include "DFCharacterMovementComponent.h"

UDFCharacterMovementComponent::UDFCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableServerDualMoveScopedMovementUpdates = true;
    this->DFCharacterOwner = NULL;
    this->LastMovementMode = MOVE_None;
    this->LastCustomMovementMode = 0;
    this->LeanSpeedMultiplier = 0.50f;
    this->bUseLeanSpeedMultiplierWhileAiming = false;
    this->bCanCrouchWhileFalling = true;
    this->bUseJumpStamina = false;
    this->JumpMaxStamina = 100.00f;
    this->JumpStaminaCost = 50.00f;
    this->JumpStaminaRecoveryRate = 15.00f;
    this->JumpStaminaThreshold = 50.00f;
    this->VaultOverVelocityCurve = NULL;
    this->SprintVaultOverVelocityCurve = NULL;
    this->ClimbOntoVelocityCurve = NULL;
    this->SprintClimbOntoVelocityCurve = NULL;
    this->VaultViewPitch = 50.00f;
    this->VaultReachDistance = 75.00f;
    this->SprintVaultReachDistance = 100.00f;
    this->VaultReachRadius = 32.00f;
    this->VaultCapsuleLOSRadius = 28.00f;
    this->MaxVaultObstacleVelocitySquared = 900.00f;
    this->VaultOverDisplacementXOffset = 95.00f;
    this->ClimbOntoDisplacementXOffset = 10.00f;
    this->VaultOverDisplacementZOffset = 23.00f;
    this->ClimbOntoDisplacementZOffset = 96.00f;
    this->VaultOverLedgeSurfaceThreshold = 0.70f;
    this->ClimbOntoLedgeSurfaceThreshold = 0.80f;
    this->MinVaultOverLedgeHeight = 60.00f;
    this->MaxVaultOverLedgeHeight = 120.00f;
    this->MinClimbOntoLedgeHeight = 98.00f;
    this->MaxClimbOntoLedgeHeight = 180.00f;
    this->bWantsToSprint = false;
    this->SprintSpeedMultiplier = 1.20f;
    this->SprintAccelerationMultiplier = 1.20f;
    this->SprintStrafingThreshold = 0.30f;
    this->bUseSprintStamina = false;
    this->SprintMaxStamina = 100.00f;
    this->SprintStaminaDelta = 15.00f;
    this->SprintStaminaThreshold = 25.00f;
    this->bWantsToAim = false;
    this->AimSpeedMultiplier = 0.50f;
    this->bWantsToLeanLeft = false;
    this->bWantsToLeanRight = false;
    this->ProneHalfHeight = 20.00f;
    this->bCanWalkOffLedgesWhenProne = false;
    this->bCanAimWhileCrawling = false;
    this->bProneMaintainsBaseLocation = false;
    this->MaxWalkSpeedProne = 150.00f;
    this->bWantsToBeProne = false;
    this->bCanSwimUnderwater = true;
    this->JumpStamina = 0.00f;
    this->bCanSprint = false;
    this->SprintStamina = 0.00f;
    this->bCanAim = false;
    this->bCanLean = false;
    this->bCanBeProne = false;
    this->bCanVault = false;
    this->bJustLeftWater = false;
}

FDFVaultTraceResult UDFCharacterMovementComponent::VaultTrace() const {
    return FDFVaultTraceResult{};
}

bool UDFCharacterMovementComponent::IsVaulting() const {
    return false;
}

bool UDFCharacterMovementComponent::IsStrafing(float Threshold) const {
    return false;
}

bool UDFCharacterMovementComponent::IsStanding() const {
    return false;
}

bool UDFCharacterMovementComponent::IsSprinting() const {
    return false;
}

bool UDFCharacterMovementComponent::IsReloading() const {
    return false;
}

bool UDFCharacterMovementComponent::IsProne() const {
    return false;
}

bool UDFCharacterMovementComponent::IsMovingForward() const {
    return false;
}

bool UDFCharacterMovementComponent::IsMoving(bool bIgnoreZVel) const {
    return false;
}

bool UDFCharacterMovementComponent::IsLeaning() const {
    return false;
}

bool UDFCharacterMovementComponent::IsCrawling() const {
    return false;
}

bool UDFCharacterMovementComponent::IsAlive() const {
    return false;
}

bool UDFCharacterMovementComponent::IsAiming() const {
    return false;
}

ECharacterStance UDFCharacterMovementComponent::GetStance() const {
    return ECharacterStance::None;
}

ECharacterStance UDFCharacterMovementComponent::GetPreviousStance() const {
    return ECharacterStance::None;
}

ELeanDirection UDFCharacterMovementComponent::GetLeanDirection() const {
    return ELeanDirection::None;
}

float UDFCharacterMovementComponent::GetLeanAmount() const {
    return 0.0f;
}

ADFBaseCharacter* UDFCharacterMovementComponent::GetDFCharacterOwner() const {
    return NULL;
}

float UDFCharacterMovementComponent::ClampSpeedMultiplier(float MultValue) const {
    return 0.0f;
}


