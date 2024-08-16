#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PendingNetGame.generated.h"

class UDemoNetDriver;
class UNetDriver;

UCLASS(Blueprintable, Transient)
class UPendingNetGame : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetDriver* NetDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDemoNetDriver* DemoNetDriver;
    
    UPendingNetGame();

};

