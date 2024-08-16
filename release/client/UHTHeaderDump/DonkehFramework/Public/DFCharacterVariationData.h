#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "DFCharacterVariation.h"
#include "DFCharacterVariationData.generated.h"

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFCharacterVariationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDFCharacterVariation Variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDFCharacterVariation VariationFPP;
    
    FDFCharacterVariationData();
};

