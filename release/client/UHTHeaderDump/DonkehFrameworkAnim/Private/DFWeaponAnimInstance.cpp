#include "DFWeaponAnimInstance.h"

UDFWeaponAnimInstance::UDFWeaponAnimInstance() {
    this->bPreviewAnimInstance = false;
    this->WeaponOwner = NULL;
}

ADFBaseWeapon* UDFWeaponAnimInstance::TryGetWeaponOwner() const {
    return NULL;
}



