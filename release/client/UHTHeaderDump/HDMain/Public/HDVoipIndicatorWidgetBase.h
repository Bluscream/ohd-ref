#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "UniqueNetIdVoipWrapper.h"
#include "HDVoipIndicatorWidgetBase.generated.h"

class UHDVoiceChatMsgInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDVoipIndicatorWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdVoipWrapper, UHDVoiceChatMsgInfo*> ActiveTalkerMap;
    
public:
    UHDVoipIndicatorWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPlayerStopTalking(UHDVoiceChatMsgInfo* TalkerMsgInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPlayerStartTalking(UHDVoiceChatMsgInfo* TalkerMsgInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOwningPlayerStopTalking(UHDVoiceChatMsgInfo* LocalTalkerMsgInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOwningPlayerStartTalking(UHDVoiceChatMsgInfo* LocalTalkerMsgInfo);
    
};

