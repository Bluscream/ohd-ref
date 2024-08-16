#pragma once
#include "CoreMinimal.h"
#include "InterpGroup.h"
#include "InterpGroupCamera.generated.h"

class UCameraAnim;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpGroupCamera : public UInterpGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraAnim* CameraAnimInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompressTolerance;
    
    UInterpGroupCamera();

};

