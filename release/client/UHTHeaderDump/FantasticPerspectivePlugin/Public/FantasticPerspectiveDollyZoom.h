#pragma once
#include "CoreMinimal.h"
#include "FantasticPerspectiveDollyZoom.generated.h"

USTRUCT(BlueprintType)
struct FFantasticPerspectiveDollyZoom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DollyZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FocalDistance;
    
    FANTASTICPERSPECTIVEPLUGIN_API FFantasticPerspectiveDollyZoom();
};

