#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "HDCoreUGCSubsystem.generated.h"

class UHDCoreUGCPluginStateMachine;
class UHDCoreUGCProjectPolicies;

UCLASS(Blueprintable)
class HDCOREUGC_API UHDCoreUGCSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UHDCoreUGCPluginStateMachine*> UGCPluginStateMachines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDCoreUGCProjectPolicies* GameSpecificPolicies;
    
public:
    UHDCoreUGCSubsystem();

};

