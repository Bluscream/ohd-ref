#include "DFCommChannelStateLibrary.h"

UDFCommChannelStateLibrary::UDFCommChannelStateLibrary() {
}

void UDFCommChannelStateLibrary::NotifyChannelOfPreparedState(TScriptInterface<IDFCommChannelStateInterface> ChannelState) {
}

bool UDFCommChannelStateLibrary::IsChannelStatePrepared(TScriptInterface<IDFCommChannelStateInterface> ChannelState) {
    return false;
}

UDFCommChannel* UDFCommChannelStateLibrary::GetOwningCommChannel(TScriptInterface<IDFCommChannelStateInterface> ChannelState) {
    return NULL;
}


