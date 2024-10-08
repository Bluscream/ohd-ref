#include "PainCausingVolume.h"
#include "DamageType.h"

APainCausingVolume::APainCausingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPainCausing = true;
    this->DamagePerSec = 1.00f;
    this->DamageType = UDamageType::StaticClass();
    this->PainInterval = 1.00f;
    this->bEntryPain = true;
    this->BACKUP_bPainCausing = false;
    this->DamageInstigator = NULL;
}


