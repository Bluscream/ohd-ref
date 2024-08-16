#include "InterpTrackVectorProp.h"
#include "InterpTrackInstVectorProp.h"

UInterpTrackVectorProp::UInterpTrackVectorProp() {
    this->TrackInstClass = UInterpTrackInstVectorProp::StaticClass();
    this->TrackTitle = TEXT("Vector Property");
}


