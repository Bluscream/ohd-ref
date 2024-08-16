#include "TBVoiceIndicator.h"

UTBVoiceIndicator::UTBVoiceIndicator() : UUserWidget(FObjectInitializer::Get()) {
    this->VoiceListingClass = NULL;
    this->ActiveVoiceList = NULL;
    this->MaxActiveVoices = 5;
    this->ActiveVoices = 0;
}




