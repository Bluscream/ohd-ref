---@meta

---@class FSubmixEffectDynamicProcessorFilterSettings
---@field bEnabled boolean
---@field Cutoff float
---@field GainDb float
FSubmixEffectDynamicProcessorFilterSettings = {}



---@class FSubmixEffectDynamicsProcessorSettings
---@field DynamicsProcessorType ESubmixEffectDynamicsProcessorType
---@field PeakMode ESubmixEffectDynamicsPeakMode
---@field LinkMode ESubmixEffectDynamicsChannelLinkMode
---@field InputGainDb float
---@field ThresholdDb float
---@field Ratio float
---@field KneeBandwidthDb float
---@field LookAheadMsec float
---@field AttackTimeMsec float
---@field ReleaseTimeMsec float
---@field ExternalSubmix USoundSubmix
---@field bChannelLinked boolean
---@field bAnalogMode boolean
---@field bKeyAudition boolean
---@field KeyGainDb float
---@field OutputGainDb float
---@field KeyHighshelf FSubmixEffectDynamicProcessorFilterSettings
---@field KeyLowshelf FSubmixEffectDynamicProcessorFilterSettings
FSubmixEffectDynamicsProcessorSettings = {}



---@class FSubmixEffectEQBand
---@field Frequency float
---@field Bandwidth float
---@field GainDb float
---@field bEnabled boolean
FSubmixEffectEQBand = {}



---@class FSubmixEffectReverbFastSettings
---@field bBypass boolean
---@field Density float
---@field Diffusion float
---@field Gain float
---@field GainHF float
---@field DecayTime float
---@field DecayHFRatio float
---@field ReflectionsGain float
---@field ReflectionsDelay float
---@field LateGain float
---@field LateDelay float
---@field AirAbsorptionGainHF float
---@field WetLevel float
---@field DryLevel float
FSubmixEffectReverbFastSettings = {}



---@class FSubmixEffectReverbSettings
---@field Density float
---@field Diffusion float
---@field Gain float
---@field GainHF float
---@field DecayTime float
---@field DecayHFRatio float
---@field ReflectionsGain float
---@field ReflectionsDelay float
---@field LateGain float
---@field LateDelay float
---@field AirAbsorptionGainHF float
---@field WetLevel float
---@field DryLevel float
FSubmixEffectReverbSettings = {}



---@class FSubmixEffectSubmixEQSettings
---@field EQBands TArray<FSubmixEffectEQBand>
FSubmixEffectSubmixEQSettings = {}



---@class UAudioGenerator : UObject
UAudioGenerator = {}


---@class UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary
UAudioMixerBlueprintLibrary = {}

---@param InMegabytesToFree float
---@return float
function UAudioMixerBlueprintLibrary:TrimAudioCache(InMegabytesToFree) end
---@param WorldContextObject UObject
---@param ExportType EAudioRecordingExportType
---@param Name FString
---@param Path FString
---@param SubmixToRecord USoundSubmix
---@param ExistingSoundWaveToOverwrite USoundWave
---@return USoundWave
function UAudioMixerBlueprintLibrary:StopRecordingOutput(WorldContextObject, ExportType, Name, Path, SubmixToRecord, ExistingSoundWaveToOverwrite) end
---@param WorldContextObject UObject
---@param SubmixToStopAnalyzing USoundSubmix
function UAudioMixerBlueprintLibrary:StopAnalyzingOutput(WorldContextObject, SubmixToStopAnalyzing) end
---@param WorldContextObject UObject
---@param ExpectedDuration float
---@param SubmixToRecord USoundSubmix
function UAudioMixerBlueprintLibrary:StartRecordingOutput(WorldContextObject, ExpectedDuration, SubmixToRecord) end
---@param WorldContextObject UObject
---@param SubmixToAnalyze USoundSubmix
---@param FFTSize EFFTSize
---@param InterpolationMethod EFFTPeakInterpolationMethod
---@param WindowType EFFTWindowType
---@param HopSize float
function UAudioMixerBlueprintLibrary:StartAnalyzingOutput(WorldContextObject, SubmixToAnalyze, FFTSize, InterpolationMethod, WindowType, HopSize) end
---@param WorldContextObject UObject
---@param PresetChain USoundEffectSourcePresetChain
---@param EntryIndex int32
---@param bBypassed boolean
function UAudioMixerBlueprintLibrary:SetBypassSourceEffectChainEntry(WorldContextObject, PresetChain, EntryIndex, bBypassed) end
---@param WorldContextObject UObject
---@param SubmixToPause USoundSubmix
function UAudioMixerBlueprintLibrary:ResumeRecordingOutput(WorldContextObject, SubmixToPause) end
---@param WorldContextObject UObject
---@param InSoundSubmix USoundSubmix
---@param SubmixChainIndex int32
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary:ReplaceSoundEffectSubmix(WorldContextObject, InSoundSubmix, SubmixChainIndex, SubmixEffectPreset) end
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixChainIndex int32
function UAudioMixerBlueprintLibrary:RemoveSubmixEffectPresetAtIndex(WorldContextObject, SoundSubmix, SubmixChainIndex) end
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary:RemoveSubmixEffectPreset(WorldContextObject, SoundSubmix, SubmixEffectPreset) end
---@param WorldContextObject UObject
---@param PresetChain USoundEffectSourcePresetChain
---@param EntryIndex int32
function UAudioMixerBlueprintLibrary:RemoveSourceEffectFromPresetChain(WorldContextObject, PresetChain, EntryIndex) end
---@param WorldContextObject UObject
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary:RemoveMasterSubmixEffect(WorldContextObject, SubmixEffectPreset) end
---@param SoundWave USoundWave
---@param OnLoadCompletion FPrimeSoundForPlaybackOnLoadCompletion
function UAudioMixerBlueprintLibrary:PrimeSoundForPlayback(SoundWave, OnLoadCompletion) end
---@param SoundCue USoundCue
function UAudioMixerBlueprintLibrary:PrimeSoundCueForPlayback(SoundCue) end
---@param WorldContextObject UObject
---@param SubmixToPause USoundSubmix
function UAudioMixerBlueprintLibrary:PauseRecordingOutput(WorldContextObject, SubmixToPause) end
---@param WorldContextObject UObject
---@param Frequencies TArray<float>
---@param Phases TArray<float>
---@param SubmixToAnalyze USoundSubmix
function UAudioMixerBlueprintLibrary:GetPhaseForFrequencies(WorldContextObject, Frequencies, Phases, SubmixToAnalyze) end
---@param WorldContextObject UObject
---@param PresetChain USoundEffectSourcePresetChain
---@return int32
function UAudioMixerBlueprintLibrary:GetNumberOfEntriesInSourceEffectChain(WorldContextObject, PresetChain) end
---@param WorldContextObject UObject
---@param Frequencies TArray<float>
---@param Magnitudes TArray<float>
---@param SubmixToAnalyze USoundSubmix
function UAudioMixerBlueprintLibrary:GetMagnitudeForFrequencies(WorldContextObject, Frequencies, Magnitudes, SubmixToAnalyze) end
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
function UAudioMixerBlueprintLibrary:ClearSubmixEffects(WorldContextObject, SoundSubmix) end
---@param WorldContextObject UObject
function UAudioMixerBlueprintLibrary:ClearMasterSubmixEffects(WorldContextObject) end
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixEffectPreset USoundEffectSubmixPreset
---@return int32
function UAudioMixerBlueprintLibrary:AddSubmixEffect(WorldContextObject, SoundSubmix, SubmixEffectPreset) end
---@param WorldContextObject UObject
---@param PresetChain USoundEffectSourcePresetChain
---@param Entry FSourceEffectChainEntry
function UAudioMixerBlueprintLibrary:AddSourceEffectToPresetChain(WorldContextObject, PresetChain, Entry) end
---@param WorldContextObject UObject
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary:AddMasterSubmixEffect(WorldContextObject, SubmixEffectPreset) end


