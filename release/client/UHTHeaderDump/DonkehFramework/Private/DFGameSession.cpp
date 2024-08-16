#include "DFGameSession.h"

ADFGameSession::ADFGameSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ServerName = TEXT("Harsh Doorstop Dedicated Server");
    this->MinPlayers = 1;
}


