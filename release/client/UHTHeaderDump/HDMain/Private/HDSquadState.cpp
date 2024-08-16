#include "HDSquadState.h"
#include "HDSquadHiddenState.h"
#include "Net/UnrealNetwork.h"

AHDSquadState::AHDSquadState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = false;
    this->bInitialized = false;
    this->SquadHiddenStateClass = AHDSquadHiddenState::StaticClass();
    this->ID = -1;
    this->TeamId = 255;
    this->OwnerPlatoon = NULL;
    this->SquadHiddenState = NULL;
    this->SquadLeader = NULL;
    this->bLocked = false;
    this->bRequiresSquadLeader = true;
    this->bDisbandSquadOnEmpty = true;
    this->MaxSquadMemberLimit = 9;
}

bool AHDSquadState::UnregisterSquadMemberAt(int32 RemoveIdx) {
    return false;
}

bool AHDSquadState::UnregisterSquadMember(AHDPlayerState* MemberPSToRemove) {
    return false;
}

bool AHDSquadState::UnregisterPlayerSquadMember(const AHDPlayerController* MemberPCToRemove) {
    return false;
}

void AHDSquadState::UnlockSquad() {
}

void AHDSquadState::SquadMemberPSTeamUpdated(APlayerState* MemberPS, uint8 LastTeamNum, uint8 NewTeamNum) {
}

void AHDSquadState::SquadMemberPSSquadUpdated(AHDPlayerState* MemberPS, const FHDSquadAssignmentInfo& MemberSQInfo) {
}

void AHDSquadState::SquadMemberPSEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AHDSquadState::RenameSquad(const FText& NewDisplayName) {
}

void AHDSquadState::RemoveFromOwner() {
}

bool AHDSquadState::RegisterSquadMember(AHDPlayerState* NewMemberPS) {
    return false;
}

bool AHDSquadState::RegisterPlayerSquadMember(const AHDPlayerController* NewMemberPC) {
    return false;
}








void AHDSquadState::OnRep_SquadLeader(AHDPlayerState* PrevSquadLeader) {
}

void AHDSquadState::OnRep_SquadHiddenState() {
}

void AHDSquadState::OnRep_DisplayName(const FText& PrevDisplayName) {
}

void AHDSquadState::OnRep_bLocked() {
}

void AHDSquadState::LockSquad() {
}

bool AHDSquadState::IsRegisteredSquadMember(const AHDPlayerState* PS, bool bIgnorePendingRemoval) const {
    return false;
}

bool AHDSquadState::IsPlayerRegisteredSquadMember(const AHDPlayerController* PC, bool bIgnorePendingRemoval) const {
    return false;
}

bool AHDSquadState::IsPlayerPendingRemovalFromSquad(const AHDPlayerController* PC) const {
    return false;
}

bool AHDSquadState::IsPendingRemovalFromSquad(const AHDPlayerState* PS) const {
    return false;
}

bool AHDSquadState::HasReachedMaxSquadMemberLimit() const {
    return false;
}

AHDPlayerState* AHDSquadState::GetSquadMemberAt(int32 Index, bool bIgnorePendingRemoval) const {
    return NULL;
}

int32 AHDSquadState::GetNumSquadMembersBots(bool bValidMembersOnly) const {
    return 0;
}

int32 AHDSquadState::GetNumSquadMembers(bool bValidMembersOnly) const {
    return 0;
}

void AHDSquadState::DumpSquadMemberState() const {
}

bool AHDSquadState::CanRegisterSquadMember(const AHDPlayerState* NewMemberPS) const {
    return false;
}

bool AHDSquadState::CanRegisterPlayerSquadMember(const AHDPlayerController* NewMemberPC) const {
    return false;
}

bool AHDSquadState::AssignSquadLeader(AHDPlayerState* NewLeaderPS) {
    return false;
}

void AHDSquadState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHDSquadState, TeamId);
    DOREPLIFETIME(AHDSquadState, OwnerPlatoon);
    DOREPLIFETIME(AHDSquadState, DisplayName);
    DOREPLIFETIME(AHDSquadState, SquadHiddenState);
    DOREPLIFETIME(AHDSquadState, SquadLeader);
    DOREPLIFETIME(AHDSquadState, bLocked);
    DOREPLIFETIME(AHDSquadState, SquadMembers);
}


