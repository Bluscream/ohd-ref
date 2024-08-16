#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "DFCommChannelMapItemEntry.generated.h"

class UDFCommChannel;

USTRUCT(BlueprintType)
struct FDFCommChannelMapItemEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDFCommChannel* Value;
    
    DONKEHFRAMEWORKCOMMS_API FDFCommChannelMapItemEntry();
};

