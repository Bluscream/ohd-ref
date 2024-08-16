#pragma once
#include "CoreMinimal.h"
#include "MaterialLayersFunctions.generated.h"

class UMaterialFunctionInterface;

USTRUCT(BlueprintType)
struct ENGINE_API FMaterialLayersFunctions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialFunctionInterface*> Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialFunctionInterface*> Blends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> LayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyString;
    
    FMaterialLayersFunctions();
};

