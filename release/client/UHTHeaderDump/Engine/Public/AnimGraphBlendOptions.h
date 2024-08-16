#pragma once
#include "CoreMinimal.h"
#include "AnimGraphBlendOptions.generated.h"

USTRUCT(BlueprintType)
struct FAnimGraphBlendOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    ENGINE_API FAnimGraphBlendOptions();
};

