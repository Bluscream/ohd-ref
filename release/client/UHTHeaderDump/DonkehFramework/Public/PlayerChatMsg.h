#pragma once
#include "CoreMinimal.h"
#include "PlayerChatMsg.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FPlayerChatMsg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* SenderPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SenderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MsgTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MsgContent;
    
    DONKEHFRAMEWORK_API FPlayerChatMsg();
};

