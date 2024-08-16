#include "InterpTrackMove.h"
#include "InterpTrackInstMove.h"

UInterpTrackMove::UInterpTrackMove() {
    this->TrackInstClass = UInterpTrackInstMove::StaticClass();
    this->TrackTitle = TEXT("Movement");
    this->bOnePerGroup = true;
    this->LinCurveTension = 0.00f;
    this->AngCurveTension = 0.00f;
    this->bUseQuatInterpolation = false;
    this->bShowArrowAtKeys = false;
    this->bDisableMovement = false;
    this->bShowTranslationOnCurveEd = true;
    this->bShowRotationOnCurveEd = false;
    this->bHide3DTrack = false;
    this->RotMode = IMR_Keyframed;
}


