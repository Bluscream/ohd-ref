#pragma once
#include "CoreMinimal.h"
#include "EventTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FEventTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    ENGINE_API FEventTrackKey();
};

