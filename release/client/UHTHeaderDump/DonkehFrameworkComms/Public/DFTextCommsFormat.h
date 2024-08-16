#pragma once
#include "CoreMinimal.h"
#include "DFCommsFormatBase.h"
#include "DFTextCommsChatMsgReceivedDelegateMultiDelegate.h"
#include "DFTextCommsFormat.generated.h"

UCLASS(Blueprintable)
class DONKEHFRAMEWORKCOMMS_API UDFTextCommsFormat : public UDFCommsFormatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDFTextCommsChatMsgReceivedDelegateMulti OnChatMsgReceived;
    
    UDFTextCommsFormat();

};

