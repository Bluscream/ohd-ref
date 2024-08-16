#include "AudioSettings.h"

UAudioSettings::UAudioSettings() {
    this->VoiPSampleRate = EVoiceSampleRate::Low16000Hz;
    this->DefaultReverbSendLevel = 0.00f;
    this->MaximumConcurrentStreams = 10;
    this->GlobalMinPitchScale = 0.40f;
    this->GlobalMaxPitchScale = 2.00f;
    this->QualityLevels.AddDefaulted(4);
    this->bAllowPlayWhenSilent = true;
    this->bDisableMasterEQ = false;
    this->bAllowCenterChannel3DPanning = false;
    this->NumStoppingSources = 8;
    this->PanningMethod = EPanningMethod::Linear;
    this->MonoChannelUpmixMethod = EMonoChannelUpmixMethod::Linear;
    this->DialogueFilenameFormat = TEXT("{DialogueGuid}_{ContextId}");
}


