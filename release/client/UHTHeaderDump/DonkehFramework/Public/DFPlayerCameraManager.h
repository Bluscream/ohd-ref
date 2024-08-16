#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "DFPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class DONKEHFRAMEWORK_API ADFPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimInterpSpeed;
    
    ADFPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

