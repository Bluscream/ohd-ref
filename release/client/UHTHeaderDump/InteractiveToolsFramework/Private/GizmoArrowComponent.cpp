#include "GizmoArrowComponent.h"

UGizmoArrowComponent::UGizmoArrowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Gap = 5.00f;
    this->Length = 60.00f;
    this->Thickness = 2.00f;
}


