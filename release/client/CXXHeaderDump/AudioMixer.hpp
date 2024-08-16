#ifndef UE4SS_SDK_AudioMixer_HPP
#define UE4SS_SDK_AudioMixer_HPP

#include "AudioMixer_enums.hpp"

struct FSubmixEffectDynamicProcessorFilterSettings
{
    uint8 bEnabled;                                                                   // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    float Cutoff;                                                                     // 0x0004 (size: 0x4)
    float GainDb;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSubmixEffectDynamicsProcessorSettings
{
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType;                         // 0x0000 (size: 0x1)
    ESubmixEffectDynamicsPeakMode PeakMode;                                           // 0x0001 (size: 0x1)
    ESubmixEffectDynamicsChannelLinkMode LinkMode;                                    // 0x0002 (size: 0x1)
    char padding_0[0x1];                                                              // 0x0003 (size: 0x1)
    float InputGainDb;                                                                // 0x0004 (size: 0x4)
    float ThresholdDb;                                                                // 0x0008 (size: 0x4)
    float Ratio;                                                                      // 0x000C (size: 0x4)
    float KneeBandwidthDb;                                                            // 0x0010 (size: 0x4)
    float LookAheadMsec;                                                              // 0x0014 (size: 0x4)
    float AttackTimeMsec;                                                             // 0x0018 (size: 0x4)
    float ReleaseTimeMsec;                                                            // 0x001C (size: 0x4)
    class USoundSubmix* ExternalSubmix;                                               // 0x0020 (size: 0x8)
    uint8 bChannelLinked;                                                             // 0x0028 (size: 0x1)
    uint8 bAnalogMode;                                                                // 0x0028 (size: 0x1)
    uint8 bKeyAudition;                                                               // 0x0028 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0029 (size: 0x3)
    float KeyGainDb;                                                                  // 0x002C (size: 0x4)
    float OutputGainDb;                                                               // 0x0030 (size: 0x4)
    FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;                         // 0x0034 (size: 0xC)
    FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;                          // 0x0040 (size: 0xC)

}; // Size: 0x50

struct FSubmixEffectEQBand
{
    float Frequency;                                                                  // 0x0000 (size: 0x4)
    float Bandwidth;                                                                  // 0x0004 (size: 0x4)
    float GainDb;                                                                     // 0x0008 (size: 0x4)
    uint8 bEnabled;                                                                   // 0x000C (size: 0x1)

}; // Size: 0x10

struct FSubmixEffectReverbFastSettings
{
    bool bBypass;                                                                     // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    float Density;                                                                    // 0x0004 (size: 0x4)
    float Diffusion;                                                                  // 0x0008 (size: 0x4)
    float Gain;                                                                       // 0x000C (size: 0x4)
    float GainHF;                                                                     // 0x0010 (size: 0x4)
    float DecayTime;                                                                  // 0x0014 (size: 0x4)
    float DecayHFRatio;                                                               // 0x0018 (size: 0x4)
    float ReflectionsGain;                                                            // 0x001C (size: 0x4)
    float ReflectionsDelay;                                                           // 0x0020 (size: 0x4)
    float LateGain;                                                                   // 0x0024 (size: 0x4)
    float LateDelay;                                                                  // 0x0028 (size: 0x4)
    float AirAbsorptionGainHF;                                                        // 0x002C (size: 0x4)
    float WetLevel;                                                                   // 0x0030 (size: 0x4)
    float DryLevel;                                                                   // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FSubmixEffectReverbSettings
{
    float Density;                                                                    // 0x0000 (size: 0x4)
    float Diffusion;                                                                  // 0x0004 (size: 0x4)
    float Gain;                                                                       // 0x0008 (size: 0x4)
    float GainHF;                                                                     // 0x000C (size: 0x4)
    float DecayTime;                                                                  // 0x0010 (size: 0x4)
    float DecayHFRatio;                                                               // 0x0014 (size: 0x4)
    float ReflectionsGain;                                                            // 0x0018 (size: 0x4)
    float ReflectionsDelay;                                                           // 0x001C (size: 0x4)
    float LateGain;                                                                   // 0x0020 (size: 0x4)
    float LateDelay;                                                                  // 0x0024 (size: 0x4)
    float AirAbsorptionGainHF;                                                        // 0x0028 (size: 0x4)
    float WetLevel;                                                                   // 0x002C (size: 0x4)
    float DryLevel;                                                                   // 0x0030 (size: 0x4)

}; // Size: 0x34

struct FSubmixEffectSubmixEQSettings
{
    TArray<FSubmixEffectEQBand> EQBands;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

class UAudioGenerator : public UObject
{
    char padding_0[0xA8];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xA8

class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    float TrimAudioCache(float InMegabytesToFree);
    class USoundWave* StopRecordingOutput(const class UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
    void StopAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
    void StartRecordingOutput(const class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
    void StartAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize);
    void SetBypassSourceEffectChainEntry(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
    void ResumeRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
    void ReplaceSoundEffectSubmix(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSubmixEffectPresetAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
    void RemoveSubmixEffectPreset(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSourceEffectFromPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
    void RemoveMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void PrimeSoundForPlayback(class USoundWave* SoundWave, const FPrimeSoundForPlaybackOnLoadCompletion OnLoadCompletion);
    void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
    void PauseRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
    void GetPhaseForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Phases, class USoundSubmix* SubmixToAnalyze);
    int32 GetNumberOfEntriesInSourceEffectChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
    void GetMagnitudeForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Magnitudes, class USoundSubmix* SubmixToAnalyze);
    void ClearSubmixEffects(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
    void ClearMasterSubmixEffects(const class UObject* WorldContextObject);
    int32 AddSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void AddSourceEffectToPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry);
    void AddMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
}; // Size: 0x28

class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectDynamicsProcessorSettings Settings;                                  // 0x00B8 (size: 0x50)

    void SetSettings(const FSubmixEffectDynamicsProcessorSettings& Settings);
    void SetExternalSubmix(class USoundSubmix* Submix);
}; // Size: 0x108

class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectReverbFastSettings Settings;                                         // 0x00A0 (size: 0x38)

