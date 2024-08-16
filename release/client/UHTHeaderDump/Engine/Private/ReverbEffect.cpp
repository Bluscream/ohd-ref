#include "ReverbEffect.h"

UReverbEffect::UReverbEffect() {
    this->Density = 1.00f;
    this->Diffusion = 1.00f;
    this->Gain = 0.32f;
    this->GainHF = 0.89f;
    this->DecayTime = 1.49f;
    this->DecayHFRatio = 0.83f;
    this->ReflectionsGain = 0.05f;
    this->ReflectionsDelay = 0.01f;
    this->LateGain = 1.26f;
    this->LateDelay = 0.01f;
    this->AirAbsorptionGainHF = 0.99f;
    this->RoomRolloffFactor = 0.00f;
}


