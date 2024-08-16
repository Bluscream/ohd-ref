#include "TBGameInstance.h"

UTBGameInstance::UTBGameInstance() {
    this->MainMenu = NULL;
    this->MainMenuClass = NULL;
    this->bHidePlayerHUDInMainMenu = true;
    this->bUseMenuBackgroundMaps = false;
    this->RCONServerSystem = NULL;
}

void UTBGameInstance::UnloadMainMenu() {
}

void UTBGameInstance::LoadMainMenu(bool bExclusive) {
}

void UTBGameInstance::HandleGoToMainMenu() {
}

void UTBGameInstance::GoToMainMenu() {
}

void UTBGameInstance::GetGameBuildInfo() {
}

bool UTBGameInstance::GetCurrentSessionHostAddressStr(FString& OutHostAddrStr, bool bPreferSteamP2PAddr, bool bAppendPort) const {
    return false;
}


