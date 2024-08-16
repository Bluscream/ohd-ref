#pragma once
#include "CoreMinimal.h"
#include "HDServerListFilterRule.h"
#include "HDSupportersOnlyServerFilterRule.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDSupportersOnlyServerFilterRule : public UHDServerListFilterRule {
    GENERATED_BODY()
public:
    UHDSupportersOnlyServerFilterRule();

};

