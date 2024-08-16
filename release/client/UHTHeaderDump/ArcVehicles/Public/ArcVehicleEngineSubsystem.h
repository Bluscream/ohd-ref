#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "ArcVehicleEngineSubsystem.generated.h"

UCLASS(Blueprintable)
class ARCVEHICLES_API UArcVehicleEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UArcVehicleEngineSubsystem();

};

