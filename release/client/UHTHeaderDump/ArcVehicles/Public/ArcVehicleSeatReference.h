#pragma once
#include "CoreMinimal.h"
#include "ArcVehicleSeatReference.generated.h"

class AArcBaseVehicle;

USTRUCT(BlueprintType)
struct ARCVEHICLES_API FArcVehicleSeatReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AArcBaseVehicle* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeatID;
    
    FArcVehicleSeatReference();
};

