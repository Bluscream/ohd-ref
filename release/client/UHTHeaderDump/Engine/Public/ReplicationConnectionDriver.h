#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplicationConnectionDriver.generated.h"

UCLASS(Blueprintable, Transient)
class ENGINE_API UReplicationConnectionDriver : public UObject {
    GENERATED_BODY()
public:
    UReplicationConnectionDriver();

};

