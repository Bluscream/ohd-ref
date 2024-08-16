#include "InterpTrackBoolProp.h"
#include "InterpTrackInstBoolProp.h"

UInterpTrackBoolProp::UInterpTrackBoolProp() {
    this->TrackInstClass = UInterpTrackInstBoolProp::StaticClass();
    this->TrackTitle = TEXT("Bool Property");
}


