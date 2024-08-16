---@meta

---@class UBP_HDVOIPTalker_C : UVOIPTalker
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OwningPS APlayerState
---@field NonSpatializedSettings FVoiceSettings
---@field SpatializedSettings FVoiceSettings
---@field bRegistered boolean
---@field bTalking boolean
---@field CachedAudioComp UAudioComponent
UBP_HDVOIPTalker_C = {}

function UBP_HDVOIPTalker_C:ListenForTalkingStateChangedEvents() end
---@param bUseSpatialized boolean
---@param bSettingsUpdated boolean
function UBP_HDVOIPTalker_C:UpdateSettingsUsageForNextBeginTalk(bUseSpatialized, bSettingsUpdated) end
---@param InRegisteredPS APlayerState
---@param InSpatializedSettings FVoiceSettings
---@param InNonSpatializedSettings FVoiceSettings
---@param bStartSpatialized boolean
function UBP_HDVOIPTalker_C:RegisterTalker(InRegisteredPS, InSpatializedSettings, InNonSpatializedSettings, bStartSpatialized) end
---@param AudioComponent UAudioComponent
function UBP_HDVOIPTalker_C:BPOnTalkingBegin(AudioComponent) end
function UBP_HDVOIPTalker_C:BPOnTalkingEnd() end
---@param MsgTalkerChannel UDFCommChannel
---@param MsgTalkerPS APlayerState
---@param bMsgIsTalking boolean
function UBP_HDVOIPTalker_C:TalkStateChangedOnChannel(MsgTalkerChannel, MsgTalkerPS, bMsgIsTalking) end
---@param EntryPoint int32
function UBP_HDVOIPTalker_C:ExecuteUbergraph_BP_HDVOIPTalker(EntryPoint) end


