#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialDamageParams -FallbackName=RadialDamageParams
#include "DFDamageParams.generated.h"

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFDamageParams : public FRadialDamageParams {
    GENERATED_BODY()
public:
    FDFDamageParams();
};

