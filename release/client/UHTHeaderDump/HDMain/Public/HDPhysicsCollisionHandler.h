#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFPhysicsCollisionHandler -FallbackName=DFPhysicsCollisionHandler
#include "HDPhysicsCollisionHandler.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDPhysicsCollisionHandler : public UDFPhysicsCollisionHandler {
    GENERATED_BODY()
public:
    UHDPhysicsCollisionHandler();

};

