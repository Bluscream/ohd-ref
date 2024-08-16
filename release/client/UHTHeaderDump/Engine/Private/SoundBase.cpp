#include "SoundBase.h"

USoundBase::USoundBase() {
    this->bDebug = false;
    this->bOverrideConcurrency = false;
    this->bOutputToBusOnly = false;
    this->bHasDelayNode = false;
    this->bHasConcatenatorNode = false;
    this->bBypassVolumeScaleForPriority = false;
    this->VirtualizationMode = EVirtualizationMode::Restart;
    this->Duration = 0.00f;
    this->MaxDistance = 0.00f;
    this->TotalSamples = 0.00f;
    this->Priority = 1.00f;
    this->AttenuationSettings = NULL;
    this->SoundSubmixObject = NULL;
    this->SourceEffectChain = NULL;
}


