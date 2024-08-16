#include "HDAIGroupBehaviorHandler.h"

UHDAIGroupBehaviorHandler::UHDAIGroupBehaviorHandler() {
    this->NavigationHandler = NULL;
    this->CaptureHandler = NULL;
    this->PlayerState = NULL;
    this->bIsGroupLeader = false;
    this->bIsGroupMember = false;
    this->bGroupDataIsSet = false;
    this->bGroupDataIsSynchronized = false;
    this->bLeaderIsHuman = false;
    this->bIsRespawned = false;
    this->NumValidGroupMembers = 0;
    this->NumGroupMembersOnPoint = 0;
    this->bWaitingForGroupMembers = false;
    this->WaitingForMembersStartTime = 0.00f;
    this->bIsGroupWaiting = false;
    this->GroupWaitTimeDuration = 0.00f;
    this->GroupWaitTimeEnd = 0.00f;
    this->WaitingTimePerGroupMember = 3.00f;
    this->WaitingRadiusMultiplier = 1.20f;
    this->MinNumGroupMembersOnPoint = 3;
    this->AdvanceWaitTimeDurationMin = 1.00f;
    this->AdvanceWaitTimeDurationMax = 2.00f;
    this->PatrolWaitTimeDurationMin = 15.00f;
    this->PatrolWaitTimeDurationMax = 25.00f;
    this->FormationIndex = -1;
    this->GroupFormationRadius = 1000.00f;
    this->GroupFormationSlotRadius = 150.00f;
    this->GroupFormationSlotDistance = 800.00f;
    this->FollowHumanLeaderTime = 0.00f;
    this->FollowHumanLeaderPatrolTime = 0.00f;
    this->bEnableFollowHumanLeader = true;
    this->FollowHumanLeaderInterval = 1.50f;
    this->FollowHumanLeaderVelocityMultiplier = 0.00f;
    this->FollowHumanLeaderAcceptanceRadius = 600.00f;
    this->FollowHumanLeaderRange = 300.00f;
    this->FollowHumanLeaderPatrolTimeThreshold = 10.00f;
    this->NumGroupMembersInCombat = 0;
}

void UHDAIGroupBehaviorHandler::SyncGroupData(const FHDAIGroupData& InGroupData) {
}

void UHDAIGroupBehaviorHandler::StartGroupWaitTime() {
}

void UHDAIGroupBehaviorHandler::SetupGroupData() {
}

void UHDAIGroupBehaviorHandler::SetGroupParams() {
}

bool UHDAIGroupBehaviorHandler::RequestGroupDataSync() {
    return false;
}

void UHDAIGroupBehaviorHandler::OnOwnerDeath(APawn* VictimPawn, AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) {
}

bool UHDAIGroupBehaviorHandler::IsGroupWaitTimeOver() {
    return false;
}

void UHDAIGroupBehaviorHandler::InformLeaderOnContact(FVector InCombatTarget, FVector InNavigationAnchor) {
}

void UHDAIGroupBehaviorHandler::InformGroupOnLostContact() {
}

void UHDAIGroupBehaviorHandler::InformGroupOnContact(FVector InCombatTarget, FVector InNavigationAnchor) {
}

int32 UHDAIGroupBehaviorHandler::GetNumValidGroupMembers() const {
    return 0;
}

int32 UHDAIGroupBehaviorHandler::GetNumGroupMembersInCombat() const {
    return 0;
}

TArray<AHDAIController*> UHDAIGroupBehaviorHandler::GetGroupMembers() {
    return TArray<AHDAIController*>();
}

AHDPlayerState* UHDAIGroupBehaviorHandler::GetGroupLeader() {
    return NULL;
}

FHDAIGroupData UHDAIGroupBehaviorHandler::GetGroupData() {
    return FHDAIGroupData{};
}

void UHDAIGroupBehaviorHandler::FollowHumanLeader() {
}

void UHDAIGroupBehaviorHandler::CountGroupMembers() {
}

void UHDAIGroupBehaviorHandler::BroadcastGroupData() {
}

bool UHDAIGroupBehaviorHandler::AllGroupMembersAreOnPoint() {
    return false;
}


