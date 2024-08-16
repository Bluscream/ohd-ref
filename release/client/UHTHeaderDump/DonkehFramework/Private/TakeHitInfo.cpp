#include "TakeHitInfo.h"

FTakeHitInfo::FTakeHitInfo() {
    this->ActualDamage = 0.00f;
    this->DamageTypeClass = NULL;
    this->DamageEventClassID = 0;
    this->bKilled = false;
    this->EnsureReplicationByte = 0;
}

