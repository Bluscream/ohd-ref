#include "FootstepFXSettings.h"

FFootstepFXSettings::FFootstepFXSettings() {
    this->VolumeMultiplier = 0.00f;
    this->PitchMultiplier = 0.00f;
    this->bAttachSound = false;
    this->bPlaySoundsWithPerspMeshOnly = false;
    this->bAttachEffect = false;
    this->bSpawnEffectsWithPerspMeshOnly = false;
    this->FootstepVariant = EFootstepVariant::Walk;
    this->FootTraceOffset = 0.00f;
    this->bDebug = false;
}

