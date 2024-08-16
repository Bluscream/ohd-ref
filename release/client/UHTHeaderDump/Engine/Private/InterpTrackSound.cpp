#include "InterpTrackSound.h"
#include "InterpTrackInstSound.h"

UInterpTrackSound::UInterpTrackSound() {
    this->TrackInstClass = UInterpTrackInstSound::StaticClass();
    this->TrackTitle = TEXT("Sound");
    this->bPlayOnReverse = false;
    this->bContinueSoundOnMatineeEnd = false;
    this->bSuppressSubtitles = false;
    this->bTreatAsDialogue = false;
    this->bAttach = true;
}


