#include "DemoNetDriver.h"

UDemoNetDriver::UDemoNetDriver() {
    this->NetConnectionClassName = TEXT("/Script/Engine.DemoNetConnection");
    this->bNeverApplyNetworkEmulationSettings = true;
    this->ChannelDefinitions.AddDefaulted(2);
    this->CheckpointSaveMaxMSPerFrame = 0.00f;
    this->bIsLocalReplay = false;
}


