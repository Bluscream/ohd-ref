#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "HDCoreUGCData.generated.h"

UCLASS(Blueprintable)
class HDCOREUGC_API UHDCoreUGCData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UHDCoreUGCData();

};

