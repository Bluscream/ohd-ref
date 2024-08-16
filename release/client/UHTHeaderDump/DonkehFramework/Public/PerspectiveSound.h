#pragma once
#include "CoreMinimal.h"
#include "PerspectiveSound.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FPerspectiveSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound3P;
    
    FPerspectiveSound();
};

