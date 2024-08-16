#include "SceneCaptureComponent2D.h"

USceneCaptureComponent2D::USceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ProjectionType = ECameraProjectionMode::Perspective;
    this->FOVAngle = 90.00f;
    this->OrthoWidth = 512.00f;
    this->TextureTarget = NULL;
    this->CompositeMode = SCCM_Overwrite;
    this->PostProcessBlendWeight = 1.00f;
    this->bOverride_CustomNearClippingPlane = false;
    this->CustomNearClippingPlane = 0.00f;
    this->bUseCustomProjectionMatrix = false;
    this->bEnableClipPlane = false;
    this->bCameraCutThisFrame = false;
    this->bConsiderUnrenderedOpaquePixelAsFullyTranslucent = false;
    this->bDisableFlipCopyGLES = false;
}

void USceneCaptureComponent2D::CaptureScene() {
}

void USceneCaptureComponent2D::AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight) {
}


