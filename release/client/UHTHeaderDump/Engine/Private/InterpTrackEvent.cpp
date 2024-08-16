#include "InterpTrackEvent.h"
#include "InterpTrackInstEvent.h"

UInterpTrackEvent::UInterpTrackEvent() {
    this->TrackInstClass = UInterpTrackInstEvent::StaticClass();
    this->TrackTitle = TEXT("Event");
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->bFireEventsWhenJumpingForwards = false;
    this->bUseCustomEventName = false;
}


