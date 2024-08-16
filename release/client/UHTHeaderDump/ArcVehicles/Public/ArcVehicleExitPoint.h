#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ArcVehicleExitPoint.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARCVEHICLES_API UArcVehicleExitPoint : public USceneComponent {
    GENERATED_BODY()
public:
    UArcVehicleExitPoint(const FObjectInitializer& ObjectInitializer);

};

