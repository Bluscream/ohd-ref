#include "DFCommsFormatBase.h"

UDFCommsFormatBase::UDFCommsFormatBase() {
    this->bSingleChannelUsageOnly = false;
    this->bRequiresValidSingleChannelAssignment = false;
}

bool UDFCommsFormatBase::HasAccessToChannel(const FName ChannelName, const EDFCommsFormatAccessRule AccessRulesToCheck) const {
    return false;
}

bool UDFCommsFormatBase::CanWriteToChannel(const FName ChannelName) const {
    return false;
}

bool UDFCommsFormatBase::CanReadFromChannel(const FName ChannelName) const {
    return false;
}


