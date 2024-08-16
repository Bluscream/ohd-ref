#pragma once
#include "CoreMinimal.h"
#include "ActiveCameraShakeInfo.generated.h"

class UCameraShake;
class UCameraShakeSourceComponent;

USTRUCT(BlueprintType)
struct FActiveCameraShakeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraShake* ShakeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource;
    
    ENGINE_API FActiveCameraShakeInfo();
};

