#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FantasticPerspectiveDebug.h"
#include "FantasticPerspectiveFrustum.h"
#include "FantasticPerspectivePoints.h"
#include "FantasticPerspectiveSettings.h"
#include "FantasticPerspectiveTransform.h"
#include "FantasticPerspectiveFunctions.generated.h"

class UObject;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class FANTASTICPERSPECTIVEPLUGIN_API UFantasticPerspectiveFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFantasticPerspectiveFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator WorldToScreenConversionRotator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix WorldToScreenConversionMatrix();
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformSettings(UPARAM(Ref) FFantasticPerspectiveSettings& Target, const FFantasticPerspectiveTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    static void SetFrustumSettings(UPARAM(Ref) FFantasticPerspectiveSettings& Target, const FFantasticPerspectiveFrustum Frustum);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugSettings(UPARAM(Ref) FFantasticPerspectiveSettings& Target, const FFantasticPerspectiveDebug Debug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator ScreenToWorldConversionRotator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix ScreenToWorldConversionMatrix();
    
    UFUNCTION(BlueprintCallable)
    static void ResetSettings(UPARAM(Ref) FFantasticPerspectiveSettings& Target);
    
    UFUNCTION(BlueprintCallable)
    static void ResetCache();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFantasticPerspectiveTransform GetTransformSettings(const FFantasticPerspectiveSettings Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFantasticPerspectiveFrustum GetFrustumSettings(const FFantasticPerspectiveSettings Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFantasticPerspectiveDebug GetDebugSettings(const FFantasticPerspectiveSettings Target);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugPositionedFrustum(const UObject* WorldContextObject, const FVector ViewOrigin, const FMatrix ViewRotationMatrix, const FMatrix ProjectionMatrix, FLinearColor Color, float PerspectiveFrustumDepth, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ApplyTransformEffects(FFantasticPerspectiveTransform Transform, FVector ViewOrigin, FMatrix ViewRotationMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyToSceneCapture2D(USceneCaptureComponent2D* SceneCapture, const FVector& ViewOrigin, const FMatrix& ViewRotationMatrix, const FMatrix& ProjectionMatrix);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplySettingsAndDrawDebug(const UObject* WorldContextObject, FFantasticPerspectiveSettings Settings, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ApplySettings(FFantasticPerspectiveSettings Settings, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ApplyPointsBasing(FFantasticPerspectivePoints Settings, FVector ViewOrigin, FMatrix ViewRotationMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ApplyFrustumEffects(FFantasticPerspectiveFrustum Frustum, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix);
    
};

