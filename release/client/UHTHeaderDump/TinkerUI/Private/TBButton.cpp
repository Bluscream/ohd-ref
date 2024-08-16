#include "TBButton.h"

UTBButton::UTBButton() {
    this->bStopDoubleClickPropagation = false;
}

void UTBButton::StopDoubleClickPropagation() {
}

void UTBButton::SetIsInteractionEnabled(bool bInIsInteractionEnabled) {
}

void UTBButton::SetIsFocusable(bool bInIsFocusable) {
}

bool UTBButton::IsInteractionEnabled() const {
    return false;
}

bool UTBButton::GetIsFocusable() const {
    return false;
}