---@class USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectDynamicsProcessorSettings
USubmixEffectDynamicsProcessorPreset = {}

---@param Settings FSubmixEffectDynamicsProcessorSettings
function USubmixEffectDynamicsProcessorPreset:SetSettings(Settings) end
---@param Submix USoundSubmix
function USubmixEffectDynamicsProcessorPreset:SetExternalSubmix(Submix) end


---@class USubmixEffectReverbFastPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectReverbFastSettings
USubmixEffectReverbFastPreset = {}

---@param InReverbEffect UReverbEffect
---@param WetLevel float
---@param DryLevel float
function USubmixEffectReverbFastPreset:SetSettingsWithReverbEffect(InReverbEffect, WetLevel, DryLevel) end
---@param InSettings FSubmixEffectReverbFastSettings
function USubmixEffectReverbFastPreset:SetSettings(InSettings) end


---@class USubmixEffectReverbPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectReverbSettings
USubmixEffectReverbPreset = {}

---@param InReverbEffect UReverbEffect
---@param WetLevel float
---@param DryLevel float
function USubmixEffectReverbPreset:SetSettingsWithReverbEffect(InReverbEffect, WetLevel, DryLevel) end
---@param InSettings FSubmixEffectReverbSettings
function USubmixEffectReverbPreset:SetSettings(InSettings) end


---@class USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectSubmixEQSettings
USubmixEffectSubmixEQPreset = {}

---@param InSettings FSubmixEffectSubmixEQSettings
function USubmixEffectSubmixEQPreset:SetSettings(InSettings) end


---@class USynthComponent : USceneComponent
---@field bAutoDestroy boolean
---@field bStopWhenOwnerDestroyed boolean
---@field bAllowSpatialization boolean
---@field bOverrideAttenuation boolean
---@field bOutputToBusOnly boolean
---@field AttenuationSettings USoundAttenuation
---@field AttenuationOverrides FSoundAttenuationSettings
---@field ConcurrencySettings USoundConcurrency
---@field ConcurrencySet TSet<USoundConcurrency>
---@field SoundClass USoundClass
---@field SourceEffectChain USoundEffectSourcePresetChain
---@field SoundSubmix USoundSubmixBase
---@field SoundSubmixSends TArray<FSoundSubmixSendInfo>
---@field BusSends TArray<FSoundSourceBusSendInfo>
---@field Modulation FSoundModulation
---@field PreEffectBusSends TArray<FSoundSourceBusSendInfo>
---@field bIsUISound boolean
---@field bIsPreviewSound boolean
---@field EnvelopeFollowerAttackTime int32
---@field EnvelopeFollowerReleaseTime int32
---@field OnAudioEnvelopeValue FSynthComponentOnAudioEnvelopeValue
---@field Synth USynthSound
---@field AudioComponent UAudioComponent
USynthComponent = {}

function USynthComponent:Stop() end
function USynthComponent:Start() end
---@param VolumeMultiplier float
function USynthComponent:SetVolumeMultiplier(VolumeMultiplier) end
---@param Submix USoundSubmixBase
---@param SendLevel float
function USynthComponent:SetSubmixSend(Submix, SendLevel) end
---@return boolean
function USynthComponent:IsPlaying() end


---@class USynthSound : USoundWaveProcedural
---@field OwningSynthComponent USynthComponent
USynthSound = {}



