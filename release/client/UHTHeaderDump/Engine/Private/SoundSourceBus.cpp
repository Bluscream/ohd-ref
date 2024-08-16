#include "SoundSourceBus.h"
#include "EVirtualizationMode.h"

USoundSourceBus::USoundSourceBus() {
    this->VirtualizationMode = EVirtualizationMode::PlayWhenSilent;
    this->bLooping = true;
    this->FrequenciesToAnalyze.AddDefaulted(4);
    this->SourceBusChannels = ESourceBusChannels::Mono;
    this->SourceBusDuration = 0.00f;
    this->bAutoDeactivateWhenSilent = false;
}


