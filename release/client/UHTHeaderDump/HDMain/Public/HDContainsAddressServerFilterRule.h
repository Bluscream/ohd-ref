#pragma once
#include "CoreMinimal.h"
#include "HDServerListFilterRule.h"
#include "HDContainsAddressServerFilterRule.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDContainsAddressServerFilterRule : public UHDServerListFilterRule {
    GENERATED_BODY()
public:
    UHDContainsAddressServerFilterRule();

};

