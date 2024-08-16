#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EDFCommsFormatAccessRule.h"
#include "Templates/SubclassOf.h"
#include "DFCommChannelDefinition.generated.h"

class UDFCommsFormatBase;

UCLASS(Blueprintable)
class DONKEHFRAMEWORKCOMMS_API UDFCommChannelDefinition : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChannelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChannelDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInstanceChannelWithGroup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChannelGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ChannelStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UDFCommsFormatBase>, EDFCommsFormatAccessRule> FormatAccessRules;
    
public:
    UDFCommChannelDefinition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InstancesChannelWithGroup() const;
    
};

