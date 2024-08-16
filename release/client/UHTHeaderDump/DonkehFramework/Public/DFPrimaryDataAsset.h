#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "DFPrimaryDataAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API UDFPrimaryDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UDFPrimaryDataAsset();

};

