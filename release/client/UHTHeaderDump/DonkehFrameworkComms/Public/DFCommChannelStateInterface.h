#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DFCommStateSetupParams.h"
#include "DFCommChannelStateInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDFCommChannelStateInterface : public UInterface {
    GENERATED_BODY()
};

class IDFCommChannelStateInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSetupState(const FDFCommStateSetupParams& SetupParams);
    
};

