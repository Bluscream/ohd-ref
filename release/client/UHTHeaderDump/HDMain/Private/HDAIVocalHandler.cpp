#include "HDAIVocalHandler.h"

UHDAIVocalHandler::UHDAIVocalHandler() {
    this->CombatHandler = NULL;
    this->bEnableVocalization = true;
    this->bEnableTimeLimitNotify = true;
    this->bFactionOnlyTimeLimit = true;
    this->TimeLimitNotifyRange = 3000.00f;
    this->PitchMultiplier = 1.00f;
    this->MinPitchMultiplier = 0.80f;
    this->MaxPitchMultiplier = 1.20f;
    this->AnySoundTimeLimit = 1.00f;
    this->ContactTimeLimit = 7.00f;
    this->LostContactTimeLimit = 7.00f;
    this->ReloadingTimeLimit = 3.00f;
    this->BeenHitTimeLimit = 3.00f;
    this->UnderSuppressionTimeLimit = 4.00f;
    this->DeathTimeLimit = 2.00f;
    this->NextAnySoundTime = 0.00f;
    this->NextContactTime = 0.00f;
    this->NextLostContactTime = 0.00f;
    this->NextReloadingTime = 0.00f;
    this->NextBeenHitTime = 0.00f;
    this->NextUnderSuppressionTime = 0.00f;
    this->NextDeathTime = 0.00f;
}

void UHDAIVocalHandler::VocalizeSuppression() {
}

void UHDAIVocalHandler::VocalizeReload() {
}

void UHDAIVocalHandler::VocalizeContact(bool bHasContact) {
}

void UHDAIVocalHandler::VocalizeBeenHit() {
}

void UHDAIVocalHandler::Vocalize(EHDAIVocalizationType InVocalType) {
}

void UHDAIVocalHandler::SetTimeLimit(EHDAIVocalizationType InVocalType) {
}

void UHDAIVocalHandler::SetPitchMultiplier(float InPitchMultiplier) {
}

void UHDAIVocalHandler::RandomizePitchMultiplier() {
}

void UHDAIVocalHandler::PlayVocalSound(EHDAIVocalizationType InVocalType) {
}

void UHDAIVocalHandler::NotifySurroundingCharacters(EHDAIVocalizationType InVocalType) {
}


