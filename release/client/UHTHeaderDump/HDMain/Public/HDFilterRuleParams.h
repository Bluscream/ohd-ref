#pragma once
#include "CoreMinimal.h"
#include "EHDFilterRuleBehavior.h"
#include "EHDFilterRuleComparisonOp.h"
#include "HDFilterRuleParams.generated.h"

USTRUCT(BlueprintType)
struct HDMAIN_API FHDFilterRuleParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHDFilterRuleBehavior Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHDFilterRuleComparisonOp ComparisonOp;
    
    FHDFilterRuleParams();
};

