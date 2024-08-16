#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DFChannelMsgRecord.h"
#include "DFCommChannelMap.h"
#include "DFGenericChannelMsg.h"
#include "DFPlayerCommsComponent.generated.h"

class UDFCommChannel;
class UDFCommsFormatBase;

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerController, meta=(BlueprintSpawnableComponent))
class DONKEHFRAMEWORKCOMMS_API UDFPlayerCommsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UDFCommsFormatBase*> CommsFormats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDFCommChannelMap OpenCommChannels;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDFChannelMsgRecord MsgSendBuffer[100];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDFChannelMsgRecord> QueuedMsgsToSend;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDFChannelMsgRecord MsgRecvBuffer[100];
    
public:
    UDFPlayerCommsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateExclusiveChannelToUseForCommsFormatByName(const FName& FormatName, const FName& SingleChannelNameToUse);
    
    UFUNCTION(BlueprintCallable)
    void UpdateExclusiveChannelToUseForCommsFormat(UDFCommsFormatBase* Format, UDFCommChannel* SingleChannelToUse);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateExclusiveChannelToUseForCommsFormat(const FName& FormatName, UDFCommChannel* SingleChannelToUse);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendCommMsgViaExclChannel(const FName& FormatName, UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg CommMsg);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendCommMsgViaChannel(const FName& FormatName, UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg CommMsg);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestExclusiveChannelUsedForCommsFormat(const FName& RequestedFormatName);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerClearCurrentExclusiveChannelForCommsFormat(const FName& FormatName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerChannelOpened(UDFCommChannel* AckedChannel);
    
public:
    UFUNCTION(BlueprintCallable)
    void SendCommMsgViaChannelByName(const FName& FormatName, const FName& ReceivingChannelName, FDFGenericChannelMsg& CommMsgToSend, bool bUseChannelAsNewExclusive);
    
    UFUNCTION(BlueprintCallable)
    void SendCommMsgViaChannel(UDFCommsFormatBase* FormatToUse, UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg& CommMsgToSend, bool bUseChannelAsNewExclusive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveCommChannelByName(const FName ChannelNameToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveCommChannel(UDFCommChannel* ChannelToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAllCommChannels();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveCommChannelPreRemoved(UDFCommChannel* RemovedChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveCommChannelAdded(UDFCommChannel* AddedChannel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FormatUsesChannelByName(const FName& FormatName, const FName& ChannelNameToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FormatUsesChannel(const UDFCommsFormatBase* Format, const UDFCommChannel* ChannelToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FormatHasExclusiveChannelByName(const FName& FormatName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FormatHasExclusiveChannel(const UDFCommsFormatBase* Format) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindCommChannel(const FName ChannelName, UDFCommChannel*& OutChannelFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindAssociatedCommsFormat(const FName FormatName, UDFCommsFormatBase*& OutFormatFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsCommChannelByName(const FName ChannelNameToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsCommChannel(const UDFCommChannel* ChannelToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsAssociatedCommsFormat(const FName FormatName) const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateExclusiveChannelToUseForCommsFormat(const FName& FormatName, UDFCommChannel* SingleChannelToUse);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRecvCommMsgFromChannel(const FName& SourceFormatName, UDFCommChannel* SourceChannel, const FDFGenericChannelMsg& ReceivedCommMsg);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearCurrentExclusiveChannelForCommsFormat(const FName& FormatName);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearCurrentExclusiveChannelForCommsFormatByName(const FName& FormatName);
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentExclusiveChannelForCommsFormat(UDFCommsFormatBase* Format);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSendCommMsgViaChannel(UDFCommsFormatBase* ReceivingFormat, UDFCommChannel* ReceivingChannel, const FDFGenericChannelMsg& CommMsgToSend, bool bUseChannelAsNewExclusive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSendAndRecvCommMsgViaChannel(const FName& FormatName, const FName& ChannelName, const FDFGenericChannelMsg& CommMsg) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRecvCommMsgViaChannel(const FName& SourceFormatName, const FName& SourceChannelName, const FDFGenericChannelMsg& CommMsgToReceive) const;
    
};

