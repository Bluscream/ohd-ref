#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HDTextChatWidgetBase.generated.h"

class UDFCommChannel;
class UHDTextChatMsgInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDTextChatWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SayAllInputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SayTeamInputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SaySquadInputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SayAllChannelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChatMsgsToCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName LastTalkChannelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHDTextChatMsgInfo*> CurrentChatMsgs;
    
public:
    UHDTextChatWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void StopTalking();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void StartTalking(UDFCommChannel* TalkChannel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetMaxChatMsgsToCache(int32 NumChatMsgsToCache);
    
private:
    UFUNCTION(BlueprintCallable)
    void SayTeamActionPressed();
    
    UFUNCTION(BlueprintCallable)
    void SaySquadActionPressed();
    
    UFUNCTION(BlueprintCallable)
    void SayAllActionPressed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    int32 GetNumCachedChatMsgs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool GetCachedChatMsgAt(int32 MsgIndex, UHDTextChatMsgInfo*& OutFoundMsg);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void DisplayChatMessage(UHDTextChatMsgInfo* NewChatMsg);
    
};

