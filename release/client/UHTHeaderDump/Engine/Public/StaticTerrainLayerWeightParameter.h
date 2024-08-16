#pragma once
#include "CoreMinimal.h"
#include "StaticParameterBase.h"
#include "StaticTerrainLayerWeightParameter.generated.h"

USTRUCT(BlueprintType)
struct FStaticTerrainLayerWeightParameter : public FStaticParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeightmapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeightBasedBlend;
    
    ENGINE_API FStaticTerrainLayerWeightParameter();
};

