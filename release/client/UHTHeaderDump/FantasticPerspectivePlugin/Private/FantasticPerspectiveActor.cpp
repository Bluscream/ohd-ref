#include "FantasticPerspectiveActor.h"

AFantasticPerspectiveActor::AFantasticPerspectiveActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Cache = false;
}

bool AFantasticPerspectiveActor::Apply_Implementation(APlayerController* PlayerController, const EFantasticPerspectiveStereoscopicPass StereoPass, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix) {
    return false;
}


