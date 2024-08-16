#include "SceneCaptureComponentCube.h"

USceneCaptureComponentCube::USceneCaptureComponentCube(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->TextureTarget = NULL;
    this->bCaptureRotation = false;
    this->TextureTargetLeft = NULL;
    this->TextureTargetRight = NULL;
    this->TextureTargetODS = NULL;
    this->IPD = 6.20f;
}

void USceneCaptureComponentCube::CaptureScene() {
}


