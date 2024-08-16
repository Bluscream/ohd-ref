#include "SteamNetDriver.h"

USteamNetDriver::USteamNetDriver() : UIpNetDriver(FObjectInitializer::Get()) {
    this->NetConnectionClassName = TEXT("OnlineSubsystemSteam.SteamNetConnection");
    this->ChannelDefinitions.AddDefaulted(3);
}


