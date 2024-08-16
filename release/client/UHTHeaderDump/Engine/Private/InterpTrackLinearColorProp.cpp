#include "InterpTrackLinearColorProp.h"
#include "InterpTrackInstLinearColorProp.h"

UInterpTrackLinearColorProp::UInterpTrackLinearColorProp() {
    this->TrackInstClass = UInterpTrackInstLinearColorProp::StaticClass();
    this->TrackTitle = TEXT("LinearColor Property");
}


