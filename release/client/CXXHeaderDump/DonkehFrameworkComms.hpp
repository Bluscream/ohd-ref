#ifndef UE4SS_SDK_DonkehFrameworkComms_HPP
#define UE4SS_SDK_DonkehFrameworkComms_HPP

#include "DonkehFrameworkComms_enums.hpp"

struct FDFChannelMsgRecord
{
    FDFGenericChannelMsg Msg;                                                         // 0x0000 (size: 0x38)
    class UDFCommsFormatBase* MsgFormat;                                              // 0x0038 (size: 0x8)
    class UDFCommChannel* MsgChannel;                                                 // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FDFCommChannelEntry
{
    FSoftObjectPath ChannelDefinition;                                                // 0x0000 (size: 0x18)

}; // Size: 0x18

struct FDFCommChannelMap : public FFastArraySerializer
{
    TArray<FDFCommChannelMapItemEntry> ChannelEntries;                                // 0x0108 (size: 0x10)
    TMap<class FName, class UDFCommChannel*> ChannelMap;                              // 0x0118 (size: 0x50)

}; // Size: 0x170

struct FDFCommChannelMapItemEntry : public FFastArraySerializerItem
{
    FName Key;                                                                        // 0x000C (size: 0x8)
    char padding_0[0x4];                                                              // 0x0014 (size: 0x4)
    class UDFCommChannel* Value;                                                      // 0x0018 (size: 0x8)

}; // Size: 0x28

struct FDFCommStateSetupParams
{
    class UDFCommChannel* OwningChannel;                                              // 0x0000 (size: 0x8)
    class UDFCommChannelDefinition* OwningChannelDefinition;                          // 0x0008 (size: 0x8)
    class UDFPlayerCommsComponent* OwningChannelCommsCompOwner;                       // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FDFCommsFormatEntry
{
    FName FormatName;                                                                 // 0x0000 (size: 0x8)
    FSoftClassPath FormatClass;                                                       // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FDFGenericChannelMsg
{
    FString ChatMsgContent;                                                           // 0x0000 (size: 0x10)
    uint8 bSenderIsTalking;                                                           // 0x0010 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0011 (size: 0x7)
    TArray<FString> OptionalMsgData;                                                  // 0x0018 (size: 0x10)
    class APlayerState* SenderPS;                                                     // 0x0028 (size: 0x8)
    int32 MsgID;                                                                      // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FDFPlayerVOIPTalkingState
{
    uint8 bWasTalking;                                                                // 0x0000 (size: 0x1)
    uint8 bIsTalking;                                                                 // 0x0000 (size: 0x1)
    uint8 bPendingTalkerReset;                                                        // 0x0000 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0001 (size: 0x7)
    class UDFCommChannel* TalkerChannel;                                              // 0x0008 (size: 0x8)

}; // Size: 0x10

class IDFCommChannelStateInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void BP_OnSetupState(const FDFCommStateSetupParams& SetupParams);
}; // Size: 0x28

class UCreateCommChannelCallbackProxy : public UBlueprintAsyncActionBase
{
    FCreateCommChannelCallbackProxyOnPerformSetup OnPerformSetup;                     // 0x0030 (size: 0x10)
    void CommChannelCreationDelegate(class UDFCommChannel* CreatedChannel);
    FCreateCommChannelCallbackProxyOnSuccess OnSuccess;                               // 0x0040 (size: 0x10)
    void CommChannelCreationDelegate(class UDFCommChannel* CreatedChannel);
    FCreateCommChannelCallbackProxyOnFailure OnFailure;                               // 0x0050 (size: 0x10)
    void EmptyCommsDelegate();
    class APlayerController* CreateChannelOwnerPC;                                    // 0x0060 (size: 0x8)
    class UDFCommChannelDefinition* CreateChannelDef;                                 // 0x0068 (size: 0x8)

