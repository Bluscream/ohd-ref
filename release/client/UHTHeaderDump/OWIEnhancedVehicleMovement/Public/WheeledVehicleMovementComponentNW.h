#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysXVehicles -ObjectName=WheeledVehicleMovementComponent -FallbackName=WheeledVehicleMovementComponent
#include "VehicleNWEngineData.h"
#include "VehicleNWTransmissionData.h"
#include "VehicleNWWheelDifferentialData.h"
#include "WheeledVehicleMovementComponentNW.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWheeledVehicleMovementComponentNW : public UWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleNWEngineData EngineSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleNWWheelDifferentialData> DifferentialSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleNWTransmissionData TransmissionSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SteeringCurve;
    
    UWheeledVehicleMovementComponentNW(const FObjectInitializer& ObjectInitializer);

};

