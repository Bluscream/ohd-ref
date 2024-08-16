#include "FantasticPerspectiveComponent.h"

UFantasticPerspectiveComponent::UFantasticPerspectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Cache = false;
}

bool UFantasticPerspectiveComponent::Apply_Implementation(APlayerController* PlayerController, const EFantasticPerspectiveStereoscopicPass StereoPass, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix) {
    return false;
}


