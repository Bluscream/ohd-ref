#include "InterpTrackAnimControl.h"
#include "InterpTrackInstAnimControl.h"

UInterpTrackAnimControl::UInterpTrackAnimControl() {
    this->TrackInstClass = UInterpTrackInstAnimControl::StaticClass();
    this->TrackTitle = TEXT("Anim");
    this->bIsAnimControlTrack = true;
    this->SlotName = TEXT("DefaultSlot");
    this->bSkipAnimNotifiers = false;
}


