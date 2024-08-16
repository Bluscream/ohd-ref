#pragma once
#include "CoreMinimal.h"
#include "DFCommStateSetupParams.generated.h"

class UDFCommChannel;
class UDFCommChannelDefinition;
class UDFPlayerCommsComponent;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORKCOMMS_API FDFCommStateSetupParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDFCommChannel* OwningChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDFCommChannelDefinition* OwningChannelDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDFPlayerCommsComponent* OwningChannelCommsCompOwner;
    
    FDFCommStateSetupParams();
};

