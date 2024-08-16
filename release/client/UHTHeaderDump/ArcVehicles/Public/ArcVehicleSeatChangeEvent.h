#pragma once
#include "CoreMinimal.h"
#include "ArcVehicleSeatChangeEvent.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct ARCVEHICLES_API FArcVehicleSeatChangeEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* Player;
    
    FArcVehicleSeatChangeEvent();
};

