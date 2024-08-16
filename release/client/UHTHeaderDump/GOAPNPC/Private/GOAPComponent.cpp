#include "GOAPComponent.h"

UGOAPComponent::UGOAPComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GoalInitial = NULL;
    this->MaxDepth = 100;
    this->AIOwner = NULL;
    this->AIPawnOwner = NULL;
    this->GoalManager = NULL;
}

void UGOAPComponent::UpdateCurrentWorld(const TArray<FAtom>& Atoms) {
}

void UGOAPComponent::SetGoal(UGOAPGoal* NewGoal) {
}

void UGOAPComponent::SetCurrentWorld(const TArray<FAtom>& NewCurrentWorld) {
}

void UGOAPComponent::Reset() {
}


bool UGOAPComponent::IsPlanValid() const {
    return false;
}

void UGOAPComponent::InvalidatePlan() {
}

void UGOAPComponent::InvalidateGoalSelection() {
}

bool UGOAPComponent::HasPlan() const {
    return false;
}

TArray<UGOAPAction*> UGOAPComponent::GetPlanSnapshot() const {
    return TArray<UGOAPAction*>();
}

TArray<FAtom> UGOAPComponent::GetDesiredWorldStateAtoms() const {
    return TArray<FAtom>();
}

TArray<FAtom> UGOAPComponent::GetCurrentWorldStateAtoms() const {
    return TArray<FAtom>();
}

bool UGOAPComponent::GeneratePlan() {
    return false;
}

bool UGOAPComponent::ExecuteGOAP(bool bCreatePlan, bool bRemoveActionOnComplete) {
    return false;
}

void UGOAPComponent::ClearPlan() {
}


