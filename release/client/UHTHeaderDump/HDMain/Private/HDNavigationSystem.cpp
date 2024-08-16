#include "HDNavigationSystem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENavDataGatheringModeConfig -FallbackName=ENavDataGatheringModeConfig

UHDNavigationSystem::UHDNavigationSystem() {
    this->DataGatheringMode = ENavDataGatheringModeConfig::Instant;
    this->SupportedAgents.AddDefaulted(2);
}


