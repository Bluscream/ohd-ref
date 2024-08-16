#pragma once
#include "CoreMinimal.h"
#include "DecalData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FDecalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    DONKEHFRAMEWORK_API FDecalData();
};

