#pragma once
#include "CoreMinimal.h"
#include "DFCommsFormatBase.h"
#include "OnPlayerTalkingStateChangedOnChannelDelegateMultiDelegate.h"
#include "DFVOIPCommsFormat.generated.h"

class AActor;

UCLASS(Blueprintable)
class DONKEHFRAMEWORKCOMMS_API UDFVOIPCommsFormat : public UDFCommsFormatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerTalkingStateChangedOnChannelDelegateMulti OnPlayerTalkingStateChangedOnChannel;
    
    UDFVOIPCommsFormat();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTalkerPSDestroyed(AActor* DestroyedPS);
    
};

