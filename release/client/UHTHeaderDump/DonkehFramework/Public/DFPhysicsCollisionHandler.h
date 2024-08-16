#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicsCollisionHandler -FallbackName=PhysicsCollisionHandler
#include "DFPhysicsCollisionHandler.generated.h"

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API UDFPhysicsCollisionHandler : public UPhysicsCollisionHandler {
    GENERATED_BODY()
public:
    UDFPhysicsCollisionHandler();

};

