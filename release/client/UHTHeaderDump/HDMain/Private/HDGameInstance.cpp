#include "HDGameInstance.h"

UHDGameInstance::UHDGameInstance() {
    this->UGCLoadProgressScreen = NULL;
    this->ScoreboardMenu = NULL;
    this->UGCLoadProgressScreenClassPtr = NULL;
}

void UHDGameInstance::UnloadScoreboardMenu() {
}

void UHDGameInstance::ShowErrorDialog(const FText& Title, const FText& Message) {
}

void UHDGameInstance::ShowConfirmationDialog(const FText& Title, const FText& Message) {
}

bool UHDGameInstance::OwnsAppBP(int64 AppID) {
    return false;
}

void UHDGameInstance::LoadScoreboardMenu() {
}

bool UHDGameInstance::HasModsLoaded() {
    return false;
}

bool UHDGameInstance::HasDLCBP(int64 DLCAppID) {
    return false;
}


