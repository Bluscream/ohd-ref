#pragma once
#include "CoreMinimal.h"
#include "InterpLookupPoint.generated.h"

USTRUCT(BlueprintType)
struct FInterpLookupPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    ENGINE_API FInterpLookupPoint();
};

