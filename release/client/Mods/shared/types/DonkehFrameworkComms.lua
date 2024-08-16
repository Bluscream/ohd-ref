---@meta

---@class FDFChannelMsgRecord
---@field Msg FDFGenericChannelMsg
---@field MsgFormat UDFCommsFormatBase
---@field MsgChannel UDFCommChannel
FDFChannelMsgRecord = {}



---@class FDFCommChannelEntry
---@field ChannelDefinition FSoftObjectPath
FDFCommChannelEntry = {}



---@class FDFCommChannelMap : FFastArraySerializer
---@field ChannelEntries TArray<FDFCommChannelMapItemEntry>
---@field ChannelMap TMap<FName, UDFCommChannel>
FDFCommChannelMap = {}



---@class FDFCommChannelMapItemEntry : FFastArraySerializerItem
---@field Key FName
---@field Value UDFCommChannel
FDFCommChannelMapItemEntry = {}



---@class FDFCommStateSetupParams
---@field OwningChannel UDFCommChannel
---@field OwningChannelDefinition UDFCommChannelDefinition
---@field OwningChannelCommsCompOwner UDFPlayerCommsComponent
FDFCommStateSetupParams = {}



---@class FDFCommsFormatEntry
---@field FormatName FName
---@field FormatClass FSoftClassPath
FDFCommsFormatEntry = {}



---@class FDFGenericChannelMsg
---@field ChatMsgContent FString
---@field bSenderIsTalking boolean
---@field OptionalMsgData TArray<FString>
---@field SenderPS APlayerState
---@field MsgID int32
FDFGenericChannelMsg = {}



---@class FDFPlayerVOIPTalkingState
---@field bWasTalking boolean
---@field bIsTalking boolean
---@field bPendingTalkerReset boolean
---@field TalkerChannel UDFCommChannel
FDFPlayerVOIPTalkingState = {}



---@class IDFCommChannelStateInterface : IInterface
IDFCommChannelStateInterface = {}

---@param SetupParams FDFCommStateSetupParams
function IDFCommChannelStateInterface:BP_OnSetupState(SetupParams) end


---@class UCreateCommChannelCallbackProxy : UBlueprintAsyncActionBase
---@field OnPerformSetup FCreateCommChannelCallbackProxyOnPerformSetup
---@field OnSuccess FCreateCommChannelCallbackProxyOnSuccess
---@field OnFailure FCreateCommChannelCallbackProxyOnFailure
---@field CreateChannelOwnerPC APlayerController
---@field CreateChannelDef UDFCommChannelDefinition
UCreateCommChannelCallbackProxy = {}

---@param Player APlayerController
---@param ChannelDef UDFCommChannelDefinition
---@param ChannelNameOverride FName
---@return UCreateCommChannelCallbackProxy
function UCreateCommChannelCallbackProxy:CreateCommChannelFor(Player, ChannelDef, ChannelNameOverride) end


---@class UDFCommChannel : UObject
---@field bChannelPreInitialized boolean
---@field bChannelClosed boolean
---@field bCompletedSetup boolean
---@field bChannelOpenOnClient boolean
---@field ChannelName FName
---@field ChannelDefinition UDFCommChannelDefinition
---@field ChannelState UObject
---@field AssociatedCommsFormats TArray<UDFCommsFormatBase>
UDFCommChannel = {}

---@param NewChannelState UObject
function UDFCommChannel:SetChannelState(NewChannelState) end
---@return boolean
function UDFCommChannel:IsReady() end
---@param Format UDFCommsFormatBase
---@return boolean
function UDFCommChannel:HasFormat(Format) end
---@return FString
function UDFCommChannel:GetChannelNameStr() end
---@return FName
function UDFCommChannel:GetChannelName() end
---@return FName
function UDFCommChannel:GetChannelGroupNameIfValid() end
---@return FText
function UDFCommChannel:GetChannelDisplayName() end


