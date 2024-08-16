#include "InterpTrackFade.h"
#include "InterpTrackInstFade.h"

UInterpTrackFade::UInterpTrackFade() {
    this->TrackInstClass = UInterpTrackInstFade::StaticClass();
    this->TrackTitle = TEXT("Fade");
    this->bOnePerGroup = true;
    this->bDirGroupOnly = true;
    this->bPersistFade = false;
    this->bFadeAudio = false;
}


