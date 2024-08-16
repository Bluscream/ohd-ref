#pragma once
#include "CoreMinimal.h"
#include "EVisibilityTrackAction.h"
#include "EVisibilityTrackCondition.h"
#include "VisibilityTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FVisibilityTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVisibilityTrackAction> Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVisibilityTrackCondition> ActiveCondition;
    
    ENGINE_API FVisibilityTrackKey();
};