---@class UDFCommChannelDefinition : UDataAsset
---@field ChannelName FName
---@field ChannelDisplayName FText
---@field bInstanceChannelWithGroup boolean
---@field ChannelGroupName FName
---@field ChannelStateClass UClass
---@field FormatAccessRules TMap<TSubclassOf<UDFCommsFormatBase>, EDFCommsFormatAccessRule>
UDFCommChannelDefinition = {}

---@return boolean
function UDFCommChannelDefinition:InstancesChannelWithGroup() end


---@class UDFCommChannelStateLibrary : UBlueprintFunctionLibrary
UDFCommChannelStateLibrary = {}

---@param ChannelState TScriptInterface<IDFCommChannelStateInterface>
function UDFCommChannelStateLibrary:NotifyChannelOfPreparedState(ChannelState) end
---@param ChannelState TScriptInterface<IDFCommChannelStateInterface>
---@return boolean
function UDFCommChannelStateLibrary:IsChannelStatePrepared(ChannelState) end
---@param ChannelState TScriptInterface<IDFCommChannelStateInterface>
---@return UDFCommChannel
function UDFCommChannelStateLibrary:GetOwningCommChannel(ChannelState) end


---@class UDFCommDeveloperSettings : UDeveloperSettings
---@field PlayerCommsCompClass FSoftClassPath
---@field CommsFormatDefinitions TSet<FDFCommsFormatEntry>
---@field CommChannelDefinitions TSet<FDFCommChannelEntry>
UDFCommDeveloperSettings = {}



---@class UDFCommStatics : UBlueprintFunctionLibrary
UDFCommStatics = {}

---@param Player APlayerController
---@param FormatNameToUpdate FName
---@param SingleChannelNameToUse FName
function UDFCommStatics:UpdateExclusiveChannelForFormatByName(Player, FormatNameToUpdate, SingleChannelNameToUse) end
---@param Player APlayerController
---@param FormatToUpdate UDFCommsFormatBase
---@param SingleChannelToUse UDFCommChannel
function UDFCommStatics:UpdateExclusiveChannelForFormat(Player, FormatToUpdate, SingleChannelToUse) end
---@param PlayerSender APlayerController
---@param FormatName FName
---@param ReceivingChannelName FName
---@param MsgToSend FDFGenericChannelMsg
---@param bUseChannelAsNewExclusive boolean
function UDFCommStatics:SendCommsViaChannelByName(PlayerSender, FormatName, ReceivingChannelName, MsgToSend, bUseChannelAsNewExclusive) end
---@param PlayerSender APlayerController
---@param FormatToUse UDFCommsFormatBase
---@param ReceivingChannel UDFCommChannel
---@param MsgToSend FDFGenericChannelMsg
---@param bUseChannelAsNewExclusive boolean
function UDFCommStatics:SendCommsViaChannel(PlayerSender, FormatToUse, ReceivingChannel, MsgToSend, bUseChannelAsNewExclusive) end
---@param Player APlayerController
---@param ChannelName FName
---@return boolean
function UDFCommStatics:PlayerHasCommChannelByName(Player, ChannelName) end
---@param Player APlayerController
---@param Channel UDFCommChannel
---@return boolean
function UDFCommStatics:PlayerHasCommChannel(Player, Channel) end
---@param Player APlayerController
---@param OutPlayerCommsComp UDFPlayerCommsComponent
---@return boolean
function UDFCommStatics:FindCommsComponentByPlayer(Player, OutPlayerCommsComp) end
---@param Player APlayerController
---@param FormatName FName
---@param ChannelNameToCheck FName
---@return boolean
function UDFCommStatics:CommsFormatUsesChannelByName(Player, FormatName, ChannelNameToCheck) end
---@param Player APlayerController
---@param Format UDFCommsFormatBase
---@param ChannelToCheck UDFCommChannel
---@return boolean
function UDFCommStatics:CommsFormatUsesChannel(Player, Format, ChannelToCheck) end
---@param PlayerFormatOwner APlayerController
---@param FormatName FName
---@return boolean
function UDFCommStatics:CommsFormatHasExclusiveChannelByName(PlayerFormatOwner, FormatName) end
---@param Format UDFCommsFormatBase
---@return boolean
function UDFCommStatics:CommsFormatHasExclusiveChannel(Format) end
---@param PlayerFormatOwner APlayerController
---@param FormatName FName
---@return UDFCommChannel
function UDFCommStatics:CommsFormatGetExclusiveChannelByName(PlayerFormatOwner, FormatName) end
---@param Format UDFCommsFormatBase
---@return UDFCommChannel
function UDFCommStatics:CommsFormatGetExclusiveChannel(Format) end
---@param Player APlayerController
---@param FormatNameToUpdate FName
function UDFCommStatics:ClearCurrentExclusiveChannelForFormatByName(Player, FormatNameToUpdate) end
---@param Player APlayerController
---@param FormatToUpdate UDFCommsFormatBase
function UDFCommStatics:ClearCurrentExclusiveChannelForFormat(Player, FormatToUpdate) end


