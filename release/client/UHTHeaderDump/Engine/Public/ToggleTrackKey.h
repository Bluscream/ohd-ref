#pragma once
#include "CoreMinimal.h"
#include "ETrackToggleAction.h"
#include "ToggleTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FToggleTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETrackToggleAction> ToggleAction;
    
    ENGINE_API FToggleTrackKey();
};

