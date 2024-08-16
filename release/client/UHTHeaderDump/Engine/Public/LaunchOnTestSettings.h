#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "LaunchOnTestSettings.generated.h"

USTRUCT(BlueprintType)
struct FLaunchOnTestSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath LaunchOnTestmap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    ENGINE_API FLaunchOnTestSettings();
};

