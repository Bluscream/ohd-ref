#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "DFCommChannelEntry.h"
#include "DFCommsFormatEntry.h"
#include "DFCommDeveloperSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Game)
class DONKEHFRAMEWORKCOMMS_API UDFCommDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath PlayerCommsCompClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FDFCommsFormatEntry> CommsFormatDefinitions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FDFCommChannelEntry> CommChannelDefinitions;
    
    UDFCommDeveloperSettings();

};

