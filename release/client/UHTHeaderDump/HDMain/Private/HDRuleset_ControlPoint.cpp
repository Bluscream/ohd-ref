#include "HDRuleset_ControlPoint.h"

UHDRuleset_ControlPoint::UHDRuleset_ControlPoint() {
    this->bUseTickets = true;
}

FControlPointRulesetSettings UHDRuleset_ControlPoint::GetControlPointSettingsForTeam(EHDTeam ControlPointTeam) const {
    return FControlPointRulesetSettings{};
}

void UHDRuleset_ControlPoint::ControlPointTeamUpdated(AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured) {
}

void UHDRuleset_ControlPoint::ControlPointCaptureProgressUpdated(AHDBaseCapturePoint* ControlPoint, bool bContested, int32 Progress) {
}


