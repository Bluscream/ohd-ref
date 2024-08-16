#include "GizmoBaseComponent.h"

UGizmoBaseComponent::UGizmoBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HoverSizeMultiplier = 2.00f;
    this->PixelHitDistanceThreshold = 7.00f;
}

void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn) {
}

void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn) {
}


