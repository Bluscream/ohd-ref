#include "ConsoleSettings.h"

UConsoleSettings::UConsoleSettings() {
    this->MaxScrollbackSize = 1024;
    this->ManualAutoCompleteList.AddDefaulted(178);
    this->AutoCompleteMapPaths.AddDefaulted(10);
    this->BackgroundOpacityPercentage = 85.00f;
    this->bOrderTopToBottom = false;
    this->bDisplayHelpInAutoComplete = true;
}