    class UCreateCommChannelCallbackProxy* CreateCommChannelFor(class APlayerController* Player, const class UDFCommChannelDefinition* ChannelDef, const FName ChannelNameOverride);
}; // Size: 0x88

class UDFCommChannel : public UObject
{
    uint8 bChannelPreInitialized;                                                     // 0x0030 (size: 0x1)
    uint8 bChannelClosed;                                                             // 0x0030 (size: 0x1)
    uint8 bCompletedSetup;                                                            // 0x0030 (size: 0x1)
    uint8 bChannelOpenOnClient;                                                       // 0x0030 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0031 (size: 0x3)
    FName ChannelName;                                                                // 0x0034 (size: 0x8)
    char padding_1[0x4];                                                              // 0x003C (size: 0x4)
    class UDFCommChannelDefinition* ChannelDefinition;                                // 0x0040 (size: 0x8)
    class UObject* ChannelState;                                                      // 0x0048 (size: 0x8)
    TArray<class UDFCommsFormatBase*> AssociatedCommsFormats;                         // 0x0050 (size: 0x10)

    void SetChannelState(class UObject* NewChannelState);
    bool IsReady();
    bool HasFormat(const class UDFCommsFormatBase* Format);
    FString GetChannelNameStr();
    FName GetChannelName();
    FName GetChannelGroupNameIfValid();
    FText GetChannelDisplayName();
}; // Size: 0x90

class UDFCommChannelDefinition : public UDataAsset
{
    FName ChannelName;                                                                // 0x0030 (size: 0x8)
    FText ChannelDisplayName;                                                         // 0x0038 (size: 0x18)
    uint8 bInstanceChannelWithGroup;                                                  // 0x0050 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0051 (size: 0x3)
    FName ChannelGroupName;                                                           // 0x0054 (size: 0x8)
    char padding_1[0x4];                                                              // 0x005C (size: 0x4)
    UClass* ChannelStateClass;                                                        // 0x0060 (size: 0x8)
    TMap<class TSubclassOf<UDFCommsFormatBase>, class EDFCommsFormatAccessRule> FormatAccessRules; // 0x0068 (size: 0x50)

    bool InstancesChannelWithGroup();
}; // Size: 0xB8

class UDFCommChannelStateLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void NotifyChannelOfPreparedState(TScriptInterface<class IDFCommChannelStateInterface> ChannelState);
    bool IsChannelStatePrepared(TScriptInterface<class IDFCommChannelStateInterface> ChannelState);
    class UDFCommChannel* GetOwningCommChannel(TScriptInterface<class IDFCommChannelStateInterface> ChannelState);
}; // Size: 0x28

class UDFCommDeveloperSettings : public UDeveloperSettings
{
    FSoftClassPath PlayerCommsCompClass;                                              // 0x0038 (size: 0x18)
    TSet<FDFCommsFormatEntry> CommsFormatDefinitions;                                 // 0x0050 (size: 0x50)
    TSet<FDFCommChannelEntry> CommChannelDefinitions;                                 // 0x00A0 (size: 0x50)

}; // Size: 0xF0

class UDFCommStatics : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void UpdateExclusiveChannelForFormatByName(class APlayerController* Player, const FName FormatNameToUpdate, const FName SingleChannelNameToUse);
    void UpdateExclusiveChannelForFormat(class APlayerController* Player, class UDFCommsFormatBase* FormatToUpdate, class UDFCommChannel* SingleChannelToUse);
    void SendCommsViaChannelByName(class APlayerController* PlayerSender, const FName FormatName, const FName ReceivingChannelName, FDFGenericChannelMsg& MsgToSend, bool bUseChannelAsNewExclusive);
    void SendCommsViaChannel(class APlayerController* PlayerSender, class UDFCommsFormatBase* FormatToUse, class UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg& MsgToSend, bool bUseChannelAsNewExclusive);
    bool PlayerHasCommChannelByName(const class APlayerController* Player, const FName ChannelName);
    bool PlayerHasCommChannel(const class APlayerController* Player, const class UDFCommChannel* Channel);
    bool FindCommsComponentByPlayer(const class APlayerController* Player, class UDFPlayerCommsComponent*& OutPlayerCommsComp);
    bool CommsFormatUsesChannelByName(const class APlayerController* Player, const FName FormatName, const FName ChannelNameToCheck);
    bool CommsFormatUsesChannel(const class APlayerController* Player, const class UDFCommsFormatBase* Format, const class UDFCommChannel* ChannelToCheck);
    bool CommsFormatHasExclusiveChannelByName(const class APlayerController* PlayerFormatOwner, const FName FormatName);
    bool CommsFormatHasExclusiveChannel(const class UDFCommsFormatBase* Format);
    class UDFCommChannel* CommsFormatGetExclusiveChannelByName(const class APlayerController* PlayerFormatOwner, const FName FormatName);
    class UDFCommChannel* CommsFormatGetExclusiveChannel(const class UDFCommsFormatBase* Format);
    void ClearCurrentExclusiveChannelForFormatByName(class APlayerController* Player, const FName FormatNameToUpdate);
    void ClearCurrentExclusiveChannelForFormat(class APlayerController* Player, class UDFCommsFormatBase* FormatToUpdate);
}; // Size: 0x28

class UDFCommWorldSubsystem : public UWorldSubsystem
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)

    void PostSeamlessTravelPCDestroyed(class AActor* DestroyedPlayerActor);
    class UDFPlayerCommsComponent* InitPlayerComms(class APlayerController* Player);
    void GameModePostLogin(class AGameModeBase* GameMode, class APlayerController* NewPlayer);
}; // Size: 0x30

