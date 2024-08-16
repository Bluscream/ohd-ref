#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSkyAtmosphereLightDiskLuminance.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionSkyAtmosphereLightDiskLuminance : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightIndex;
    
    UMaterialExpressionSkyAtmosphereLightDiskLuminance();

};

