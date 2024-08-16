#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HDVoipIndicatorListingWidgetBase.generated.h"

class UHDVoiceChatMsgInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDVoipIndicatorListingWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDVoiceChatMsgInfo* VoiceMsgInfo;
    
public:
    UHDVoipIndicatorListingWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetupVoiceListing(UHDVoiceChatMsgInfo* InVoiceMsgInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoiceMsgInfoSet(bool bIsDesignTime);
    
};

