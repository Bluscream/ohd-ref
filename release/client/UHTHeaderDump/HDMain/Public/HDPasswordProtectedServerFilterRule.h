#pragma once
#include "CoreMinimal.h"
#include "HDServerListFilterRule.h"
#include "HDPasswordProtectedServerFilterRule.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDPasswordProtectedServerFilterRule : public UHDServerListFilterRule {
    GENERATED_BODY()
public:
    UHDPasswordProtectedServerFilterRule();

};

