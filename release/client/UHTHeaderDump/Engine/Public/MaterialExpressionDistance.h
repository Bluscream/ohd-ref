#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionDistance.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionDistance : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput A;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput B;
    
    UMaterialExpressionDistance();

};
