#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "DFCommChannelMapItemEntry.h"
#include "DFCommChannelMap.generated.h"

class UDFCommChannel;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORKCOMMS_API FDFCommChannelMap : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDFCommChannelMapItemEntry> ChannelEntries;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UDFCommChannel*> ChannelMap;
    
public:
    FDFCommChannelMap();
};

