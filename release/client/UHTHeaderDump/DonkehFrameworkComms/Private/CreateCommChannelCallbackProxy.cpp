#include "CreateCommChannelCallbackProxy.h"

UCreateCommChannelCallbackProxy::UCreateCommChannelCallbackProxy() {
    this->CreateChannelOwnerPC = NULL;
    this->CreateChannelDef = NULL;
}

UCreateCommChannelCallbackProxy* UCreateCommChannelCallbackProxy::CreateCommChannelFor(APlayerController* Player, const UDFCommChannelDefinition* ChannelDef, const FName ChannelNameOverride) {
    return NULL;
}


