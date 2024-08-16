#include "DeployMenu_SquadSelectionWidgetBase.h"

UDeployMenu_SquadSelectionWidgetBase::UDeployMenu_SquadSelectionWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->PlatoonTeamState = NULL;
    this->bSortPlatoons = true;
}

void UDeployMenu_SquadSelectionWidgetBase::SetupSquadSelection(AHDTeamState* InPlatoonTeamState) {
}

void UDeployMenu_SquadSelectionWidgetBase::RepopulateSquadSelection() {
}

void UDeployMenu_SquadSelectionWidgetBase::PlatoonPreRemoveFromTeam(AHDTeamState* SourceTeam, AHDPlatoonState* PlatoonToBeRemoved) {
}

void UDeployMenu_SquadSelectionWidgetBase::PlatoonAddedToTeam(AHDTeamState* SourceTeam, AHDPlatoonState* NewPlatoon) {
}





