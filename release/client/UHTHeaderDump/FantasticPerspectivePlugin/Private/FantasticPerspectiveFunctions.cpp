#include "FantasticPerspectiveFunctions.h"

UFantasticPerspectiveFunctions::UFantasticPerspectiveFunctions() {
}

FRotator UFantasticPerspectiveFunctions::WorldToScreenConversionRotator() {
    return FRotator{};
}

FMatrix UFantasticPerspectiveFunctions::WorldToScreenConversionMatrix() {
    return FMatrix{};
}

void UFantasticPerspectiveFunctions::SetTransformSettings(FFantasticPerspectiveSettings& Target, const FFantasticPerspectiveTransform Transform) {
}

void UFantasticPerspectiveFunctions::SetFrustumSettings(FFantasticPerspectiveSettings& Target, const FFantasticPerspectiveFrustum Frustum) {
}

void UFantasticPerspectiveFunctions::SetDebugSettings(FFantasticPerspectiveSettings& Target, const FFantasticPerspectiveDebug Debug) {
}

FRotator UFantasticPerspectiveFunctions::ScreenToWorldConversionRotator() {
    return FRotator{};
}

FMatrix UFantasticPerspectiveFunctions::ScreenToWorldConversionMatrix() {
    return FMatrix{};
}

void UFantasticPerspectiveFunctions::ResetSettings(FFantasticPerspectiveSettings& Target) {
}

void UFantasticPerspectiveFunctions::ResetCache() {
}

FFantasticPerspectiveTransform UFantasticPerspectiveFunctions::GetTransformSettings(const FFantasticPerspectiveSettings Target) {
    return FFantasticPerspectiveTransform{};
}

FFantasticPerspectiveFrustum UFantasticPerspectiveFunctions::GetFrustumSettings(const FFantasticPerspectiveSettings Target) {
    return FFantasticPerspectiveFrustum{};
}

FFantasticPerspectiveDebug UFantasticPerspectiveFunctions::GetDebugSettings(const FFantasticPerspectiveSettings Target) {
    return FFantasticPerspectiveDebug{};
}

void UFantasticPerspectiveFunctions::DrawDebugPositionedFrustum(const UObject* WorldContextObject, const FVector ViewOrigin, const FMatrix ViewRotationMatrix, const FMatrix ProjectionMatrix, FLinearColor Color, float PerspectiveFrustumDepth, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UFantasticPerspectiveFunctions::ApplyTransformEffects(FFantasticPerspectiveTransform Transform, FVector ViewOrigin, FMatrix ViewRotationMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix) {
}

void UFantasticPerspectiveFunctions::ApplyToSceneCapture2D(USceneCaptureComponent2D* SceneCapture, const FVector& ViewOrigin, const FMatrix& ViewRotationMatrix, const FMatrix& ProjectionMatrix) {
}

void UFantasticPerspectiveFunctions::ApplySettingsAndDrawDebug(const UObject* WorldContextObject, FFantasticPerspectiveSettings Settings, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix) {
}

void UFantasticPerspectiveFunctions::ApplySettings(FFantasticPerspectiveSettings Settings, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix) {
}

void UFantasticPerspectiveFunctions::ApplyPointsBasing(FFantasticPerspectivePoints Settings, FVector ViewOrigin, FMatrix ViewRotationMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix) {
}

void UFantasticPerspectiveFunctions::ApplyFrustumEffects(FFantasticPerspectiveFrustum Frustum, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix) {
}


