#pragma once
#include "CoreMinimal.h"
#include "PerspectiveAnim.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FPerspectiveAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Anim1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Anim3P;
    
    FPerspectiveAnim();
};