---@class UDFCommWorldSubsystem : UWorldSubsystem
UDFCommWorldSubsystem = {}

---@param DestroyedPlayerActor AActor
function UDFCommWorldSubsystem:PostSeamlessTravelPCDestroyed(DestroyedPlayerActor) end
---@param Player APlayerController
---@return UDFPlayerCommsComponent
function UDFCommWorldSubsystem:InitPlayerComms(Player) end
---@param GameMode AGameModeBase
---@param NewPlayer APlayerController
function UDFCommWorldSubsystem:GameModePostLogin(GameMode, NewPlayer) end


---@class UDFCommsFormatBase : UObject
---@field bSingleChannelUsageOnly boolean
---@field bRequiresValidSingleChannelAssignment boolean
---@field LastReceivedCommMsg FDFGenericChannelMsg
---@field FormatName FName
UDFCommsFormatBase = {}

---@param ChannelName FName
---@param AccessRulesToCheck EDFCommsFormatAccessRule
---@return boolean
function UDFCommsFormatBase:HasAccessToChannel(ChannelName, AccessRulesToCheck) end
---@param ChannelName FName
---@return boolean
function UDFCommsFormatBase:CanWriteToChannel(ChannelName) end
---@param ChannelName FName
---@return boolean
function UDFCommsFormatBase:CanReadFromChannel(ChannelName) end


---@class UDFPlayerCommsComponent : UActorComponent
---@field CommsFormats TMap<FName, UDFCommsFormatBase>
---@field OpenCommChannels FDFCommChannelMap
---@field MsgSendBuffer FDFChannelMsgRecord
---@field QueuedMsgsToSend TArray<FDFChannelMsgRecord>
---@field MsgRecvBuffer FDFChannelMsgRecord
UDFPlayerCommsComponent = {}

