#include "HDJoinGameMenu.h"

UHDJoinGameMenu::UHDJoinGameMenu() {
    this->ServerList = NULL;
}



void UHDJoinGameMenu::OnRefresh(bool bSortAscending, EHDServerListSortBy SortBy) {
}

void UHDJoinGameMenu::JoinGame(UHDServerListItemData* ServerItem, const FString& JoinPassword) {
}

bool UHDJoinGameMenu::IsUsingDebugServerListings() const {
    return false;
}


