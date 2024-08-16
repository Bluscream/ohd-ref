#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFCharacterVariationData -FallbackName=DFCharacterVariationData
#include "HDCharacterVariationData.generated.h"

USTRUCT(BlueprintType)
struct HDMAIN_API FHDCharacterVariationData : public FDFCharacterVariationData {
    GENERATED_BODY()
public:
    FHDCharacterVariationData();
};

