#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DFGenericChannelMsg.h"
#include "DFCommStatics.generated.h"

class APlayerController;
class UDFCommChannel;
class UDFCommsFormatBase;
class UDFPlayerCommsComponent;

UCLASS(Blueprintable)
class DONKEHFRAMEWORKCOMMS_API UDFCommStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDFCommStatics();

    UFUNCTION(BlueprintCallable)
    static void UpdateExclusiveChannelForFormatByName(APlayerController* Player, const FName FormatNameToUpdate, const FName SingleChannelNameToUse);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateExclusiveChannelForFormat(APlayerController* Player, UDFCommsFormatBase* FormatToUpdate, UDFCommChannel* SingleChannelToUse);
    
    UFUNCTION(BlueprintCallable)
    static void SendCommsViaChannelByName(APlayerController* PlayerSender, const FName FormatName, const FName ReceivingChannelName, FDFGenericChannelMsg& MsgToSend, bool bUseChannelAsNewExclusive);
    
    UFUNCTION(BlueprintCallable)
    static void SendCommsViaChannel(APlayerController* PlayerSender, UDFCommsFormatBase* FormatToUse, UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg& MsgToSend, bool bUseChannelAsNewExclusive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PlayerHasCommChannelByName(const APlayerController* Player, const FName ChannelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PlayerHasCommChannel(const APlayerController* Player, const UDFCommChannel* Channel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindCommsComponentByPlayer(const APlayerController* Player, UDFPlayerCommsComponent*& OutPlayerCommsComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CommsFormatUsesChannelByName(const APlayerController* Player, const FName FormatName, const FName ChannelNameToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CommsFormatUsesChannel(const APlayerController* Player, const UDFCommsFormatBase* Format, const UDFCommChannel* ChannelToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CommsFormatHasExclusiveChannelByName(const APlayerController* PlayerFormatOwner, const FName FormatName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CommsFormatHasExclusiveChannel(const UDFCommsFormatBase* Format);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDFCommChannel* CommsFormatGetExclusiveChannelByName(const APlayerController* PlayerFormatOwner, const FName FormatName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDFCommChannel* CommsFormatGetExclusiveChannel(const UDFCommsFormatBase* Format);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCurrentExclusiveChannelForFormatByName(APlayerController* Player, const FName FormatNameToUpdate);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCurrentExclusiveChannelForFormat(APlayerController* Player, UDFCommsFormatBase* FormatToUpdate);
    
};

