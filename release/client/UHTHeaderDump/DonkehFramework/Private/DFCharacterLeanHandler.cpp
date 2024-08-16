#include "DFCharacterLeanHandler.h"

UDFCharacterLeanHandler::UDFCharacterLeanHandler() {
    this->LeanTransitionSpeed = 2.00f;
    this->StandLeanInYOffset = 10.00f;
    this->CrouchLeanInYOffset = 5.00f;
    this->LeanRollAmount = 20.00f;
    this->LeanDirection = ELeanDirection::None;
    this->LeanTarget = 0.00f;
    this->bAtFullLeanTarget = false;
    this->LeanAmount = 0.00f;
}

void UDFCharacterLeanHandler::UpdateLeanDirection(ELeanDirection NewLeanDir) {
}



bool UDFCharacterLeanHandler::IsMoving() const {
    return false;
}

bool UDFCharacterLeanHandler::IsLeaning() const {
    return false;
}

ECharacterStance UDFCharacterLeanHandler::GetStance() const {
    return ECharacterStance::None;
}

ECharacterStance UDFCharacterLeanHandler::GetPreviousStance() const {
    return ECharacterStance::None;
}

UDFCharacterMovementComponent* UDFCharacterLeanHandler::GetOwningCharacterMovement() const {
    return NULL;
}

ADFBaseCharacter* UDFCharacterLeanHandler::GetOwningCharacter() const {
    return NULL;
}

float UDFCharacterLeanHandler::GetMaxLeanXOffset(ELeanDirection NewLeanDir, ECharacterStance LeanStance, bool bMoving) const {
    return 0.0f;
}

float UDFCharacterLeanHandler::GetLeanYOffset(float DesiredLeanAmt) const {
    return 0.0f;
}

float UDFCharacterLeanHandler::GetLeanXOffset(float DesiredLeanAmt) const {
    return 0.0f;
}

float UDFCharacterLeanHandler::GetLeanRollRot(float DesiredLeanAmt) const {
    return 0.0f;
}

float UDFCharacterLeanHandler::DetermineLeanTargetAmount(ELeanDirection DesiredLeanDir, bool bMoving) const {
    return 0.0f;
}


