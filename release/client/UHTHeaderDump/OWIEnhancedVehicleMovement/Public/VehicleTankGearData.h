#pragma once
#include "CoreMinimal.h"
#include "VehicleTankGearData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleTankGearData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpRatio;
    
    OWIENHANCEDVEHICLEMOVEMENT_API FVehicleTankGearData();
};

