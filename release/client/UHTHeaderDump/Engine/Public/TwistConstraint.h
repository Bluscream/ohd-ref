#pragma once
#include "CoreMinimal.h"
#include "ConstraintBaseParams.h"
#include "EAngularConstraintMotion.h"
#include "TwistConstraint.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FTwistConstraint : public FConstraintBaseParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TwistLimitDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAngularConstraintMotion> TwistMotion;
    
    FTwistConstraint();
};

