#pragma once
#include "CoreMinimal.h"
#include "Distribution.h"
#include "DistributionFloat.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionFloat : public UDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeBaked: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBakedDataSuccesfully: 1;
    
public:
    UDistributionFloat();

};

