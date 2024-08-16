#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DFPlayerVOIPTalkingState.h"
#include "DFVOIPCommStatics.generated.h"

class APlayerState;
class UAudioComponent;
class UDFCommChannel;
class UVOIPTalker;
class UVoipListenerSynthComponent;

UCLASS(Blueprintable)
class DONKEHFRAMEWORKCOMMS_API UDFVOIPCommStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDFVOIPCommStatics();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WasPlayerTalking(const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerTalkingOverChannel(const APlayerState* PlayerState, const UDFCommChannel* TalkChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerTalking(const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerTalkerPendingReset(const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVoipListenerSynthComponent* GetVoiceSynthOwnerOfAudioComponent(UAudioComponent* TalkerAudioComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVoipListenerSynthComponent* GetVoiceSynthComponentForVOIPTalker(UVOIPTalker* Talker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDFPlayerVOIPTalkingState GetValidVoiceEntryForPlayer(const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyVOIPTalkerSettingsForPlayer(const APlayerState* TalkerPlayerState, uint8 ListenerLocalUserNum);
    
};

