#include "DFPlayerCameraManager.h"

ADFPlayerCameraManager::ADFPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->AimingFOV = 60.00f;
    this->AimInterpSpeed = 15.00f;
}