---@param FormatName FName
---@param SingleChannelNameToUse FName
function UDFPlayerCommsComponent:UpdateExclusiveChannelToUseForCommsFormatByName(FormatName, SingleChannelNameToUse) end
---@param Format UDFCommsFormatBase
---@param SingleChannelToUse UDFCommChannel
function UDFPlayerCommsComponent:UpdateExclusiveChannelToUseForCommsFormat(Format, SingleChannelToUse) end
---@param FormatName FName
---@param SingleChannelToUse UDFCommChannel
function UDFPlayerCommsComponent:ServerUpdateExclusiveChannelToUseForCommsFormat(FormatName, SingleChannelToUse) end
---@param FormatName FName
---@param ReceivingChannel UDFCommChannel
---@param CommMsg FDFGenericChannelMsg
function UDFPlayerCommsComponent:ServerSendCommMsgViaExclChannel(FormatName, ReceivingChannel, CommMsg) end
---@param FormatName FName
---@param ReceivingChannel UDFCommChannel
---@param CommMsg FDFGenericChannelMsg
function UDFPlayerCommsComponent:ServerSendCommMsgViaChannel(FormatName, ReceivingChannel, CommMsg) end
---@param RequestedFormatName FName
function UDFPlayerCommsComponent:ServerRequestExclusiveChannelUsedForCommsFormat(RequestedFormatName) end
---@param FormatName FName
function UDFPlayerCommsComponent:ServerClearCurrentExclusiveChannelForCommsFormat(FormatName) end
---@param AckedChannel UDFCommChannel
function UDFPlayerCommsComponent:ServerChannelOpened(AckedChannel) end
---@param FormatName FName
---@param ReceivingChannelName FName
---@param CommMsgToSend FDFGenericChannelMsg
---@param bUseChannelAsNewExclusive boolean
function UDFPlayerCommsComponent:SendCommMsgViaChannelByName(FormatName, ReceivingChannelName, CommMsgToSend, bUseChannelAsNewExclusive) end
---@param FormatToUse UDFCommsFormatBase
---@param ReceivingChannel UDFCommChannel
---@param CommMsgToSend FDFGenericChannelMsg
---@param bUseChannelAsNewExclusive boolean
function UDFPlayerCommsComponent:SendCommMsgViaChannel(FormatToUse, ReceivingChannel, CommMsgToSend, bUseChannelAsNewExclusive) end
---@param ChannelNameToRemove FName
function UDFPlayerCommsComponent:RemoveCommChannelByName(ChannelNameToRemove) end
---@param ChannelToRemove UDFCommChannel
function UDFPlayerCommsComponent:RemoveCommChannel(ChannelToRemove) end
function UDFPlayerCommsComponent:RemoveAllCommChannels() end
---@param RemovedChannel UDFCommChannel
function UDFPlayerCommsComponent:ReceiveCommChannelPreRemoved(RemovedChannel) end
---@param AddedChannel UDFCommChannel
function UDFPlayerCommsComponent:ReceiveCommChannelAdded(AddedChannel) end
---@param FormatName FName
---@param ChannelNameToCheck FName
---@return boolean
function UDFPlayerCommsComponent:FormatUsesChannelByName(FormatName, ChannelNameToCheck) end
---@param Format UDFCommsFormatBase
---@param ChannelToCheck UDFCommChannel
---@return boolean
function UDFPlayerCommsComponent:FormatUsesChannel(Format, ChannelToCheck) end
---@param FormatName FName
---@return boolean
function UDFPlayerCommsComponent:FormatHasExclusiveChannelByName(FormatName) end
---@param Format UDFCommsFormatBase
---@return boolean
function UDFPlayerCommsComponent:FormatHasExclusiveChannel(Format) end
---@param ChannelName FName
---@param OutChannelFound UDFCommChannel
---@return boolean
function UDFPlayerCommsComponent:FindCommChannel(ChannelName, OutChannelFound) end
---@param FormatName FName
---@param OutFormatFound UDFCommsFormatBase
---@return boolean
function UDFPlayerCommsComponent:FindAssociatedCommsFormat(FormatName, OutFormatFound) end
---@param ChannelNameToCheck FName
---@return boolean
function UDFPlayerCommsComponent:ContainsCommChannelByName(ChannelNameToCheck) end
---@param ChannelToCheck UDFCommChannel
---@return boolean
function UDFPlayerCommsComponent:ContainsCommChannel(ChannelToCheck) end
---@param FormatName FName
---@return boolean
function UDFPlayerCommsComponent:ContainsAssociatedCommsFormat(FormatName) end
---@param FormatName FName
---@param SingleChannelToUse UDFCommChannel
function UDFPlayerCommsComponent:ClientUpdateExclusiveChannelToUseForCommsFormat(FormatName, SingleChannelToUse) end
---@param SourceFormatName FName
---@param SourceChannel UDFCommChannel
---@param ReceivedCommMsg FDFGenericChannelMsg
function UDFPlayerCommsComponent:ClientRecvCommMsgFromChannel(SourceFormatName, SourceChannel, ReceivedCommMsg) end
---@param FormatName FName
function UDFPlayerCommsComponent:ClientClearCurrentExclusiveChannelForCommsFormat(FormatName) end
---@param FormatName FName
function UDFPlayerCommsComponent:ClearCurrentExclusiveChannelForCommsFormatByName(FormatName) end
---@param Format UDFCommsFormatBase
function UDFPlayerCommsComponent:ClearCurrentExclusiveChannelForCommsFormat(Format) end
---@param ReceivingFormat UDFCommsFormatBase
---@param ReceivingChannel UDFCommChannel
---@param CommMsgToSend FDFGenericChannelMsg
---@param bUseChannelAsNewExclusive boolean
---@return boolean
function UDFPlayerCommsComponent:CanSendCommMsgViaChannel(ReceivingFormat, ReceivingChannel, CommMsgToSend, bUseChannelAsNewExclusive) end
---@param FormatName FName
---@param ChannelName FName
---@param CommMsg FDFGenericChannelMsg
---@return boolean
function UDFPlayerCommsComponent:CanSendAndRecvCommMsgViaChannel(FormatName, ChannelName, CommMsg) end
---@param SourceFormatName FName
---@param SourceChannelName FName
---@param CommMsgToReceive FDFGenericChannelMsg
---@return boolean
function UDFPlayerCommsComponent:CanRecvCommMsgViaChannel(SourceFormatName, SourceChannelName, CommMsgToReceive) end


