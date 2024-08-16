#include "InterpTrackToggle.h"
#include "InterpTrackInstToggle.h"

UInterpTrackToggle::UInterpTrackToggle() {
    this->TrackInstClass = UInterpTrackInstToggle::StaticClass();
    this->TrackTitle = TEXT("Toggle");
    this->bActivateSystemEachUpdate = false;
    this->bActivateWithJustAttachedFlag = true;
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->bFireEventsWhenJumpingForwards = true;
}


