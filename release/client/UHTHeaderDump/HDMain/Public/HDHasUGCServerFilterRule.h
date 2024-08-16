#pragma once
#include "CoreMinimal.h"
#include "HDServerListFilterRule.h"
#include "HDHasUGCServerFilterRule.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDHasUGCServerFilterRule : public UHDServerListFilterRule {
    GENERATED_BODY()
public:
    UHDHasUGCServerFilterRule();

};

