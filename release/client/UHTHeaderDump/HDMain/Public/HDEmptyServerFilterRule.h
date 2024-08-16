#pragma once
#include "CoreMinimal.h"
#include "HDServerListFilterRule.h"
#include "HDEmptyServerFilterRule.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDEmptyServerFilterRule : public UHDServerListFilterRule {
    GENERATED_BODY()
public:
    UHDEmptyServerFilterRule();

};

