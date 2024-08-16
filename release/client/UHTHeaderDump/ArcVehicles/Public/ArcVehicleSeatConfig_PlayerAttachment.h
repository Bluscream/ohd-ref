#pragma once
#include "CoreMinimal.h"
#include "ArcVehicleSeatConfig.h"
#include "ArcVehicleSeatConfig_PlayerAttachment.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARCVEHICLES_API UArcVehicleSeatConfig_PlayerAttachment : public UArcVehicleSeatConfig {
    GENERATED_BODY()
public:
    UArcVehicleSeatConfig_PlayerAttachment(const FObjectInitializer& ObjectInitializer);

};

