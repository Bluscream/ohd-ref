#include "GOAPAction.h"

UGOAPAction::UGOAPAction() {
    this->Cost = 0.00f;
    this->TargetClass = NULL;
    this->Target = NULL;
    this->bActivated = false;
}

bool UGOAPAction::Validate(APawn* Pawn) const {
    return false;
}


bool UGOAPAction::HasCompleted_Implementation(APawn* Pawn) const {
    return false;
}

TArray<AActor*> UGOAPAction::GetTargetsList(const APawn* Pawn) const {
    return TArray<AActor*>();
}

void UGOAPAction::EndAction_Implementation(APawn* Pawn) {
}

bool UGOAPAction::DoAction_Implementation(APawn* Pawn, FString& FailureReason) {
    return false;
}

bool UGOAPAction::CheckProceduralPrecondition_Implementation(APawn* Pawn, bool bPlanning) const {
    return false;
}

void UGOAPAction::BeginAction_Implementation(APawn* Pawn) {
}


