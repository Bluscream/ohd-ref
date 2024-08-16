#include "HDUIUWWeaponStatus.h"

UHDUIUWWeaponStatus::UHDUIUWWeaponStatus() {
    this->bListenForPlayerCharacterEvents = true;
    this->OwnerEquippedWeapon = NULL;
}

void UHDUIUWWeaponStatus::OwnerWeaponFireModeChanged(ADFBaseGun* Gun, EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput) {
}


void UHDUIUWWeaponStatus::OwnerAimStyleChanged(AHDPlayerCharacter* Character, EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput) {
}




