#include "HDAISpecificItemTypeAttackData.h"

FHDAISpecificItemTypeAttackData::FHDAISpecificItemTypeAttackData() {
    this->AttackRateMin = 0.00f;
    this->AttackRateMax = 0.00f;
    this->BurstAttackProbability = 0.00f;
    this->BurstAttackNumberMin = 0;
    this->BurstAttackNumberMax = 0;
    this->WeaponStopFireTimeMin = 0.00f;
    this->WeaponStopFireTimeMax = 0.00f;
    this->AfterEquipCooldownTime = 0.00f;
    this->SpecialtyItemUseTimeLimit = 0.00f;
    this->AfterSpecialtyItemUsedTimeLimit = 0.00f;
    this->bWeaponMovementFire = false;
}

