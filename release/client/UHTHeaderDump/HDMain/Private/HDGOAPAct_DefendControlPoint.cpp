#include "HDGOAPAct_DefendControlPoint.h"

UHDGOAPAct_DefendControlPoint::UHDGOAPAct_DefendControlPoint() {
    this->Name = TEXT("Defend the Control Point");
    this->Preconditions.AddDefaulted(1);
    this->Effects.AddDefaulted(1);
}


