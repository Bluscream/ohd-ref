#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DFGenericChannelMsg.h"
#include "EDFCommsFormatAccessRule.h"
#include "DFCommsFormatBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORKCOMMS_API UDFCommsFormatBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSingleChannelUsageOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresValidSingleChannelAssignment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDFGenericChannelMsg LastReceivedCommMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName FormatName;
    
public:
    UDFCommsFormatBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAccessToChannel(const FName ChannelName, const EDFCommsFormatAccessRule AccessRulesToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWriteToChannel(const FName ChannelName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReadFromChannel(const FName ChannelName) const;
    
};

