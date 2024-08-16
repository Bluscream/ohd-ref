#include "GameMapsSettings.h"

UGameMapsSettings::UGameMapsSettings() {
    this->bUseSplitscreen = false;
    this->TwoPlayerSplitscreenLayout = ETwoPlayerSplitScreenType::Horizontal;
    this->ThreePlayerSplitscreenLayout = EThreePlayerSplitScreenType::FavorTop;
    this->FourPlayerSplitscreenLayout = EFourPlayerSplitScreenType::Grid;
    this->bOffsetPlayerGamepadIds = false;
    this->GameModeMapPrefixes.AddDefaulted(2);
    this->GameModeClassAliases.AddDefaulted(2);
}

void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer) {
}

bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1() const {
    return false;
}

UGameMapsSettings* UGameMapsSettings::GetGameMapsSettings() {
    return NULL;
}