---@class UDFTextCommsFormat : UDFCommsFormatBase
---@field OnChatMsgReceived FDFTextCommsFormatOnChatMsgReceived
UDFTextCommsFormat = {}



---@class UDFVOIPCommStatics : UBlueprintFunctionLibrary
UDFVOIPCommStatics = {}

---@param PlayerState APlayerState
---@return boolean
function UDFVOIPCommStatics:WasPlayerTalking(PlayerState) end
---@param PlayerState APlayerState
---@param TalkChannel UDFCommChannel
---@return boolean
function UDFVOIPCommStatics:IsPlayerTalkingOverChannel(PlayerState, TalkChannel) end
---@param PlayerState APlayerState
---@return boolean
function UDFVOIPCommStatics:IsPlayerTalking(PlayerState) end
---@param PlayerState APlayerState
---@return boolean
function UDFVOIPCommStatics:IsPlayerTalkerPendingReset(PlayerState) end
---@param TalkerAudioComp UAudioComponent
---@return UVoipListenerSynthComponent
function UDFVOIPCommStatics:GetVoiceSynthOwnerOfAudioComponent(TalkerAudioComp) end
---@param Talker UVOIPTalker
---@return UVoipListenerSynthComponent
function UDFVOIPCommStatics:GetVoiceSynthComponentForVOIPTalker(Talker) end
---@param PlayerState APlayerState
---@return FDFPlayerVOIPTalkingState
function UDFVOIPCommStatics:GetValidVoiceEntryForPlayer(PlayerState) end
---@param TalkerPlayerState APlayerState
---@param ListenerLocalUserNum uint8
function UDFVOIPCommStatics:ApplyVOIPTalkerSettingsForPlayer(TalkerPlayerState, ListenerLocalUserNum) end


---@class UDFVOIPCommsFormat : UDFCommsFormatBase
---@field OnPlayerTalkingStateChangedOnChannel FDFVOIPCommsFormatOnPlayerTalkingStateChangedOnChannel
UDFVOIPCommsFormat = {}

---@param DestroyedPS AActor
function UDFVOIPCommsFormat:OnTalkerPSDestroyed(DestroyedPS) end


