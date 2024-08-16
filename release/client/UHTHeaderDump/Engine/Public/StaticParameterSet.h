#pragma once
#include "CoreMinimal.h"
#include "StaticComponentMaskParameter.h"
#include "StaticMaterialLayersParameter.h"
#include "StaticSwitchParameter.h"
#include "StaticTerrainLayerWeightParameter.h"
#include "StaticParameterSet.generated.h"

USTRUCT(BlueprintType)
struct FStaticParameterSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticSwitchParameter> StaticSwitchParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticMaterialLayersParameter> MaterialLayersParameters;
    
    ENGINE_API FStaticParameterSet();
};

