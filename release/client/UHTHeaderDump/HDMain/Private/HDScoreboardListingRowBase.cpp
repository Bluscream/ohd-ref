#include "HDScoreboardListingRowBase.h"

UHDScoreboardListingRowBase::UHDScoreboardListingRowBase() : UUserWidget(FObjectInitializer::Get()) {
    this->ParentMenu = NULL;
    this->PlayerState = NULL;
    this->bRefreshListingOnTick = true;
    this->MutePlayerBtn = NULL;
    this->PlayerName = NULL;
    this->Score = NULL;
    this->Kills = NULL;
    this->Deaths = NULL;
    this->Ping = NULL;
    this->PlayerNumber = NULL;
}

void UHDScoreboardListingRowBase::SetVoiceStateIcon(UTexture2D* NewIcon) {
}

void UHDScoreboardListingRowBase::RefreshListing() {
}



void UHDScoreboardListingRowBase::OnMutePlayer() {
}

void UHDScoreboardListingRowBase::Init(UHDScoreboardBase* InParentMenu, ADFBasePlayerState* InPlayerState, bool bInRefreshListingOnTick) {
}

bool UHDScoreboardListingRowBase::HasInitialized() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UHDScoreboardListingRowBase::GetIconForVoiceState(EPlayerVoiceState VoiceState) const {
    return NULL;
}

int32 UHDScoreboardListingRowBase::GetCurrentPing() const {
    return 0;
}


