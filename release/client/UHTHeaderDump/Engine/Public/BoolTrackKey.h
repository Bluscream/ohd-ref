#pragma once
#include "CoreMinimal.h"
#include "BoolTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FBoolTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value: 1;
    
    ENGINE_API FBoolTrackKey();
};

