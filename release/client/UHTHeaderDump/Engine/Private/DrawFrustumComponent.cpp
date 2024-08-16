#include "DrawFrustumComponent.h"

UDrawFrustumComponent::UDrawFrustumComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bUseEditorCompositing = true;
    this->FrustumAngle = 90.00f;
    this->FrustumAspectRatio = 1.33f;
    this->FrustumStartDist = 100.00f;
    this->FrustumEndDist = 1000.00f;
    this->Texture = NULL;
}


