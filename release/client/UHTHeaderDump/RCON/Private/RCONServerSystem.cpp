#include "RCONServerSystem.h"

URCONServerSystem::URCONServerSystem() {
    this->bEnabled = false;
    this->ListenPort = 7779;
    this->MaxActiveConnections = 5;
    this->MaxAuthAttempts = 3;
}

void URCONServerSystem::Shutdown() {
}

void URCONServerSystem::Init() {
}


