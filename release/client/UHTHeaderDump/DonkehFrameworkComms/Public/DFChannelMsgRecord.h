#pragma once
#include "CoreMinimal.h"
#include "DFGenericChannelMsg.h"
#include "DFChannelMsgRecord.generated.h"

class UDFCommChannel;
class UDFCommsFormatBase;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORKCOMMS_API FDFChannelMsgRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDFGenericChannelMsg Msg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDFCommsFormatBase* MsgFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDFCommChannel* MsgChannel;
    
    FDFChannelMsgRecord();
};

