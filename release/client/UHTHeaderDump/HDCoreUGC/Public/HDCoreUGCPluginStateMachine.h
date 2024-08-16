#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HDCoreUGCPluginStateMachineProperties.h"
#include "HDCoreUGCPluginStateMachine.generated.h"

UCLASS(Blueprintable)
class UHDCoreUGCPluginStateMachine : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHDCoreUGCPluginStateMachineProperties StateProperties;
    
public:
    UHDCoreUGCPluginStateMachine();

};

