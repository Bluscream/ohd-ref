#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialParameterInfo.h"
#include "MaterialExpressionMaterialFunctionCall.generated.h"

class UMaterialFunctionInterface;

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialFunctionInterface* MaterialFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMaterialParameterInfo FunctionParameterInfo;
    
    UMaterialExpressionMaterialFunctionCall();

};

