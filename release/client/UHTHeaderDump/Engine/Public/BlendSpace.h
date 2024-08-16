#pragma once
#include "CoreMinimal.h"
#include "BlendSpaceBase.h"
#include "EBlendSpaceAxis.h"
#include "BlendSpace.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlendSpace : public UBlendSpaceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBlendSpaceAxis> AxisToScaleAnimation;
    
public:
    UBlendSpace();

};

