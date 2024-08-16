#include "DFCommChannelDefinition.h"

UDFCommChannelDefinition::UDFCommChannelDefinition() {
    this->ChannelName = TEXT("Untitled");
    this->ChannelDisplayName = FText::FromString(TEXT("Untitled"));
    this->bInstanceChannelWithGroup = false;
    this->ChannelStateClass = NULL;
}

bool UDFCommChannelDefinition::InstancesChannelWithGroup() const {
    return false;
}


