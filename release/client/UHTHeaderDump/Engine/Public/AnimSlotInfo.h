#pragma once
#include "CoreMinimal.h"
#include "AnimSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnimSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ChannelWeights;
    
    ENGINE_API FAnimSlotInfo();
};

