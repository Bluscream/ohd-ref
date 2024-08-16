#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionTextureSample.h"
#include "MaterialExpressionTextureSampleParameter.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class ENGINE_API UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ExpressionGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Group;
    
    UMaterialExpressionTextureSampleParameter();

};

