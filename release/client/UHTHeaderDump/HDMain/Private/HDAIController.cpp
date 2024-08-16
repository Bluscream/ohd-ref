#include "HDAIController.h"
#include "Templates/SubclassOf.h"

AHDAIController::AHDAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerComponent = NULL;
    this->GOAPComponent = NULL;
    this->bCanJoinSquads = true;
    this->bCanJoinPlayerSquads = true;
    this->bCanCreateSquads = true;
    this->MaxNumberOfAILedSquads = 3;
    this->MaxNumberOfSquadMembers = 6;
    this->MaxNumberOfAISquadMembers = -1;
    this->bUseFactionSpecifiedSquadLeaderKit = false;
    this->bUseFactionSpecifiedSquadMemberKit = false;
}

bool AHDAIController::JoinOrCreateSquad() {
    return false;
}

TSubclassOf<APawn> AHDAIController::GetStartPawnClass() const {
    return NULL;
}

UHDKit* AHDAIController::GetFactionSpecifiedSquadMemberKit_Implementation() const {
    return NULL;
}

UHDKit* AHDAIController::GetFactionSpecifiedSquadLeaderKit_Implementation() const {
    return NULL;
}