class UDFCommsFormatBase : public UObject
{
    uint8 bSingleChannelUsageOnly;                                                    // 0x0028 (size: 0x1)
    uint8 bRequiresValidSingleChannelAssignment;                                      // 0x0028 (size: 0x1)
    char padding_0[0x17];                                                             // 0x0029 (size: 0x17)
    FDFGenericChannelMsg LastReceivedCommMsg;                                         // 0x0040 (size: 0x38)
    char padding_1[0x50];                                                             // 0x0078 (size: 0x50)
    FName FormatName;                                                                 // 0x00C8 (size: 0x8)

    bool HasAccessToChannel(const FName ChannelName, const EDFCommsFormatAccessRule AccessRulesToCheck);
    bool CanWriteToChannel(const FName ChannelName);
    bool CanReadFromChannel(const FName ChannelName);
}; // Size: 0xD0

class UDFPlayerCommsComponent : public UActorComponent
{
    TMap<class FName, class UDFCommsFormatBase*> CommsFormats;                        // 0x00B0 (size: 0x50)
    FDFCommChannelMap OpenCommChannels;                                               // 0x0100 (size: 0x170)
    FDFChannelMsgRecord MsgSendBuffer;                                                // 0x0270 (size: 0x1C20)
    TArray<FDFChannelMsgRecord> QueuedMsgsToSend;                                     // 0x1E90 (size: 0x10)
    FDFChannelMsgRecord MsgRecvBuffer;                                                // 0x1EA0 (size: 0x1C20)

