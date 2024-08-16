#include "DFContextualWidgetPrerequisiteBase.h"

UDFContextualWidgetPrerequisiteBase::UDFContextualWidgetPrerequisiteBase() {
    this->bForceSuccess = false;
}

bool UDFContextualWidgetPrerequisiteBase::TestPrerequisite() const {
    return false;
}

bool UDFContextualWidgetPrerequisiteBase::SatisfiesPrerequisite_Implementation() const {
    return false;
}

UDFContextualWidgetBase* UDFContextualWidgetPrerequisiteBase::GetWidgetOuter() const {
    return NULL;
}


