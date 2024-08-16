#ifndef UE4SS_SDK_FantasticPerspectivePlugin_HPP
#define UE4SS_SDK_FantasticPerspectivePlugin_HPP

#include "FantasticPerspectivePlugin_enums.hpp"

struct FFantasticPerspectiveDebug
{
    bool DrawOriginalFrustum;                                                         // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    FColor OriginalFrustumColor;                                                      // 0x0004 (size: 0x4)
    bool DrawAdjustedFrustum;                                                         // 0x0008 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0009 (size: 0x3)
    FColor AdjustedFrustumColor;                                                      // 0x000C (size: 0x4)
    float LineThickness;                                                              // 0x0010 (size: 0x4)
    float FrustumDepth;                                                               // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FFantasticPerspectiveDollyZoom
{
    float DollyZoom;                                                                  // 0x0000 (size: 0x4)
    float FocalDistance;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FFantasticPerspectiveFrustum
{
    FVector2D LensShift;                                                              // 0x0000 (size: 0x8)
    FVector2D LensTilt;                                                               // 0x0008 (size: 0x8)
    FVector2D PositionShift;                                                          // 0x0010 (size: 0x8)
    FVector2D Skew;                                                                   // 0x0018 (size: 0x8)
    FVector2D PreAspectScale;                                                         // 0x0020 (size: 0x8)
    FVector2D PostAspectScale;                                                        // 0x0028 (size: 0x8)
    FVector2D ClippingPlaneSkew;                                                      // 0x0030 (size: 0x8)
    FFantasticPerspectiveDollyZoom DollyZoom;                                         // 0x0038 (size: 0x8)
    bool CompensateAspectRatio;                                                       // 0x0040 (size: 0x1)
    bool CompensateFOV;                                                               // 0x0041 (size: 0x1)
    bool SeamlessLensTilt;                                                            // 0x0042 (size: 0x1)

}; // Size: 0x44

struct FFantasticPerspectivePoints
{
    bool OverrideViewTransform;                                                       // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    FVector ViewOrigin;                                                               // 0x0004 (size: 0xC)
    float NearClipPlane;                                                              // 0x0010 (size: 0x4)
    float OrthoFrustumDepth;                                                          // 0x0014 (size: 0x4)
    FVector LeftBottom;                                                               // 0x0018 (size: 0xC)
    FVector LeftTop;                                                                  // 0x0024 (size: 0xC)
    FVector RightTop;                                                                 // 0x0030 (size: 0xC)
    FVector RightBottom;                                                              // 0x003C (size: 0xC)

}; // Size: 0x48

struct FFantasticPerspectiveSettings
{
    EFantasticPerspectiveType Type;                                                   // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    FFantasticPerspectiveFrustum Frustum;                                             // 0x0004 (size: 0x44)
    FFantasticPerspectivePoints Points;                                               // 0x0048 (size: 0x48)
    FFantasticPerspectiveTransform Transform;                                         // 0x0090 (size: 0x3C)
    FFantasticPerspectiveDebug Debug;                                                 // 0x00CC (size: 0x18)

}; // Size: 0xE4

struct FFantasticPerspectiveTransform
{
    FVector ViewOriginWorldOffset;                                                    // 0x0000 (size: 0xC)
    FVector WorldTranslation;                                                         // 0x000C (size: 0xC)
    FRotator WorldRotation;                                                           // 0x0018 (size: 0xC)
    FVector LocalTranslation;                                                         // 0x0024 (size: 0xC)
    FRotator LocalRotation;                                                           // 0x0030 (size: 0xC)

}; // Size: 0x3C

class AFantasticPerspectiveActor : public AActor
{
    FFantasticPerspectiveSettings Settings;                                           // 0x0280 (size: 0xE4)
    bool Cache;                                                                       // 0x0364 (size: 0x1)

    bool Apply(class APlayerController* PlayerController, const EFantasticPerspectiveStereoscopicPass StereoPass, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix);
}; // Size: 0x368

class UFantasticPerspectiveComponent : public UActorComponent
{
    FFantasticPerspectiveSettings Settings;                                           // 0x0110 (size: 0xE4)
    bool Cache;                                                                       // 0x01F4 (size: 0x1)

    bool Apply(class APlayerController* PlayerController, const EFantasticPerspectiveStereoscopicPass StereoPass, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix);
}; // Size: 0x1F8

class UFantasticPerspectiveFunctions : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    FRotator WorldToScreenConversionRotator();
    FMatrix WorldToScreenConversionMatrix();
    void SetTransformSettings(FFantasticPerspectiveSettings& Target, const FFantasticPerspectiveTransform Transform);
    void SetFrustumSettings(FFantasticPerspectiveSettings& Target, const FFantasticPerspectiveFrustum Frustum);
    void SetDebugSettings(FFantasticPerspectiveSettings& Target, const FFantasticPerspectiveDebug Debug);
    FRotator ScreenToWorldConversionRotator();
    FMatrix ScreenToWorldConversionMatrix();
    void ResetSettings(FFantasticPerspectiveSettings& Target);
    void ResetCache();
    FFantasticPerspectiveTransform GetTransformSettings(const FFantasticPerspectiveSettings Target);
    FFantasticPerspectiveFrustum GetFrustumSettings(const FFantasticPerspectiveSettings Target);
    FFantasticPerspectiveDebug GetDebugSettings(const FFantasticPerspectiveSettings Target);
    void DrawDebugPositionedFrustum(const class UObject* WorldContextObject, const FVector ViewOrigin, const FMatrix ViewRotationMatrix, const FMatrix ProjectionMatrix, FLinearColor Color, float PerspectiveFrustumDepth, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness);
    void ApplyTransformEffects(FFantasticPerspectiveTransform Transform, FVector ViewOrigin, FMatrix ViewRotationMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix);
    void ApplyToSceneCapture2D(class USceneCaptureComponent2D* SceneCapture, const FVector& ViewOrigin, const FMatrix& ViewRotationMatrix, const FMatrix& ProjectionMatrix);
    void ApplySettingsAndDrawDebug(const class UObject* WorldContextObject, FFantasticPerspectiveSettings Settings, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix);
    void ApplySettings(FFantasticPerspectiveSettings Settings, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix);
    void ApplyPointsBasing(FFantasticPerspectivePoints Settings, FVector ViewOrigin, FMatrix ViewRotationMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix);
    void ApplyFrustumEffects(FFantasticPerspectiveFrustum Frustum, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix);
}; // Size: 0x28

class UFantasticPerspectiveLocalPlayer : public ULocalPlayer
{
    char padding_0[0x258];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x258

#endif
