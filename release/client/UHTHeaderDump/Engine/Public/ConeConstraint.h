#pragma once
#include "CoreMinimal.h"
#include "ConstraintBaseParams.h"
#include "EAngularConstraintMotion.h"
#include "ConeConstraint.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FConeConstraint : public FConstraintBaseParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Swing1LimitDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Swing2LimitDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAngularConstraintMotion> Swing1Motion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAngularConstraintMotion> Swing2Motion;
    
    FConeConstraint();
};

