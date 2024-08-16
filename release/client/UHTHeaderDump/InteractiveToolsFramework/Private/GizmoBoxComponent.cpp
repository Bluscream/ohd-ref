#include "GizmoBoxComponent.h"

UGizmoBoxComponent::UGizmoBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LineThickness = 2.00f;
    this->bRemoveHiddenLines = true;
    this->bEnableAxisFlip = true;
}


