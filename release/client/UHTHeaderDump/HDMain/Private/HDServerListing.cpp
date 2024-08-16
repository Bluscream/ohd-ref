#include "HDServerListing.h"

UHDServerListing::UHDServerListing() : UUserWidget(FObjectInitializer::Get()) {
    this->bTextToUpper = true;
    this->ServerData = NULL;
    this->ServerNameText = NULL;
    this->ModNameText = NULL;
    this->GameModeText = NULL;
    this->MapNameText = NULL;
    this->PlayersText = NULL;
    this->PingText = NULL;
}

void UHDServerListing::SetupListing(UHDServerListItemData* InServerItemData) {
}



