#include "DFVOIPCommStatics.h"

UDFVOIPCommStatics::UDFVOIPCommStatics() {
}

bool UDFVOIPCommStatics::WasPlayerTalking(const APlayerState* PlayerState) {
    return false;
}

bool UDFVOIPCommStatics::IsPlayerTalkingOverChannel(const APlayerState* PlayerState, const UDFCommChannel* TalkChannel) {
    return false;
}

bool UDFVOIPCommStatics::IsPlayerTalking(const APlayerState* PlayerState) {
    return false;
}

bool UDFVOIPCommStatics::IsPlayerTalkerPendingReset(const APlayerState* PlayerState) {
    return false;
}

UVoipListenerSynthComponent* UDFVOIPCommStatics::GetVoiceSynthOwnerOfAudioComponent(UAudioComponent* TalkerAudioComp) {
    return NULL;
}

UVoipListenerSynthComponent* UDFVOIPCommStatics::GetVoiceSynthComponentForVOIPTalker(UVOIPTalker* Talker) {
    return NULL;
}

FDFPlayerVOIPTalkingState UDFVOIPCommStatics::GetValidVoiceEntryForPlayer(const APlayerState* PlayerState) {
    return FDFPlayerVOIPTalkingState{};
}

void UDFVOIPCommStatics::ApplyVOIPTalkerSettingsForPlayer(const APlayerState* TalkerPlayerState, uint8 ListenerLocalUserNum) {
}


