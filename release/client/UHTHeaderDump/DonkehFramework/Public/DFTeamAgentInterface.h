#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
#include "DFTeamAgentInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDFTeamAgentInterface : public UGenericTeamAgentInterface {
    GENERATED_BODY()
};

class IDFTeamAgentInterface : public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventSetTeamNum(const uint8 NewTeamNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    uint8 EventGetTeamNum() const;
    
};

