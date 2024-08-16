#pragma once
#include "CoreMinimal.h"
#include "VehicleNWWheelDifferentialData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleNWWheelDifferentialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDriven;
    
    OWIENHANCEDVEHICLEMOVEMENT_API FVehicleNWWheelDifferentialData();
};

