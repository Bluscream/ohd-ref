#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DFCommChannel.generated.h"

class UDFCommChannelDefinition;
class UDFCommsFormatBase;

UCLASS(Blueprintable)
class DONKEHFRAMEWORKCOMMS_API UDFCommChannel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bChannelPreInitialized: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bChannelClosed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCompletedSetup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bChannelOpenOnClient: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ChannelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UDFCommChannelDefinition* ChannelDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UObject* ChannelState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDFCommsFormatBase*> AssociatedCommsFormats;
    
public:
    UDFCommChannel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetChannelState(UObject* NewChannelState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFormat(const UDFCommsFormatBase* Format) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetChannelNameStr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetChannelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetChannelGroupNameIfValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetChannelDisplayName() const;
    
};

