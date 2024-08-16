#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DFCommChannelStateLibrary.generated.h"

class IDFCommChannelStateInterface;
class UDFCommChannelStateInterface;
class UDFCommChannel;

UCLASS(Blueprintable)
class DONKEHFRAMEWORKCOMMS_API UDFCommChannelStateLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDFCommChannelStateLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void NotifyChannelOfPreparedState(TScriptInterface<IDFCommChannelStateInterface> ChannelState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChannelStatePrepared(TScriptInterface<IDFCommChannelStateInterface> ChannelState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDFCommChannel* GetOwningCommChannel(TScriptInterface<IDFCommChannelStateInterface> ChannelState);
    
};

