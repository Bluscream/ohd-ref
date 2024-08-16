#pragma once
#include "CoreMinimal.h"
#include "DFInfo.h"
#include "DFReplInfo.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, NonTransient)
class ADFReplInfo : public ADFInfo {
    GENERATED_BODY()
public:
    ADFReplInfo(const FObjectInitializer& ObjectInitializer);

};