    void UpdateExclusiveChannelToUseForCommsFormatByName(const FName& FormatName, const FName& SingleChannelNameToUse);
    void UpdateExclusiveChannelToUseForCommsFormat(class UDFCommsFormatBase* Format, class UDFCommChannel* SingleChannelToUse);
    void ServerUpdateExclusiveChannelToUseForCommsFormat(const FName& FormatName, class UDFCommChannel* SingleChannelToUse);
    void ServerSendCommMsgViaExclChannel(const FName& FormatName, class UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg CommMsg);
    void ServerSendCommMsgViaChannel(const FName& FormatName, class UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg CommMsg);
    void ServerRequestExclusiveChannelUsedForCommsFormat(const FName& RequestedFormatName);
    void ServerClearCurrentExclusiveChannelForCommsFormat(const FName& FormatName);
    void ServerChannelOpened(class UDFCommChannel* AckedChannel);
    void SendCommMsgViaChannelByName(const FName& FormatName, const FName& ReceivingChannelName, FDFGenericChannelMsg& CommMsgToSend, bool bUseChannelAsNewExclusive);
    void SendCommMsgViaChannel(class UDFCommsFormatBase* FormatToUse, class UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg& CommMsgToSend, bool bUseChannelAsNewExclusive);
    void RemoveCommChannelByName(const FName ChannelNameToRemove);
    void RemoveCommChannel(class UDFCommChannel* ChannelToRemove);
    void RemoveAllCommChannels();
    void ReceiveCommChannelPreRemoved(class UDFCommChannel* RemovedChannel);
    void ReceiveCommChannelAdded(class UDFCommChannel* AddedChannel);
    bool FormatUsesChannelByName(const FName& FormatName, const FName& ChannelNameToCheck);
    bool FormatUsesChannel(const class UDFCommsFormatBase* Format, const class UDFCommChannel* ChannelToCheck);
    bool FormatHasExclusiveChannelByName(const FName& FormatName);
    bool FormatHasExclusiveChannel(const class UDFCommsFormatBase* Format);
    bool FindCommChannel(const FName ChannelName, class UDFCommChannel*& OutChannelFound);
    bool FindAssociatedCommsFormat(const FName FormatName, class UDFCommsFormatBase*& OutFormatFound);
    bool ContainsCommChannelByName(const FName ChannelNameToCheck);
    bool ContainsCommChannel(const class UDFCommChannel* ChannelToCheck);
    bool ContainsAssociatedCommsFormat(const FName FormatName);
    void ClientUpdateExclusiveChannelToUseForCommsFormat(const FName& FormatName, class UDFCommChannel* SingleChannelToUse);
    void ClientRecvCommMsgFromChannel(const FName& SourceFormatName, class UDFCommChannel* SourceChannel, const FDFGenericChannelMsg& ReceivedCommMsg);
    void ClientClearCurrentExclusiveChannelForCommsFormat(const FName& FormatName);
    void ClearCurrentExclusiveChannelForCommsFormatByName(const FName& FormatName);
    void ClearCurrentExclusiveChannelForCommsFormat(class UDFCommsFormatBase* Format);
    bool CanSendCommMsgViaChannel(class UDFCommsFormatBase* ReceivingFormat, class UDFCommChannel* ReceivingChannel, const FDFGenericChannelMsg& CommMsgToSend, bool bUseChannelAsNewExclusive);
    bool CanSendAndRecvCommMsgViaChannel(const FName& FormatName, const FName& ChannelName, const FDFGenericChannelMsg& CommMsg);
    bool CanRecvCommMsgViaChannel(const FName& SourceFormatName, const FName& SourceChannelName, const FDFGenericChannelMsg& CommMsgToReceive);
}; // Size: 0x3AC0

class UDFTextCommsFormat : public UDFCommsFormatBase
{
    FDFTextCommsFormatOnChatMsgReceived OnChatMsgReceived;                            // 0x00D0 (size: 0x10)
    void DFTextCommsChatMsgReceivedDelegateMulti(class UDFCommChannel* MsgSourceChannel, class APlayerState* MsgSenderPS, FString MsgContent);

}; // Size: 0xE0

class UDFVOIPCommStatics : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    bool WasPlayerTalking(const class APlayerState* PlayerState);
    bool IsPlayerTalkingOverChannel(const class APlayerState* PlayerState, const class UDFCommChannel* TalkChannel);
    bool IsPlayerTalking(const class APlayerState* PlayerState);
    bool IsPlayerTalkerPendingReset(const class APlayerState* PlayerState);
    class UVoipListenerSynthComponent* GetVoiceSynthOwnerOfAudioComponent(class UAudioComponent* TalkerAudioComp);
    class UVoipListenerSynthComponent* GetVoiceSynthComponentForVOIPTalker(class UVOIPTalker* Talker);
    FDFPlayerVOIPTalkingState GetValidVoiceEntryForPlayer(const class APlayerState* PlayerState);
    void ApplyVOIPTalkerSettingsForPlayer(const class APlayerState* TalkerPlayerState, uint8 ListenerLocalUserNum);
}; // Size: 0x28

class UDFVOIPCommsFormat : public UDFCommsFormatBase
{
    FDFVOIPCommsFormatOnPlayerTalkingStateChangedOnChannel OnPlayerTalkingStateChangedOnChannel; // 0x00D0 (size: 0x10)
    void OnPlayerTalkingStateChangedOnChannelDelegateMulti(class UDFCommChannel* TalkerChannel, class APlayerState* TalkerPS, bool bIsTalking);

    void OnTalkerPSDestroyed(class AActor* DestroyedPS);
}; // Size: 0x100

#endif
