#include "ControlPointRulesetSettings.h"

FControlPointRulesetSettings::FControlPointRulesetSettings() {
    this->TicketsGainedForCapture = 0;
    this->TicketsGainedForCaptureFromNeutral = 0;
    this->TicketsLostOnCapture = 0;
    this->PointsForNeutralize = 0.00f;
    this->PointsForCapture = 0.00f;
    this->PointsForDefense = 0.00f;
    this->PointsOnCaptureProgress = 0.00f;
    this->PointsOnDefenseProgress = 0.00f;
}

