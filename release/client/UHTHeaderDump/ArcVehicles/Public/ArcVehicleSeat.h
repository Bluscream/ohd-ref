#pragma once
#include "CoreMinimal.h"
#include "ArcVehiclePawn.h"
#include "ArcVehicleSeat.generated.h"

class UArcVehicleSeatConfig;

UCLASS(Abstract, Blueprintable)
class ARCVEHICLES_API AArcVehicleSeat : public AArcVehiclePawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArcVehicleSeatConfig* SeatConfig;
    
public:
    AArcVehicleSeat(const FObjectInitializer& ObjectInitializer);

};

