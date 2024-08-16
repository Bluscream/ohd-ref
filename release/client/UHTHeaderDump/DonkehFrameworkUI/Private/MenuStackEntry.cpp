#include "MenuStackEntry.h"

FMenuStackEntry::FMenuStackEntry() {
    this->Menu = NULL;
    this->ActivationMode = EMenuActivationMode::Transparent;
    this->bShowMouseCursor = false;
    this->bUIOnlyInput = false;
}

