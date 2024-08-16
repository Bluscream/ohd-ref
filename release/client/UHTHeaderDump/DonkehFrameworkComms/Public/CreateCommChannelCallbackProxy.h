#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "CommChannelCreationDelegateDelegate.h"
#include "EmptyCommsDelegateDelegate.h"
#include "CreateCommChannelCallbackProxy.generated.h"

class APlayerController;
class UCreateCommChannelCallbackProxy;
class UDFCommChannelDefinition;

UCLASS(Blueprintable)
class UCreateCommChannelCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommChannelCreationDelegate OnPerformSetup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommChannelCreationDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyCommsDelegate OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* CreateChannelOwnerPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDFCommChannelDefinition* CreateChannelDef;
    
public:
    UCreateCommChannelCallbackProxy();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UCreateCommChannelCallbackProxy* CreateCommChannelFor(APlayerController* Player, const UDFCommChannelDefinition* ChannelDef, const FName ChannelNameOverride);
    
};

