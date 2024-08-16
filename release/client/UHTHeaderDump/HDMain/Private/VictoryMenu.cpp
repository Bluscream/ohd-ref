#include "VictoryMenu.h"

UVictoryMenu::UVictoryMenu() {
    this->bFlushPlayerInputUponConstruction = true;
    this->bWinner = false;
}


void UVictoryMenu::Init(const FHDGameRoundEndEventDetails& InRoundDetails, bool bInWinner) {
}


