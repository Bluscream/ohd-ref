#pragma once
#include "CoreMinimal.h"
#include "CommChannelCreationDelegateDelegate.generated.h"

class UDFCommChannel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommChannelCreationDelegate, UDFCommChannel*, CreatedChannel);

