#include "ConstraintProfileProperties.h"

FConstraintProfileProperties::FConstraintProfileProperties() {
    this->ProjectionLinearTolerance = 0.00f;
    this->ProjectionAngularTolerance = 0.00f;
    this->LinearBreakThreshold = 0.00f;
    this->AngularBreakThreshold = 0.00f;
    this->bDisableCollision = false;
    this->bParentDominates = false;
    this->bEnableProjection = false;
    this->bAngularBreakable = false;
    this->bLinearBreakable = false;
}

