#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ArcVehicleSeatReference.h"
#include "ArcVehicleBPFunctionLibrary.generated.h"

class AArcBaseVehicle;
class UArcVehicleSeatConfig;

UCLASS(Blueprintable)
class ARCVEHICLES_API UArcVehicleBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UArcVehicleBPFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSeatRefValid(FArcVehicleSeatReference SeatRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UArcVehicleSeatConfig* GetVehicleSeatConfigFromRef(FArcVehicleSeatReference SeatRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AArcBaseVehicle* GetVehicleFromSeatConfig(FArcVehicleSeatReference SeatRef);
    
};

