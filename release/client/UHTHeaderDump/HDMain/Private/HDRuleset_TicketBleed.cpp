#include "HDRuleset_TicketBleed.h"

UHDRuleset_TicketBleed::UHDRuleset_TicketBleed() {
    this->bUseTickets = true;
}

void UHDRuleset_TicketBleed::UpdateTicketBleedState() {
}

FTicketBleedRulesetSettings UHDRuleset_TicketBleed::GetTicketBleedSettingsForTeam(EHDTeam TicketBleedTeam) const {
    return FTicketBleedRulesetSettings{};
}

void UHDRuleset_TicketBleed::ControlPointTeamUpdated(AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured) {
}

void UHDRuleset_TicketBleed::ApplyTicketBleed(EHDTeam BleedTeam, int32 TicketBleedMultiplier, bool bUseMercyTicketBleed) {
}


