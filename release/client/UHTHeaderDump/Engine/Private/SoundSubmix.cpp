#include "SoundSubmix.h"

USoundSubmix::USoundSubmix() {
    this->bMuteWhenBackgrounded = false;
    this->AmbisonicsPluginSettings = NULL;
    this->EnvelopeFollowerAttackTime = 10;
    this->EnvelopeFollowerReleaseTime = 500;
    this->OutputVolume = 1.00f;
}

void USoundSubmix::StopRecordingOutput(const UObject* WorldContextObject, EAudioRecordingExportType ExportType, const FString& Name, const FString& Path, USoundWave* ExistingSoundWaveToOverwrite) {
}

void USoundSubmix::StopEnvelopeFollowing(const UObject* WorldContextObject) {
}

void USoundSubmix::StartRecordingOutput(const UObject* WorldContextObject, float ExpectedDuration) {
}

void USoundSubmix::StartEnvelopeFollowing(const UObject* WorldContextObject) {
}

void USoundSubmix::SetSubmixOutputVolume(const UObject* WorldContextObject, float InOutputVolume) {
}

void USoundSubmix::AddEnvelopeFollowerDelegate(const UObject* WorldContextObject, const FOnSubmixEnvelopeBP& OnSubmixEnvelopeBP) {
}


