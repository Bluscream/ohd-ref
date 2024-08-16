#include "InterpTrackSlomo.h"
#include "InterpTrackInstSlomo.h"

UInterpTrackSlomo::UInterpTrackSlomo() {
    this->TrackInstClass = UInterpTrackInstSlomo::StaticClass();
    this->TrackTitle = TEXT("Slomo");
    this->bOnePerGroup = true;
    this->bDirGroupOnly = true;
}


