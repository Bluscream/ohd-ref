#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GOAPNPC -ObjectName=GOAPGoal -FallbackName=GOAPGoal
#include "HDGOAPGoalBase.generated.h"

UCLASS(Abstract, Blueprintable)
class HDMAIN_API UHDGOAPGoalBase : public UGOAPGoal {
    GENERATED_BODY()
public:
    UHDGOAPGoalBase();

};

