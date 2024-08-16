#pragma once
#include "CoreMinimal.h"
#include "KShapeElem.generated.h"

USTRUCT(BlueprintType)
struct FKShapeElem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bContributeToMass: 1;
    
public:
    ENGINE_API FKShapeElem();
};

