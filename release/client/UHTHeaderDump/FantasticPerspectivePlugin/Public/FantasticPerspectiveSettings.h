#pragma once
#include "CoreMinimal.h"
#include "EFantasticPerspectiveType.h"
#include "FantasticPerspectiveDebug.h"
#include "FantasticPerspectiveFrustum.h"
#include "FantasticPerspectivePoints.h"
#include "FantasticPerspectiveTransform.h"
#include "FantasticPerspectiveSettings.generated.h"

USTRUCT(BlueprintType)
struct FFantasticPerspectiveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EFantasticPerspectiveType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFantasticPerspectiveFrustum Frustum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFantasticPerspectivePoints Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFantasticPerspectiveTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFantasticPerspectiveDebug Debug;
    
    FANTASTICPERSPECTIVEPLUGIN_API FFantasticPerspectiveSettings();
};

