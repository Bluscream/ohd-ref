#include "DFContextualWidgetBase.h"

UDFContextualWidgetBase::UDFContextualWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
}

bool UDFContextualWidgetBase::TestPrerequisites(bool bInvokeEvents) {
    return false;
}

void UDFContextualWidgetBase::PrerequisitesMet_Implementation() {
}

void UDFContextualWidgetBase::PrerequisiteNotMet_Implementation(const UDFContextualWidgetPrerequisiteBase* FailedPrereq) {
}


