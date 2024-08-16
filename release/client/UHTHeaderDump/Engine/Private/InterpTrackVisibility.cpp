#include "InterpTrackVisibility.h"
#include "InterpTrackInstVisibility.h"

UInterpTrackVisibility::UInterpTrackVisibility() {
    this->TrackInstClass = UInterpTrackInstVisibility::StaticClass();
    this->TrackTitle = TEXT("Visibility");
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->bFireEventsWhenJumpingForwards = true;
}