    void SetSettingsWithReverbEffect(const class UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);
    void SetSettings(const FSubmixEffectReverbFastSettings& InSettings);
}; // Size: 0xD8

class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectReverbSettings Settings;                                             // 0x009C (size: 0x34)

    void SetSettingsWithReverbEffect(const class UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);
    void SetSettings(const FSubmixEffectReverbSettings& InSettings);
}; // Size: 0xD0

class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectSubmixEQSettings Settings;                                           // 0x0078 (size: 0x10)

    void SetSettings(const FSubmixEffectSubmixEQSettings& InSettings);
}; // Size: 0x88

class USynthComponent : public USceneComponent
{
    uint8 bAutoDestroy;                                                               // 0x01F0 (size: 0x1)
    uint8 bStopWhenOwnerDestroyed;                                                    // 0x01F0 (size: 0x1)
    uint8 bAllowSpatialization;                                                       // 0x01F0 (size: 0x1)
    uint8 bOverrideAttenuation;                                                       // 0x01F0 (size: 0x1)
    char padding_0[0x3];                                                              // 0x01F1 (size: 0x3)
    uint8 bOutputToBusOnly;                                                           // 0x01F4 (size: 0x1)
    char padding_1[0x3];                                                              // 0x01F5 (size: 0x3)
    class USoundAttenuation* AttenuationSettings;                                     // 0x01F8 (size: 0x8)
    FSoundAttenuationSettings AttenuationOverrides;                                   // 0x0200 (size: 0x3A0)
    class USoundConcurrency* ConcurrencySettings;                                     // 0x05A0 (size: 0x8)
    TSet<USoundConcurrency*> ConcurrencySet;                                          // 0x05A8 (size: 0x50)
    class USoundClass* SoundClass;                                                    // 0x05F8 (size: 0x8)
    class USoundEffectSourcePresetChain* SourceEffectChain;                           // 0x0600 (size: 0x8)
    class USoundSubmixBase* SoundSubmix;                                              // 0x0608 (size: 0x8)
    TArray<FSoundSubmixSendInfo> SoundSubmixSends;                                    // 0x0610 (size: 0x10)
    TArray<FSoundSourceBusSendInfo> BusSends;                                         // 0x0620 (size: 0x10)
    FSoundModulation Modulation;                                                      // 0x0630 (size: 0x10)
    TArray<FSoundSourceBusSendInfo> PreEffectBusSends;                                // 0x0640 (size: 0x10)
    uint8 bIsUISound;                                                                 // 0x0650 (size: 0x1)
    uint8 bIsPreviewSound;                                                            // 0x0650 (size: 0x1)
    char padding_2[0x3];                                                              // 0x0651 (size: 0x3)
    int32 EnvelopeFollowerAttackTime;                                                 // 0x0654 (size: 0x4)
    int32 EnvelopeFollowerReleaseTime;                                                // 0x0658 (size: 0x4)
    char padding_3[0x4];                                                              // 0x065C (size: 0x4)
    FSynthComponentOnAudioEnvelopeValue OnAudioEnvelopeValue;                         // 0x0660 (size: 0x10)
    void OnSynthEnvelopeValue(const float EnvelopeValue);
    char padding_4[0x20];                                                             // 0x0670 (size: 0x20)
    class USynthSound* Synth;                                                         // 0x0690 (size: 0x8)
    class UAudioComponent* AudioComponent;                                            // 0x0698 (size: 0x8)

    void Stop();
    void Start();
    void SetVolumeMultiplier(float VolumeMultiplier);
    void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
    bool IsPlaying();
}; // Size: 0x6D0

class USynthSound : public USoundWaveProcedural
{
    class USynthComponent* OwningSynthComponent;                                      // 0x0360 (size: 0x8)

}; // Size: 0x380

#endif
