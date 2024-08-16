#pragma once
#include "CoreMinimal.h"
#include "AICharacterVocalProfile.h"
#include "EHDAIVocalizationType.h"
#include "HDAIHandlerBase.h"
#include "HDAIVocalHandler.generated.h"

class UHDAICombatHandler;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDAIVocalHandler : public UHDAIHandlerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAICombatHandler* CombatHandler;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableVocalization: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAICharacterVocalProfile CurrentProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableTimeLimitNotify: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFactionOnlyTimeLimit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimitNotifyRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnySoundTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContactTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LostContactTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadingTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeenHitTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnderSuppressionTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathTimeLimit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextAnySoundTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextContactTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextLostContactTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextReloadingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextBeenHitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextUnderSuppressionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextDeathTime;
    
public:
    UHDAIVocalHandler();

    UFUNCTION(BlueprintCallable)
    void VocalizeSuppression();
    
    UFUNCTION(BlueprintCallable)
    void VocalizeReload();
    
    UFUNCTION(BlueprintCallable)
    void VocalizeContact(bool bHasContact);
    
    UFUNCTION(BlueprintCallable)
    void VocalizeBeenHit();
    
    UFUNCTION(BlueprintCallable)
    void Vocalize(EHDAIVocalizationType InVocalType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTimeLimit(EHDAIVocalizationType InVocalType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPitchMultiplier(float InPitchMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void RandomizePitchMultiplier();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayVocalSound(EHDAIVocalizationType InVocalType);
    
    UFUNCTION(BlueprintCallable)
    void NotifySurroundingCharacters(EHDAIVocalizationType InVocalType);
    
};

