#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingWrapper.generated.h"

class ULevelStreaming;

USTRUCT(BlueprintType)
struct FLevelStreamingWrapper {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* StreamingLevel;
    
public:
    ENGINE_API FLevelStreamingWrapper();
};

