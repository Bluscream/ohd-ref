#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Templates/SubclassOf.h"
#include "ArcVehicleDeveloperSettings.generated.h"

class UArcVehiclePlayerSeatComponent;
class UArcVehiclePlayerStateComponent;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class ARCVEHICLES_API UArcVehicleDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArcVehiclePlayerSeatComponent> PlayerSeatComponentClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArcVehiclePlayerStateComponent> PlayerStateComponentClass;
    
    UArcVehicleDeveloperSettings();

};

