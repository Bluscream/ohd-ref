#pragma once
#include "CoreMinimal.h"
#include "TireFrictionScalePair.generated.h"

class UTireType;

USTRUCT(BlueprintType)
struct FTireFrictionScalePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTireType* TireType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrictionScale;
    
    ENGINE_API FTireFrictionScalePair();
};

