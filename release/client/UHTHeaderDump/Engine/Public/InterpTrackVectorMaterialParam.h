#pragma once
#include "CoreMinimal.h"
#include "InterpTrackVectorBase.h"
#include "InterpTrackVectorMaterialParam.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> TargetMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UInterpTrackVectorMaterialParam();

};

