#include "GOAPGoal.h"

UGOAPGoal::UGOAPGoal() {
    this->RelevanceWeightBase = 0.00f;
    this->RelevanceWeight = 0.00f;
    this->AIOwner = NULL;
}

bool UGOAPGoal::RequiresNewPlan_Implementation() {
    return false;
}

UGOAPGoalManager* UGOAPGoal::GetOuterGoalManager() const {
    return NULL;
}

void UGOAPGoal::GeneratePlanFailure_Implementation() {
}

void UGOAPGoal::Deactivate_Implementation() {
}

void UGOAPGoal::ClearRelevance() {
}

void UGOAPGoal::CalculateRelevance_Implementation() {
}

void UGOAPGoal::Activate_Implementation() {
}


