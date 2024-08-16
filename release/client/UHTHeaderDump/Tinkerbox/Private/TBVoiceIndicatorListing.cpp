#include "TBVoiceIndicatorListing.h"

UTBVoiceIndicatorListing::UTBVoiceIndicatorListing() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerName = NULL;
    this->ParentMenu = NULL;
}

void UTBVoiceIndicatorListing::Init(UTBVoiceIndicator* InParentMenu, const FUniqueNetIdRepl& InUniqueNetId, FString& InPlayerName) {
}


