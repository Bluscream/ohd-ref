#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DFCfgDataManager.generated.h"

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API UDFCfgDataManager : public UObject {
    GENERATED_BODY()
public:
    UDFCfgDataManager();

};

