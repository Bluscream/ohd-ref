#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "DFInfo.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, NotPlaceable, Transient)
class ADFInfo : public AInfo {
    GENERATED_BODY()
public:
    ADFInfo(const FObjectInitializer& ObjectInitializer);

};

