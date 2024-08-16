#pragma once
#include "CoreMinimal.h"
#include "PerspectiveAnimSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FPerspectiveAnimSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Anim1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Anim3P;
    
    FPerspectiveAnimSequence();
};

