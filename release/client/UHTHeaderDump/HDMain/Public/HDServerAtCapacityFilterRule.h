#pragma once
#include "CoreMinimal.h"
#include "HDServerListFilterRule.h"
#include "HDServerAtCapacityFilterRule.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDServerAtCapacityFilterRule : public UHDServerListFilterRule {
    GENERATED_BODY()
public:
    UHDServerAtCapacityFilterRule();

};

