#pragma once
#include "CoreMinimal.h"
#include "DebugCameraControllerSettingsViewModeIndex.h"
#include "DeveloperSettings.h"
#include "DebugCameraControllerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class ENGINE_API UDebugCameraControllerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes;
    
    UDebugCameraControllerSettings();

};

