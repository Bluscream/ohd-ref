#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GOAPNPC -ObjectName=GOAPAction -FallbackName=GOAPAction
#include "HDGOAPActionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class HDMAIN_API UHDGOAPActionBase : public UGOAPAction {
    GENERATED_BODY()
public:
    UHDGOAPActionBase();

};

