#include "HDGOAPAct_CaptureControlPoint.h"

UHDGOAPAct_CaptureControlPoint::UHDGOAPAct_CaptureControlPoint() {
    this->Name = TEXT("Capture the Control Point");
    this->Preconditions.AddDefaulted(1);
    this->Effects.AddDefaulted(1);
}


