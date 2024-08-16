#pragma once
#include "CoreMinimal.h"
#include "InterpTrackFloatBase.h"
#include "InterpTrackFloatMaterialParam.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> TargetMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UInterpTrackFloatMaterialParam();

};

