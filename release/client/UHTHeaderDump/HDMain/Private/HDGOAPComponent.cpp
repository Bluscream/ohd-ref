#include "HDGOAPComponent.h"
#include "Templates/SubclassOf.h"

UHDGOAPComponent::UHDGOAPComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HDAIOwner = NULL;
    this->HDAICharOwner = NULL;
    this->AIHandlers.AddDefaulted(7);
    this->NavigationHandler = NULL;
    this->CaptureHandler = NULL;
    this->CombatHandler = NULL;
    this->BehaviorHandler = NULL;
    this->GroupBehaviorHandler = NULL;
    this->AimingHandler = NULL;
    this->VocalHandler = NULL;
    this->DecisionFrequency = 1.00f;
}

void UHDGOAPComponent::TargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void UHDGOAPComponent::ResetPlanningTimer() {
}

bool UHDGOAPComponent::IsAIActiveInWorld() const {
    return false;
}

bool UHDGOAPComponent::IsAIActive() const {
    return false;
}

UHDAIHandlerBase* UHDGOAPComponent::GetAIHandler(TSubclassOf<UHDAIHandlerBase> HandlerClass) const {
    return NULL;
}


