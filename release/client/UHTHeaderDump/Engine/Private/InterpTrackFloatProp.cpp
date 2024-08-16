#include "InterpTrackFloatProp.h"
#include "InterpTrackInstFloatProp.h"

UInterpTrackFloatProp::UInterpTrackFloatProp() {
    this->TrackInstClass = UInterpTrackInstFloatProp::StaticClass();
    this->TrackTitle = TEXT("Float Property");
}


