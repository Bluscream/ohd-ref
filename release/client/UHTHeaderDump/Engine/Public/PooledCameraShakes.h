#pragma once
#include "CoreMinimal.h"
#include "PooledCameraShakes.generated.h"

class UCameraShake;

USTRUCT(BlueprintType)
struct FPooledCameraShakes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCameraShake*> PooledShakes;
    
    ENGINE_API FPooledCameraShakes();
};

