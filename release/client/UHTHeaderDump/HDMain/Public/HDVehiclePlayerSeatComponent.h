#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ArcVehicles -ObjectName=ArcVehiclePlayerSeatComponent -FallbackName=ArcVehiclePlayerSeatComponent
#include "HDVehiclePlayerSeatComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HDMAIN_API UHDVehiclePlayerSeatComponent : public UArcVehiclePlayerSeatComponent {
    GENERATED_BODY()
public:
    UHDVehiclePlayerSeatComponent(const FObjectInitializer& ObjectInitializer);

};

