#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FExpressionInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExpressionName;
    
    ENGINE_API FExpressionInput();
};

