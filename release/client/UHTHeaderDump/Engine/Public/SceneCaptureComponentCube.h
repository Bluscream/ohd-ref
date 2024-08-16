#pragma once
#include "CoreMinimal.h"
#include "SceneCaptureComponent.h"
#include "SceneCaptureComponentCube.generated.h"

class UTextureRenderTarget2D;
class UTextureRenderTargetCube;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USceneCaptureComponentCube : public USceneCaptureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTargetCube* TextureTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCaptureRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTargetCube* TextureTargetLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTargetCube* TextureTargetRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* TextureTargetODS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IPD;
    
    USceneCaptureComponentCube(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CaptureScene();
    
};

