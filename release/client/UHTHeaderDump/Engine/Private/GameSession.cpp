#include "GameSession.h"

AGameSession::AGameSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSpectators = 0;
    this->MaxPlayers = 16;
    this->MaxPartySize = -1;
    this->MaxSplitscreensPerConnection = 4;
    this->bRequiresPushToTalk = true;
}


