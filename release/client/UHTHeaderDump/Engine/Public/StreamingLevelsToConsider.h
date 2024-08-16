#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingWrapper.h"
#include "StreamingLevelsToConsider.generated.h"

USTRUCT(BlueprintType)
struct FStreamingLevelsToConsider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelStreamingWrapper> StreamingLevels;
    
public:
    ENGINE_API FStreamingLevelsToConsider();
};

