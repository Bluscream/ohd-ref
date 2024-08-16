#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFPlayerCameraManager -FallbackName=DFPlayerCameraManager
#include "HDPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class HDMAIN_API AHDPlayerCameraManager : public ADFPlayerCameraManager {
    GENERATED_BODY()
public:
    AHDPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

