#include "DFCharacterAnimInstance.h"

UDFCharacterAnimInstance::UDFCharacterAnimInstance() {
    this->bPreviewAnimInstance = false;
    this->CachedPawnOwner = NULL;
    this->DFCharOwner = NULL;
    this->ControllerOwner = NULL;
    this->EquippedWeapon = NULL;
    this->MoveMode = MOVE_None;
    this->MoveStance = ECharacterStance::None;
    this->MoveSpeed = 0.00f;
    this->MoveDirectionDeg = 0.00f;
    this->bMoving = false;
    this->bInAir = false;
    this->bJumped = false;
    this->bSprinting = false;
    this->bAiming = false;
    this->bLeaning = false;
}

ADFBaseItem* UDFCharacterAnimInstance::TryGetOwnerWeapon() const {
    return NULL;
}

AController* UDFCharacterAnimInstance::TryGetControllerOwner() const {
    return NULL;
}

void UDFCharacterAnimInstance::EquippedWeaponChanged(ADFBaseCharacter* Character, ADFBaseItem* NewEquippedWeap, ADFBaseItem* PrevEquippedWeap) {
}





