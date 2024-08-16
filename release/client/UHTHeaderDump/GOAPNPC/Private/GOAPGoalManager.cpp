#include "GOAPGoalManager.h"
#include "Templates/SubclassOf.h"

UGOAPGoalManager::UGOAPGoalManager() {
    this->GoalSet = NULL;
    this->CurrentGoal = NULL;
}

void UGOAPGoalManager::UpdateGoalSet(const UGOAPGoalSet* InGoalSet) {
}

void UGOAPGoalManager::SetGoalSet(const UGOAPGoalSet* InGoalSet) {
}

void UGOAPGoalManager::SetCurrentGoal(UGOAPGoal* NewGoal, bool bDeactivatePreviousGoal) {
}

void UGOAPGoalManager::RemoveGoal(const TSubclassOf<UGOAPGoal>& GoalClass) {
}

void UGOAPGoalManager::InvalidatePlan() {
}

void UGOAPGoalManager::InvalidateGoalSelection() {
}

UGOAPComponent* UGOAPGoalManager::GetOuterGOAPComp() const {
    return NULL;
}

TArray<FAtom> UGOAPGoalManager::GetCurrentGoalAtoms() const {
    return TArray<FAtom>();
}

UGOAPGoal* UGOAPGoalManager::FindGoal(const TSubclassOf<UGOAPGoal>& GoalClass) {
    return NULL;
}

void UGOAPGoalManager::ClearGoals() {
}

UGOAPGoal* UGOAPGoalManager::AddGoal(const TSubclassOf<UGOAPGoal>& GoalClass) {
    return NULL;
}


