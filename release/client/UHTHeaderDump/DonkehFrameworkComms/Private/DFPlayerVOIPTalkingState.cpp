#include "DFPlayerVOIPTalkingState.h"

FDFPlayerVOIPTalkingState::FDFPlayerVOIPTalkingState() {
    this->bWasTalking = false;
    this->bIsTalking = false;
    this->bPendingTalkerReset = false;
    this->TalkerChannel = NULL;
}

