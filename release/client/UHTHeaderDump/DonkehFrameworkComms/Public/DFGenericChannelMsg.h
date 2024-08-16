#pragma once
#include "CoreMinimal.h"
#include "DFGenericChannelMsg.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORKCOMMS_API FDFGenericChannelMsg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChatMsgContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    uint8 bSenderIsTalking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FString> OptionalMsgData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* SenderPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MsgID;
    
public:
    FDFGenericChannelMsg();
};

