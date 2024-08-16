#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EMinimapCaptureResolution.h"
#include "MinimapGenerationSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMinimapGenerationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BoundaryMarkerA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BoundaryMarkerB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundaryMidPointLoc;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMinimapCaptureResolution CaptureResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayableBoundaryLength;
    
    TINKERBOX_API FMinimapGenerationSettings();
};

