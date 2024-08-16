#pragma once
#include "CoreMinimal.h"
#include "EAudioRecordingExportType.h"
#include "OnSubmixEnvelopeBPDelegate.h"
#include "OnSubmixRecordedFileDoneDelegate.h"
#include "SoundSubmixWithParentBase.h"
#include "SoundSubmix.generated.h"

class UObject;
class USoundEffectSubmixPreset;
class USoundWave;
class USoundfieldEncodingSettingsBase;

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API USoundSubmix : public USoundSubmixWithParentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMuteWhenBackgrounded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundEffectSubmixPreset*> SubmixEffectChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvelopeFollowerAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvelopeFollowerReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutputVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubmixRecordedFileDone OnSubmixRecordedFileDone;
    
    USoundSubmix();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StopRecordingOutput(const UObject* WorldContextObject, EAudioRecordingExportType ExportType, const FString& Name, const FString& Path, USoundWave* ExistingSoundWaveToOverwrite);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StopEnvelopeFollowing(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StartRecordingOutput(const UObject* WorldContextObject, float ExpectedDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StartEnvelopeFollowing(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetSubmixOutputVolume(const UObject* WorldContextObject, float InOutputVolume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void AddEnvelopeFollowerDelegate(const UObject* WorldContextObject, const FOnSubmixEnvelopeBP& OnSubmixEnvelopeBP);
    
};

