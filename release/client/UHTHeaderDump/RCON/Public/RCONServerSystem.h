#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RCONServerSystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class RCON_API URCONServerSystem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString ListenAddress;
    
    UPROPERTY(EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    uint16 ListenPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString Password;
    
    UPROPERTY(EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    uint32 MaxActiveConnections;
    
    UPROPERTY(EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    uint32 MaxAuthAttempts;
    
    URCONServerSystem();

    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

