#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFTeamDefinition -FallbackName=DFTeamDefinition
#include "HDTeamDefinition.generated.h"

class UDFCommChannelDefinition;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDTeamDefinition : public UDFTeamDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingTickets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDFCommChannelDefinition* CommChannelDefinition;
    
public:
    UHDTeamDefinition();

};

