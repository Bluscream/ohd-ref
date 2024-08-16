#pragma once
#include "CoreMinimal.h"
#include "ParticleReplayTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FParticleReplayTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipIDNumber;
    
    ENGINE_API FParticleReplayTrackKey();
};

