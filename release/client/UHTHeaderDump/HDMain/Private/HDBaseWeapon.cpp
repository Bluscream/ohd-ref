#include "HDBaseWeapon.h"

AHDBaseWeapon::AHDBaseWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayEquipmentSymbol = NULL;
    this->bUseFreeAim = true;
    this->bSelectable = true;
    this->bHideFireModeIndicator = false;
    this->AmmoReplenishmentDelay = 0.00f;
}

bool AHDBaseWeapon::IsSelectableEquipment() const {
    return false;
}


