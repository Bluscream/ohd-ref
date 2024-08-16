#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettings.h"
#include "NetworkEmulationProfileDescription.h"
#include "NetworkSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class ENGINE_API UNetworkSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bVerifyPeer: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableMultiplayerWorldOriginRebasing: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRepArraySize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRepArrayMemory;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles;
    
    UNetworkSettings();

};

