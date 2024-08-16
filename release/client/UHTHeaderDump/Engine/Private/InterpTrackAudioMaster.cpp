#include "InterpTrackAudioMaster.h"
#include "InterpTrackInstAudioMaster.h"

UInterpTrackAudioMaster::UInterpTrackAudioMaster() {
    this->TrackInstClass = UInterpTrackInstAudioMaster::StaticClass();
    this->TrackTitle = TEXT("Audio Master");
    this->bOnePerGroup = true;
    this->bDirGroupOnly = true;
}


