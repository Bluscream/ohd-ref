#include "InterpTrackMoveAxis.h"

UInterpTrackMoveAxis::UInterpTrackMoveAxis() {
    this->TrackTitle = TEXT("Move Axis Track");
    this->bSubTrackOnly = true;
    this->MoveAxis = AXIS_TranslationX;
}


