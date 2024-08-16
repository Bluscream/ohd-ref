#include "InterpTrackColorScale.h"
#include "InterpTrackInstColorScale.h"

UInterpTrackColorScale::UInterpTrackColorScale() {
    this->TrackInstClass = UInterpTrackInstColorScale::StaticClass();
    this->TrackTitle = TEXT("Color Scale");
    this->bOnePerGroup = true;
    this->bDirGroupOnly = true;
}


