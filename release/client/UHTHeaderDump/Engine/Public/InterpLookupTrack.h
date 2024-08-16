#pragma once
#include "CoreMinimal.h"
#include "InterpLookupPoint.h"
#include "InterpLookupTrack.generated.h"

USTRUCT(BlueprintType)
struct FInterpLookupTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterpLookupPoint> Points;
    
    ENGINE_API FInterpLookupTrack();
};

