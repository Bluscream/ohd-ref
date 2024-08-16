#include "AISystem.h"

UAISystem::UAISystem() {
    this->AcceptanceRadius = 5.00f;
    this->PathfollowingRegularPathPointAcceptanceRadius = 0.00f;
    this->PathfollowingNavLinkAcceptanceRadius = 0.00f;
    this->bFinishMoveOnGoalOverlap = true;
    this->bAcceptPartialPaths = true;
    this->bAllowStrafing = false;
    this->bEnableBTAITasks = false;
    this->bAllowControllersAsEQSQuerier = false;
    this->bEnableDebuggerPlugin = true;
    this->bForgetStaleActors = false;
    this->DefaultSightCollisionChannel = ECC_Visibility;
    this->BehaviorTreeManager = NULL;
    this->EnvironmentQueryManager = NULL;
    this->PerceptionSystem = NULL;
    this->HotSpotManager = NULL;
    this->NavLocalGrids = NULL;
}

void UAISystem::AILoggingVerbose() {
}

void UAISystem::AIIgnorePlayers() {
}


