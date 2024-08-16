#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HDTextChatInputWidgetBase.generated.h"

class UDFCommChannel;
class UHDTextChatMsgInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDTextChatInputWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextCommsFormatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDFCommChannel* CurrentTalkChannel;
    
public:
    UHDTextChatInputWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SubmitChatMessage(FText ChatMsgText);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopTalkingOnCurrentChannel();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void StopTalking(UDFCommChannel* CurrentChannel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartTalkingOnChannel(UDFCommChannel* TalkChannel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void StartTalking(UDFCommChannel* NewTalkChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnChatMessageSubmitted(UHDTextChatMsgInfo* SubmittedChatMsg);
    
};

